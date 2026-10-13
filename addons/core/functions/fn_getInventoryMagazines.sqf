#include "..\script_component.hpp"

/*
 * Author: 24th Chorni Voron
 * Returns all magazines stored in the unit's uniform, vest and backpack,
 * including empty ones. Magazines loaded in weapons are never included.
 *
 * Arguments:
 * 0: Unit <OBJECT> (default: player)
 *
 * Return Value:
 * Magazines <ARRAY>
 * Each element: [class <STRING>, ammoCount <NUMBER>]
 *
 * Example:
 * [player] call cvo_redmag_core_fnc_getInventoryMagazines
 *
 * Public: No
 */

params [["_unit", player, [objNull]]];

private _mags = [];

{
    if (!isNull _x) then {
        _mags append magazinesAmmoCargo _x;
    };
} forEach [uniformContainer _unit, vestContainer _unit, backpackContainer _unit];

_mags
