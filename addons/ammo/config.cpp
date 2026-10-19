#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = ADDON_NAME;
        author = ECSTRING(main,cvo);
        authors[] = {"Skippie [CVO]", "OverlordZorn [CVO]"};
        url = ECSTRING(main,url);

        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {QPVAR(core), "ace_common", "A3_Weapons_F"};

        units[] = {};
        weapons[] = {
            QGVAR(basic),   QGVAR(basic_tracer), 
            QGVAR(300WM),   QGVAR(300WM_tracer), 
            QGVAR(338LM),   QGVAR(338LM_tracer), 
            QGVAR(338NM),   QGVAR(338NM_tracer), 
            QGVAR(408),     QGVAR(408_tracer), 
            QGVAR(45ACP),   QGVAR(45ACP_tracer), 
            QGVAR(50BW),    QGVAR(50BW_tracer), 
            QGVAR(545x39),  QGVAR(545x39_tracer), 
            QGVAR(556x45),  QGVAR(556x45_tracer), 
            QGVAR(57x28),   QGVAR(57x28_tracer), 
            QGVAR(58x42),   QGVAR(58x42_tracer), 
            QGVAR(65x39),   QGVAR(65x39_tracer), 
            QGVAR(762x39),  QGVAR(762x39_tracer), 
            QGVAR(762x51),  QGVAR(762x51_tracer), 
            QGVAR(762x54),  QGVAR(762x54_tracer), 
            QGVAR(9x19),    QGVAR(9x19_tracer), 
            QGVAR(9x21),    QGVAR(9x21_tracer), 
            QGVAR(93x64),   QGVAR(93x64_tracer), 
            QGVAR(127x54),  QGVAR(127x54_tracer), 
            QGVAR(127x99),  QGVAR(127x99_tracer), 
            QGVAR(127x108), QGVAR(127x108_tracer)
        };

        skipWhenMissingDependencies = 0;

        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CVO_Magazines.hpp"
#include "CfgMagazines.hpp"
