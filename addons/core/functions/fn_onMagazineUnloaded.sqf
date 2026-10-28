#include "..\script_component.hpp"
/*
 * Author: 24th Chorni Voron
 *
 * Handler for the "MagazineUnloaded" event (manual or scripted unload).
 * If the magazine removed from the weapon is empty, it is returned to the unit
 * instead of disappearing.
 *
 * Public: No
 */

params ["_unit", "", "", "_magazine"];

if (_magazine isEqualTo []) exitWith {};

_magazine params ["_magClass", "_ammoCount"];

if (_ammoCount > 0) exitWith {};

if !(([_magClass] call FUNC(getMagazineData)) get "isRepackable") exitWith {};

[_unit, _magClass] call FUNC(removeVanillaEmptyMagazine);

[_unit, _magClass] call FUNC(returnEmptyMagazine);
