class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;


    class GVAR(ammo_default): ACE_ItemCore {
        scope = 2;
        displayName = CSTRING(default);
        descriptionShort = CSTRING(default_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
        ACE_asItem = 1;
        ACE_asItem = 1;

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.73;
        };
    };

    class GVAR(ammo_default_tracer): GVAR(ammo_default) {
        displayName = CSTRING(default_tracer);
        descriptionShort = CSTRING(default_tracer_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
    };


    class GVAR(ammo_simple_pistol): GVAR(ammo_default) {
        displayName = CSTRING(simple_pistol);
        descriptionShort = CSTRING(simple_pistol_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.2;
        };
    };


    class GVAR(ammo_simple_intermediary): GVAR(ammo_default) {
        displayName = CSTRING(simple_intermediary);
        descriptionShort = CSTRING(simple_intermediary_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.24;
        };
    };


    class GVAR(ammo_simple_rifle): GVAR(ammo_default) {
        displayName = CSTRING(simple_rifle);
        descriptionShort = CSTRING(simple_rifle_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.52;
        };
    };


    class GVAR(ammo_simple_antimateriel): GVAR(ammo_default) {
        displayName = CSTRING(simple_antimateriel);
        descriptionShort = CSTRING(simple_antimateriel_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 2.00;
        };
    };


    class GVAR(ammo_simple_shotgun): GVAR(ammo_default) {
        displayName = CSTRING(simple_shotgun);
        descriptionShort = CSTRING(simple_shotgun_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.4; //needs adjusting later
        };
    };


    class GVAR(ammo_300WM): GVAR(ammo_default) {
        displayName = CSTRING(300WM);
        descriptionShort = CSTRING(300WM_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.73;
        };
    };

    class GVAR(ammo_300WM_tracer): GVAR(ammo_300WM) {
    class GVAR(ammo_300WM_tracer): GVAR(ammo_300WM) {
        displayName = CSTRING(300WM_tracer);
        descriptionShort = CSTRING(300WM_tracer_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
    };

    class GVAR(ammo_338LM): GVAR(ammo_default) {
        displayName = CSTRING(338LM);
        descriptionShort = CSTRING(338LM_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };

    class GVAR(ammo_338LM_tracer): GVAR(ammo_338LM) {
    class GVAR(ammo_338LM_tracer): GVAR(ammo_338LM) {
        displayName = CSTRING(338LM_tracer);
        descriptionShort = CSTRING(338LM_tracer_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
    };

    class GVAR(ammo_338NM): GVAR(ammo_default) {
        displayName = CSTRING(338NM);
        descriptionShort = CSTRING(338NM_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };

    class GVAR(ammo_338NM_tracer): GVAR(ammo_338NM) {
    class GVAR(ammo_338NM_tracer): GVAR(ammo_338NM) {
        displayName = CSTRING(338NM_tracer);
        descriptionShort = CSTRING(338NM_tracer_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
    };

    class GVAR(ammo_408): GVAR(ammo_default) {
        displayName = CSTRING(408);
        descriptionShort = CSTRING(408_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1.32;
        };
    };

    class GVAR(ammo_408_tracer): GVAR(ammo_408) {
    class GVAR(ammo_408_tracer): GVAR(ammo_408) {
        displayName = CSTRING(408_tracer);
        descriptionShort = CSTRING(408_tracer_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
    };

    class GVAR(ammo_45ACP): GVAR(ammo_default) {
        displayName = CSTRING(45ACP);
        descriptionShort = CSTRING(45ACP_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.46;
        };
    };

    class GVAR(ammo_45ACP_tracer): GVAR(ammo_45ACP) {
    class GVAR(ammo_45ACP_tracer): GVAR(ammo_45ACP) {
        displayName = CSTRING(45ACP_tracer);
        descriptionShort = CSTRING(45ACP_tracer_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
    };

    class GVAR(ammo_50BW): GVAR(ammo_default) {
        displayName = CSTRING(50BW);
        descriptionShort = CSTRING(50BW_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.74;
        };
    };

    class GVAR(ammo_50BW_tracer): GVAR(ammo_50BW) {
    class GVAR(ammo_50BW_tracer): GVAR(ammo_50BW) {
        displayName = CSTRING(50BW_tracer);
        descriptionShort = CSTRING(50BW_tracer_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
    };

    class GVAR(ammo_545x39): GVAR(ammo_default) {
        displayName = CSTRING(545x39);
        descriptionShort = CSTRING(545x39_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.23;
        };
    };

    class GVAR(ammo_545x39_tracer): GVAR(ammo_545x39) {
    class GVAR(ammo_545x39_tracer): GVAR(ammo_545x39) {
        displayName = CSTRING(545x39_tracer);
        descriptionShort = CSTRING(545x39_tracer_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
    };

    class GVAR(ammo_556x45): GVAR(ammo_default) {
        displayName = CSTRING(556x45);
        descriptionShort = CSTRING(556x45_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.26;
        };
    };

    class GVAR(ammo_556x45_tracer): GVAR(ammo_556x45) {
    class GVAR(ammo_556x45_tracer): GVAR(ammo_556x45) {
        displayName = CSTRING(556x45_tracer);
        descriptionShort = CSTRING(556x45_tracer_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
    };

    class GVAR(ammo_57x28): GVAR(ammo_default) {
        displayName = CSTRING(57x28);
        descriptionShort = CSTRING(57x28_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.14;
        };
    };

    class GVAR(ammo_57x28_tracer): GVAR(ammo_57x28) {
    class GVAR(ammo_57x28_tracer): GVAR(ammo_57x28) {
        displayName = CSTRING(57x28_tracer);
        descriptionShort = CSTRING(57x28_tracer_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
    };

    class GVAR(ammo_58x42): GVAR(ammo_default) {
        displayName = CSTRING(58x42);
        descriptionShort = CSTRING(58x42_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.28;
        };
    };

    class GVAR(ammo_58x42_tracer): GVAR(ammo_58x42) {
    class GVAR(ammo_58x42_tracer): GVAR(ammo_58x42) {
        displayName = CSTRING(58x42_tracer);
        descriptionShort = CSTRING(58x42_tracer_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
    };

    class GVAR(ammo_65x39): GVAR(ammo_default) {
        displayName = CSTRING(65x39);
        descriptionShort = CSTRING(65x39_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.32;
        };
    };

    class GVAR(ammo_65x39_tracer): GVAR(ammo_65x39) {
    class GVAR(ammo_65x39_tracer): GVAR(ammo_65x39) {
        displayName = CSTRING(65x39_tracer);
        descriptionShort = CSTRING(65x39_tracer_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
    };

    class GVAR(ammo_762x39): GVAR(ammo_default) {
        displayName = CSTRING(762x39);
        descriptionShort = CSTRING(762x39_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.36;
        };
    };

    class GVAR(ammo_762x39_tracer): GVAR(ammo_762x39) {
    class GVAR(ammo_762x39_tracer): GVAR(ammo_762x39) {
        displayName = CSTRING(762x39_tracer);
        descriptionShort = CSTRING(762x39_tracer_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
    };

    class GVAR(ammo_762x51): GVAR(ammo_default) {
        displayName = CSTRING(762x51);
        descriptionShort = CSTRING(762x51_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.54;
        };
    };

    class GVAR(ammo_762x51_tracer): GVAR(ammo_762x51) {
    class GVAR(ammo_762x51_tracer): GVAR(ammo_762x51) {
        displayName = CSTRING(762x51_tracer);
        descriptionShort = CSTRING(762x51_tracer_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
    };

    class GVAR(ammo_762x54): GVAR(ammo_default) {
        displayName = CSTRING(762x54);
        descriptionShort = CSTRING(762x54_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.49;
        };
    };

    class GVAR(ammo_762x54_tracer): GVAR(ammo_762x54) {
    class GVAR(ammo_762x54_tracer): GVAR(ammo_762x54) {
        displayName = CSTRING(762x54_tracer);
        descriptionShort = CSTRING(762x54_tracer_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
    };

    class GVAR(ammo_9x19): GVAR(ammo_default) {
        displayName = CSTRING(9x19);
        descriptionShort = CSTRING(9x19_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.25;
        };
    };

    class GVAR(ammo_9x19_tracer): GVAR(ammo_9x19) {
    class GVAR(ammo_9x19_tracer): GVAR(ammo_9x19) {
        displayName = CSTRING(9x19_tracer);
        descriptionShort = CSTRING(9x19_tracer_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
    };

    class GVAR(ammo_9x21): GVAR(ammo_default) {
        displayName = CSTRING(9x21);
        descriptionShort = CSTRING(9x21_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.24;
        };
    };

    class GVAR(ammo_9x21_tracer): GVAR(ammo_9x21) {
    class GVAR(ammo_9x21_tracer): GVAR(ammo_9x21) {
        displayName = CSTRING(9x21_tracer);
        descriptionShort = CSTRING(9x21_tracer_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
    };

    class GVAR(ammo_93x64): GVAR(ammo_default) {
        displayName = CSTRING(93x64);
        descriptionShort = CSTRING(93x64_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.32;
        };
    };

    class GVAR(ammo_93x64_tracer): GVAR(ammo_93x64) {
    class GVAR(ammo_93x64_tracer): GVAR(ammo_93x64) {
        displayName = CSTRING(93x64_tracer);
        descriptionShort = CSTRING(93x64_tracer_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
    };

    class GVAR(ammo_127x54): GVAR(ammo_default) {
        displayName = CSTRING(127x54);
        descriptionShort = CSTRING(127x54_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1.39;
        };
    };

    class GVAR(ammo_127x54_tracer): GVAR(ammo_127x54) {
    class GVAR(ammo_127x54_tracer): GVAR(ammo_127x54) {
        displayName = CSTRING(127x54_tracer);
        descriptionShort = CSTRING(127x54_tracer_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
    };

    class GVAR(ammo_127x99): GVAR(ammo_default) {
        displayName = CSTRING(127x99);
        descriptionShort = CSTRING(127x99_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 2.59;
        };
    };

    class GVAR(ammo_127x99_tracer): GVAR(ammo_127x99) {
    class GVAR(ammo_127x99_tracer): GVAR(ammo_127x99) {
        displayName = CSTRING(127x99_tracer);
        descriptionShort = CSTRING(127x99_tracer_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
    };

    class GVAR(ammo_127x108): GVAR(ammo_default) {
        displayName = CSTRING(127x108);
        descriptionShort = CSTRING(127x108_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 2.83;
        };
    };

    class GVAR(ammo_127x108_tracer): GVAR(ammo_127x108) {
    class GVAR(ammo_127x108_tracer): GVAR(ammo_127x108) {
        displayName = CSTRING(127x108_tracer);
        descriptionShort = CSTRING(127x108_tracer_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
    };
};
