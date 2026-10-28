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
            QGVAR(ammo_default),   QGVAR(ammo_default_tracer),
            QGVAR(ammo_simple_pistol),
            QGVAR(ammo_simple_intermediary),
            QGVAR(ammo_simple_rifle),
            QGVAR(ammo_simple_antimateriel),
            QGVAR(ammo_simple_shotgun),
            QGVAR(ammo_300WM),   QGVAR(ammo_300WM_tracer),
            QGVAR(ammo_338LM),   QGVAR(ammo_338LM_tracer),
            QGVAR(ammo_338NM),   QGVAR(ammo_338NM_tracer),
            QGVAR(ammo_408),     QGVAR(ammo_408_tracer),
            QGVAR(ammo_45ACP),   QGVAR(ammo_45ACP_tracer),
            QGVAR(ammo_50BW),    QGVAR(ammo_50BW_tracer),
            QGVAR(ammo_545x39),  QGVAR(ammo_545x39_tracer),
            QGVAR(ammo_556x45),  QGVAR(ammo_556x45_tracer),
            QGVAR(ammo_57x28),   QGVAR(ammo_57x28_tracer),
            QGVAR(ammo_58x42),   QGVAR(ammo_58x42_tracer),
            QGVAR(ammo_65x39),   QGVAR(ammo_65x39_tracer),
            QGVAR(ammo_762x39),  QGVAR(ammo_762x39_tracer),
            QGVAR(ammo_762x51),  QGVAR(ammo_762x51_tracer),
            QGVAR(ammo_762x54),  QGVAR(ammo_762x54_tracer),
            QGVAR(ammo_9x19),    QGVAR(ammo_9x19_tracer),
            QGVAR(ammo_9x21),    QGVAR(ammo_9x21_tracer),
            QGVAR(ammo_93x64),   QGVAR(ammo_93x64_tracer),
            QGVAR(ammo_127x54),  QGVAR(ammo_127x54_tracer),
            QGVAR(ammo_127x99),  QGVAR(ammo_127x99_tracer),
            QGVAR(ammo_127x108), QGVAR(ammo_127x108_tracer)
        };

        skipWhenMissingDependencies = 0;

        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CVO_Magazines.hpp"
#include "CfgMagazines.hpp"
