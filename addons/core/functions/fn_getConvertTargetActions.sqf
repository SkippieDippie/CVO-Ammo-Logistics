#include "..\script_component.hpp"
/*
 * Author: 24th Chorni Voron
 * Builds the child actions of one entry in the "Convert" submenu.
 * One entry per magazine class the empty magazine can be converted into.
 *
 * Arguments:
 * 0: Target <OBJECT>
 * 1: Player <OBJECT>
 * 2: Action params <ARRAY>
 *    0: Source magazine classname <STRING>
 *
 * Return Value:
 * Children actions <ARRAY>
 *
 * Public: No
 */

params ["_target", "_player", "_params"];
_params params ["_fromClass"];

private _actions = [];

{
    private _toClass = _x;
    private _toData = [_toClass] call FUNC(getMagazineData);

    private _action = [
        format ["%1_%2_%3", QGVAR(convert), _fromClass, _toClass],
        format ["%1 (0/%2)", _toData get "displayName", _toData get "count"],
        _toData get "picture",
        {
            params ["_target", "_player", "_params"];
            _params params ["_fromClass", "_toClass"];
            [_fromClass, _toClass, _player] call FUNC(convertMagazine);
        },
        {true},
        {},
        [_fromClass, _toClass]
    ] call ace_interact_menu_fnc_createAction;

    _actions pushBack [_action, [], _target];
} forEach ([_fromClass] call FUNC(getConvertTargets));

_actions
