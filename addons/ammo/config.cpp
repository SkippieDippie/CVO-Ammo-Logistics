#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = ADDON_NAME;
        author = ECSTRING(main,cvo);
        authors[] = {"Skippie [CVO]"};
        url = ECSTRING(main,url);

        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {QPVAR(core), "ace_common", "A3_Weapons_F"};

        units[] = {};
        weapons[] = {QGVAR(556x45), QGVAR(556x45_Tracer), QGVAR(65x39), QGVAR(65x39_Tracer)};

        skipWhenMissingDependencies = 0;

        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CVO_Magazines.hpp"
#include "CfgMagazines.hpp"
