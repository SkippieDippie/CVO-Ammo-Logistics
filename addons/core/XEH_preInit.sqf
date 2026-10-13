#include "script_component.hpp"

ADDON = false;

[
    QPVAR(timePerRound),            // setting variable: "cvo_redmag_timePerRound"
    "SLIDER",
    CSTRING(timePerRound),
    CSTRING(settingsCategory),
    [0.5, 5, 1, 1, false],
    1,
    {},
    false
] call CBA_fnc_addSetting;

ADDON = true;
