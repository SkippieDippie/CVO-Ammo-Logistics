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
 *    1: Opened from the Refill menu <BOOL> (default: false)
 *       true: entries are labelled "Convert to ..." and a refill starts after the conversion
 *
 * Return Value:
 * Children actions <ARRAY>
 *
 * Public: No
 */

params ["_target", "_player", "_params"];
_params params ["_fromClass", ["_inRefillMenu", false, [false]]];

private _actions = [];

{
    private _toClass = _x;
    private _toData = [_toClass] call FUNC(getMagazineData);

    private _text = _toData get "displayName";
    if (_inRefillMenu) then {
        _text = format [localize LSTRING(reloadAs), _text];
    };

    private _action = [
        format ["%1_%2_%3", QGVAR(convert), _fromClass, _toClass],
        _text,
        _toData get "picture",
        {
            params ["_target", "_player", "_params"];
            _params params ["_fromClass", "_toClass", "_inRefillMenu"];

            if (([_fromClass, _toClass, _player] call FUNC(convertMagazine)) && {_inRefillMenu}) then {
                [_toClass, 0, false, _player] call FUNC(repackMagazine);
            };
        },
        {true},
        {},
        [_fromClass, _toClass, _inRefillMenu]
    ] call ace_interact_menu_fnc_createAction;

    _actions pushBack [_action, [], _target];
} forEach ([_fromClass] call FUNC(getConvertTargets));

_actions
