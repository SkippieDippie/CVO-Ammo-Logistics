#include "..\script_component.hpp"
/*
 * Author: 24th Chorni Voron
 * Returns the magazine classes an empty magazine can be converted into.
 * Reads the convertMag array of the magazine's data class, leaving out the
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

(([_magClass] call FUNC(getMagazineData)) get "convertMag") select {
    _x != _magClass && {isClass (configFile >> "CfgMagazines" >> _x)}
}
