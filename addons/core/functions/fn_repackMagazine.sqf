#include "..\script_component.hpp"
/*
 * Author: 24th Chorni Voron
 * Refills a magazine with loose ammo items from the unit's inventory,
 * or, in unload mode, empties the magazine and returns its rounds as ammo items.
 * If the process is interrupted, the magazine keeps the
 * rounds processed so far (based on elapsed time).
 * Magazines currently loaded in a weapon are never touched.
 *
 * Arguments:
 * 0: Magazine classname <STRING>
 * 1: Initial number of rounds in the magazine <NUMBER>
 * 2: Unload the magazine instead of refilling it <BOOL> (default: false)
 * 3: Unit <OBJECT> (default: player)
 *
 * Return Value:
 * Process started <BOOL>
 *
 * Example:
 * ["30Rnd_65x39_caseless_mag", 12] call cvo_redmag_core_fnc_repackMagazine
 * ["30Rnd_65x39_caseless_mag", 12, true] call cvo_redmag_core_fnc_repackMagazine
 *
 * Public: No
 */

params [
    ["_magClass", "", [""]],
    ["_ammoCount", 0, [0]],
    ["_unload", false, [false]],
    ["_unit", player, [objNull]]
];

if (isNull _unit) exitWith {false};

private _timePerRound = PVAR(timePerRound);
private _magData = [_magClass] call FUNC(getMagazineData);

private _maxCount = _magData get "count";
private _ammoClass = _magData get "ammoItem";

if (_maxCount <= 0 || {!(_magData get "isRepackable")}) exitWith {
    [localize LSTRING(invalidMagazine)] call CBA_fnc_notify;
    false
};

// Rounds to move: all rounds in the magazine when unloading, the missing rounds when refilling
private _rounds = [_maxCount - _ammoCount, _ammoCount] select _unload;

if (!_unload && {_rounds <= 0}) exitWith {
    [localize LSTRING(magazineFull)] call CBA_fnc_notify;
    false
};

if (_unload && {_rounds <= 0}) exitWith {
    [localize LSTRING(magazineEmpty)] call CBA_fnc_notify;
    false
};

private _hasMag = {
    _x params ["_class", "_ammo"];
    _class == _magClass && {_ammo == _ammoCount}
} count ([_unit] call FUNC(getInventoryMagazines)) > 0;

if (!_hasMag) exitWith {
    [localize LSTRING(magazineNotFound)] call CBA_fnc_notify;
    false
};

// Refilling needs loose ammo, unloading does not
private _ammoAvailable = {_x == _ammoClass} count items _unit;

if (!_unload && {_ammoAvailable <= 0}) exitWith {
    [localize LSTRING(noAmmo)] call CBA_fnc_notify;
    false
};

// Not enough for a full repack: warn the player and load what is possible
if (!_unload && {_ammoAvailable < _rounds}) then {
    [localize LSTRING(notEnoughAmmo)] call CBA_fnc_notify;

    _rounds = _ammoAvailable;
};

private _applyRepack = {
    params ["_magClass", "_ammoCount", "_ammoClass", "_rounds", "_unit", "_unload"];

    if (_rounds <= 0) exitWith {0};

    // Refilling: never use more ammo items than the unit still has (items may have been dropped mid-process)
    if (!_unload) then {
        _rounds = _rounds min ({_x == _ammoClass} count items _unit);
    };

    if (_rounds <= 0) exitWith {0};

    private _mags = ([_unit] call FUNC(getInventoryMagazines)) select {
        (_x select 0) == _magClass
    } apply {_x select 1};

    private _index = _mags find _ammoCount;
    if (_index == -1) exitWith {0};
    _mags deleteAt _index;

    private _newCount = [_ammoCount + _rounds, _ammoCount - _rounds] select _unload;

    // Refilling consumes the ammo items
    if (!_unload) then {
        for "_i" from 1 to _rounds do {
            _unit removeItem _ammoClass;
        };
    };

    _unit removeMagazines _magClass;
    {
        _unit addMagazine [_magClass, _x];
    } forEach _mags;

    _unit addMagazine [_magClass, _newCount];

    // Unloading returns the ammo items, anything that does not fit goes on the ground
    if (_unload) then {
        private _overflow = 0;

        for "_i" from 1 to _rounds do {
            if (_unit canAdd _ammoClass) then {
                _unit addItem _ammoClass;
            } else {
                _overflow = _overflow + 1;
            };
        };

        if (_overflow > 0) then {
            private _holder = nearestObjects [_unit, ["GroundWeaponHolder"], 2] param [0, objNull];

            if (isNull _holder) then {
                _holder = createVehicle ["GroundWeaponHolder", getPosATL _unit, [], 0, "CAN_COLLIDE"];
            };

            _holder addItemCargoGlobal [_ammoClass, _overflow];
        };
    };

    // Rounds actually processed
    _rounds
};

// Instant processing, no progress bar needed (safeguard if the setting is overridden to 0)
if (_timePerRound <= 0) exitWith {
    [_magClass, _ammoCount, _ammoClass, _rounds, _unit, _unload] call _applyRepack;
    true
};

private _totalTime = _rounds * _timePerRound;

[
    _totalTime,
    [_magClass, _ammoCount, _ammoClass, _timePerRound, _rounds, _applyRepack, _unit, _unload],
    {
        // On finish: all rounds processed
        (_this select 0) params ["_magClass", "_ammoCount", "_ammoClass", "_timePerRound", "_rounds", "_applyRepack", "_unit", "_unload"];

        [_magClass, _ammoCount, _ammoClass, _rounds, _unit, _unload] call _applyRepack;
    },
    {
        // On fail / cancelled: process only the rounds completed so far
        _this params ["_args", "_elapsedTime"];
        _args params ["_magClass", "_ammoCount", "_ammoClass", "_timePerRound", "_rounds", "_applyRepack", "_unit", "_unload"];

        private _roundsDone = (floor (_elapsedTime / _timePerRound)) min _rounds;

        // _applyRepack returns the rounds it actually processed (fewer if ammo items were lost)
        if (_roundsDone > 0) then {
            _roundsDone = [_magClass, _ammoCount, _ammoClass, _roundsDone, _unit, _unload] call _applyRepack;
        };

        if (_roundsDone > 0) then {
            private _message = [LSTRING(repackInterrupted), LSTRING(unloadInterrupted)] select _unload;
            [format [localize _message, _roundsDone]] call CBA_fnc_notify;
        } else {
            private _message = [LSTRING(repackCancelled), LSTRING(unloadCancelled)] select _unload;
            [localize _message] call CBA_fnc_notify;
        };
    },
    format [localize ([LSTRING(loadingRounds), LSTRING(unloadingRounds)] select _unload), _rounds],
    {
        // Condition: abort if the magazine disappears, or (when refilling) there are too few ammo items
        (_this select 0) params ["_magClass", "_ammoCount", "_ammoClass", "", "_rounds", "", "_unit", "_unload"];

        private _hasMag = {
            _x params ["_class", "_ammo"];
            _class == _magClass && {_ammo == _ammoCount}
        } count ([_unit] call FUNC(getInventoryMagazines)) > 0;

        _hasMag && {_unload || {({_x == _ammoClass} count items _unit) >= _rounds}}
    },
    ["isNotInside", "isNotSwimming"]
] call ace_common_fnc_progressBar;

true
