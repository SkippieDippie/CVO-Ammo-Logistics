#include "..\script_component.hpp"
/*
 * Author: 24th Chorni Voron
 * Returns the magazine classes an empty magazine can be converted into.
 * Reads the magazines array of the magazine's data class, leaving out the
 * Reads the magazines array of the magazine's data class, leaving out the
 * magazine itself and any class that does not exist in the loaded config.
 *
 * Arguments:
 * 0: Magazine classname <STRING>
 *
 * Return Value:
 * Target magazine classnames <ARRAY>
 *
 * Example:
 * ["30Rnd_65x39_caseless_mag"] call cvo_redmag_core_fnc_getConvertTargets
 *
 * Public: No
 */

params [["_magClass", "", [""]]];

// magazines[] entries are [magazine classname, ammo classname]
((([_magClass] call FUNC(getMagazineData)) get "magazines") apply {_x param [0, ""]}) select {
    _x != "" && {_x != _magClass} && {isClass (configFile >> "CfgMagazines" >> _x)}
}
