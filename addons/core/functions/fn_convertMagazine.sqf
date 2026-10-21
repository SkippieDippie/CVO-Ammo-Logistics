#include "..\script_component.hpp"
/*
 * Author: 24th Chorni Voron
 * Converts one empty magazine into an empty magazine of another class.
 * The target must be listed in the convertMag array of the source magazine's data class.
 * Instant and free. If the unit has no room for the new magazine, it is placed on the ground.
 *
 * Arguments:
 * 0: Source magazine classname <STRING>
 * 1: Target magazine classname <STRING>
 * 2: Unit <OBJECT> (default: player)
 *
 * Return Value:
 * Magazine converted <BOOL>
 *
 * Example:
 * ["30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag_Tracer"] call cvo_redmag_core_fnc_convertMagazine
 *
 * Public: No
 */

params [
    ["_fromClass", "", [""]],
    ["_toClass", "", [""]],
    ["_unit", player, [objNull]]
];

if (isNull _unit) exitWith {false};

if (([_fromClass] call FUNC(getConvertTargets)) findIf {_x == _toClass} == -1) exitWith {
    [localize LSTRING(invalidMagazine)] call CBA_fnc_notify;
    false
};

private _counts = (([_unit] call FUNC(getInventoryMagazines)) select {
    (_x select 0) == _fromClass
}) apply {_x select 1};

private _index = _counts find 0;

if (_index == -1) exitWith {
    [localize LSTRING(magazineNotFound)] call CBA_fnc_notify;
    false
};

_counts deleteAt _index;

_unit removeMagazines _fromClass;
{
    _unit addMagazine [_fromClass, _x];
} forEach _counts;

[_unit, _toClass] call FUNC(returnEmptyMagazine);

true
