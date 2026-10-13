#include "..\script_component.hpp"
/*
 * Author: 24th Chorni Voron
 * Returns all magazines in the unit's inventory that are not full, including empty ones.
 * Magazines currently loaded in weapons are never included.
 *
 * Arguments:
 * 0: Unit <OBJECT> (default: player)
 *
 * Return Value:
 * Partial magazines <ARRAY>
 * Each element: [class <STRING>, ammoCount <NUMBER>, maxCount <NUMBER>]
 *
 * Example:
 * [] call cvo_redmag_core_fnc_getPartialMagazines
 *
 * Public: No
 */

params [["_unit", player, [objNull]]];

private _partialMags = [];

{
    _x params ["_magClass", "_ammoCount"];

    private _maxCount = (([_magClass] call FUNC(getMagazineData)) get "count");
    
    if (_maxCount > 0 && {_ammoCount < _maxCount} && {(([_magClass] call FUNC(getMagazineData)) get "isRepackable")}) then {
        _partialMags pushBack [_magClass, _ammoCount, _maxCount];
    };
} forEach ([_unit] call FUNC(getInventoryMagazines));

_partialMags
