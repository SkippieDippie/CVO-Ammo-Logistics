#include "..\script_component.hpp"
/*
 * Author: 24th Chorni Voron
 * Builds the child actions of an empty magazine entry in the Refill menu:
 * one "Convert to ..." entry per target magazine class.
 * Selecting the entry itself starts the regular refill, so no refill child is added here.
 *
 * Arguments:
 * 0: Target <OBJECT>
 * 1: Player <OBJECT>
 * 2: Action params <ARRAY>
 *    0: Magazine classname <STRING>
 *
 * Return Value:
 * Children actions <ARRAY>
 *
 * Public: No
 */

params ["_target", "_player", "_params"];
_params params ["_class"];

[_target, _player, [_class, true]] call FUNC(getConvertTargetActions)
