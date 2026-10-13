#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = ADDON_NAME;

        author = CSTRING(cvo);
        authors[] = {"Skippie [CVO]"};
        url = CSTRING(url);

        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {QPVAR(ammo), QPVAR(core)};
        
        units[] = {};
        weapons[] = {};

        skipWhenMissingDependencies = 0;

        VERSION_CONFIG;
    };
};
