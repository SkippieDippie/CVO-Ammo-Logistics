#include "..\script_component.hpp"
/*
 * Author: 24th Chorni Voron
 * Gives an empty magazine back to a unit.
 * If the unit has no room, the magazine is placed on the ground next to the unit instead.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Magazine classname <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, "30Rnd_65x39_caseless_mag"] call cvo_redmag_core_fnc_returnEmptyMagazine
 *
 * Public: No
 */

params [
    ["_unit", player, [objNull]],
    ["_magClass", "", [""]]
];

if (isNull _unit || {_magClass == ""}) exitWith {};

if (_unit canAdd _magClass) then {
    // Room in uniform / vest / backpack
    _unit addMagazine [_magClass, 0];
} else {
    // Inventory full: drop the empty mag on the ground
    private _holder = nearestObjects [_unit, ["GroundWeaponHolder"], 2] param [0, objNull];

    if (isNull _holder) then {
        _holder = createVehicle ["GroundWeaponHolder", getPosATL _unit, [], 0, "CAN_COLLIDE"];
    };

    // addMagazineAmmoCargo: [class, number of mags, rounds per mag]
    _holder addMagazineAmmoCargo [_magClass, 1, 0];
};
