#include "script_component.hpp"

ADDON = false;

[
    QPVAR(timePerRound),            // setting variable: "cvo_redmag_timePerRound"
    "SLIDER",
    CSTRING(timePerRound),
    CSTRING(settingsCategory),
    [0.5, 5, 1, 1, false],
    CBA_SETTING_GLOBAL,
    {},
    false
] call CBA_fnc_addSetting;

[
    QPVAR(convertMode),            // setting variable: "cvo_redmag_convertMode"
    "LIST",
    [CSTRING(convertMode), CSTRING(convertMode_tooltip)],
    CSTRING(settingsCategory),
    [   
        [SET_CONVERT_REPACK, SET_CONVERT_REFILL, SET_CONVERT_BOTH], 
        [CSTRING(convertMode_menu), CSTRING(convertMode_refill), CSTRING(convertMode_both)], 
        SET_CONVERT_BOTH
    ],
    CBA_SETTING_FORCELOCAL,
    {},
    false
] call CBA_fnc_addSetting;

ADDON = true;
