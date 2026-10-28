#include "..\script_component.hpp"
/*
 * Author: 24th Chorni Voron
 *
 * Handler for the "Reloaded" event (magazine swap during a reload).
 * If the old magazine swapped out of the weapon is empty, it is returned to the unit
 * instead of disappearing.
 *
 * Public: No
 */

params ["_unit", "", "", "", "_oldMagazine"];

// No old magazine (e.g. weapon was unloaded before reload)
if (_oldMagazine isEqualTo []) exitWith {};

_oldMagazine params ["_magClass", "_ammoCount"];

// Only handle empty magazines
if (_ammoCount > 0) exitWith {};

if !(([_magClass] call FUNC(getMagazineData)) get "isRepackable") exitWith {};

[_unit, _magClass] call FUNC(returnEmptyMagazine);
