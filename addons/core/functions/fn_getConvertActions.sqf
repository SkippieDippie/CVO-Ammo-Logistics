#include "..\script_component.hpp"
/*
 * Author: 24th Chorni Voron
 * Builds the child actions of the "Convert" submenu.
 * One entry per distinct empty magazine class that can be converted into at least one other class.
 * Each entry opens a submenu listing the possible target magazines.
 *
 * Arguments:
 * 0: Target <OBJECT>
 * 1: Player <OBJECT>
 *
 * Return Value:
 * Children actions <ARRAY>
 *
 * Public: No
 */

params ["_target", "_player"];

private _empty = [];
{
    _x params ["_class", "_count"];

    if (_count == 0) then {
        _empty pushBack _class;
    };
} forEach ([_player] call FUNC(getInventoryMagazines));

private _actions = [];

{
    private _class = _x;
    private _magData = [_class] call FUNC(getMagazineData);

    if ((_magData get "isRepackable") && {count ([_class] call FUNC(getConvertTargets)) > 0}) then {
        private _amount = {_x == _class} count _empty;
        private _text = _magData get "displayName";
        if (_amount > 1) then {
            _text = format ["%1 x%2", _text, _amount];
        };

        private _action = [
            format ["%1_%2", QGVAR(convert), _class],
            _text,
            _magData get "picture",
            {},
            {true},
            FUNC(getConvertTargetActions),
            [_class]
        ] call ace_interact_menu_fnc_createAction;

        _actions pushBack [_action, [], _target];
    };
} forEach (_empty arrayIntersect _empty);

_actions
