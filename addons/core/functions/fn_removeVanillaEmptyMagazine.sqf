#include "..\script_component.hpp"
/*
 * Author: 24th Chorni Voron
 * Removes one empty magazine of the given class from containers nearby. 
 * Used to cancel out the empty magazine that vanilla
 * places in the destination container when a magazine is unloaded manually.
 *
 * Arguments:
 * 0: Unit <OBJECT> (default: player)
 * 1: Magazine classname <STRING>
 *
 * Return Value:
 * A magazine was removed <BOOL>
 *
 * Example:
 * [player, "30Rnd_65x39_caseless_mag"] call cvo_redmag_core_fnc_removeVanillaEmptyMagazine
 *
 * Public: No
 */

params [
    ["_unit", player, [objNull]],
    ["_magClass", "", [""]]
];

if (isNull _unit || {_magClass == ""}) exitWith {false};

private _radius = 5;


private _containers = nearestObjects [_unit, ["WeaponHolder", "ReammoBox_F", "AllVehicles", "Thing"], _radius];
_containers = _containers select {_x != _unit};

private _removed = false;

{
    private _container = _x;
    private _mags = magazinesAmmoCargo _container;

    private _index = _mags findIf {
        _x params ["_class", "_ammo"];
        _ammo == 0 && {_class == _magClass}
    };

    if (_index != -1) exitWith {
        _mags deleteAt _index;

        clearMagazineCargoGlobal _container;
        {
            _x params ["_class", "_ammo"];
            _container addMagazineAmmoCargo [_class, 1, _ammo];
        } forEach _mags;

        _removed = true;
    };
} forEach _containers;

_removed
