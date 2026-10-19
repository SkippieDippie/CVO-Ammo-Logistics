class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;


    class GVAR(basic): ACE_ItemCore {
        scope = 2;
        displayName = CSTRING(basic);
        descriptionShort = CSTRING(basic_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.73;
        };
    };

    class GVAR(basic_tracer): GVAR(basic) {
        displayName = CSTRING(basic_tracer);
        descriptionShort = CSTRING(basic_tracer_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
    };


    class GVAR(300WM): GVAR(basic) {
        displayName = CSTRING(300WM);
        descriptionShort = CSTRING(300WM_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.73;
        };
    };

    class GVAR(300WM_tracer): GVAR(300WM) {
        displayName = CSTRING(300WM_tracer);
        descriptionShort = CSTRING(300WM_tracer_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
    };

    class GVAR(338LM): GVAR(basic) {
        displayName = CSTRING(338LM);
        descriptionShort = CSTRING(338LM_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };

    class GVAR(338LM_tracer): GVAR(338LM) {
        displayName = CSTRING(338LM_tracer);
        descriptionShort = CSTRING(338LM_tracer_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
    };

    class GVAR(338NM): GVAR(basic) {
        displayName = CSTRING(338NM);
        descriptionShort = CSTRING(338NM_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };

    class GVAR(338NM_tracer): GVAR(338NM) {
        displayName = CSTRING(338NM_tracer);
        descriptionShort = CSTRING(338NM_tracer_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
    };

    class GVAR(408): GVAR(basic) {
        displayName = CSTRING(408);
        descriptionShort = CSTRING(408_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1.32;
        };
    };

    class GVAR(408_tracer): GVAR(408) {
        displayName = CSTRING(408_tracer);
        descriptionShort = CSTRING(408_tracer_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
    };

    class GVAR(45ACP): GVAR(basic) {
        displayName = CSTRING(45ACP);
        descriptionShort = CSTRING(45ACP_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.46;
        };
    };

    class GVAR(45ACP_tracer): GVAR(45ACP) {
        displayName = CSTRING(45ACP_tracer);
        descriptionShort = CSTRING(45ACP_tracer_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
    };

    class GVAR(50BW): GVAR(basic) {
        displayName = CSTRING(50BW);
        descriptionShort = CSTRING(50BW_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.74;
        };
    };

    class GVAR(50BW_tracer): GVAR(50BW) {
        displayName = CSTRING(50BW_tracer);
        descriptionShort = CSTRING(50BW_tracer_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
    };

    class GVAR(545x39): GVAR(basic) {
        displayName = CSTRING(545x39);
        descriptionShort = CSTRING(545x39_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.23;
        };
    };

    class GVAR(545x39_tracer): GVAR(545x39) {
        displayName = CSTRING(545x39_tracer);
        descriptionShort = CSTRING(545x39_tracer_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
    };

    class GVAR(556x45): GVAR(basic) {
        displayName = CSTRING(556x45);
        descriptionShort = CSTRING(556x45_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.26;
        };
    };

    class GVAR(556x45_tracer): GVAR(556x45) {
        displayName = CSTRING(556x45_tracer);
        descriptionShort = CSTRING(556x45_tracer_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
    };

    class GVAR(57x28): GVAR(basic) {
        displayName = CSTRING(57x28);
        descriptionShort = CSTRING(57x28_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.14;
        };
    };

    class GVAR(57x28_tracer): GVAR(57x28) {
        displayName = CSTRING(57x28_tracer);
        descriptionShort = CSTRING(57x28_tracer_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
    };

    class GVAR(58x42): GVAR(basic) {
        displayName = CSTRING(58x42);
        descriptionShort = CSTRING(58x42_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.28;
        };
    };

    class GVAR(58x42_tracer): GVAR(58x42) {
        displayName = CSTRING(58x42_tracer);
        descriptionShort = CSTRING(58x42_tracer_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
    };

    class GVAR(65x39): GVAR(basic) {
        displayName = CSTRING(65x39);
        descriptionShort = CSTRING(65x39_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.32;
        };
    };

    class GVAR(65x39_tracer): GVAR(65x39) {
        displayName = CSTRING(65x39_tracer);
        descriptionShort = CSTRING(65x39_tracer_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
    };

    class GVAR(762x39): GVAR(basic) {
        displayName = CSTRING(762x39);
        descriptionShort = CSTRING(762x39_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.36;
        };
    };

    class GVAR(762x39_tracer): GVAR(762x39) {
        displayName = CSTRING(762x39_tracer);
        descriptionShort = CSTRING(762x39_tracer_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
    };

    class GVAR(762x51): GVAR(basic) {
        displayName = CSTRING(762x51);
        descriptionShort = CSTRING(762x51_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.54;
        };
    };

    class GVAR(762x51_tracer): GVAR(762x51) {
        displayName = CSTRING(762x51_tracer);
        descriptionShort = CSTRING(762x51_tracer_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
    };

    class GVAR(762x54): GVAR(basic) {
        displayName = CSTRING(762x54);
        descriptionShort = CSTRING(762x54_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.49;
        };
    };

    class GVAR(762x54_tracer): GVAR(762x54) {
        displayName = CSTRING(762x54_tracer);
        descriptionShort = CSTRING(762x54_tracer_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
    };

    class GVAR(9x19): GVAR(basic) {
        displayName = CSTRING(9x19);
        descriptionShort = CSTRING(9x19_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.25;
        };
    };

    class GVAR(9x19_tracer): GVAR(9x19) {
        displayName = CSTRING(9x19_tracer);
        descriptionShort = CSTRING(9x19_tracer_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
    };

    class GVAR(9x21): GVAR(basic) {
        displayName = CSTRING(9x21);
        descriptionShort = CSTRING(9x21_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.24;
        };
    };

    class GVAR(9x21_tracer): GVAR(9x21) {
        displayName = CSTRING(9x21_tracer);
        descriptionShort = CSTRING(9x21_tracer_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
    };

    class GVAR(93x64): GVAR(basic) {
        displayName = CSTRING(93x64);
        descriptionShort = CSTRING(93x64_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.32;
        };
    };

    class GVAR(93x64_tracer): GVAR(93x64) {
        displayName = CSTRING(93x64_tracer);
        descriptionShort = CSTRING(93x64_tracer_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
    };

    class GVAR(127x54): GVAR(basic) {
        displayName = CSTRING(127x54);
        descriptionShort = CSTRING(127x54_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1.39;
        };
    };

    class GVAR(127x54_tracer): GVAR(127x54) {
        displayName = CSTRING(127x54_tracer);
        descriptionShort = CSTRING(127x54_tracer_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
    };

    class GVAR(127x99): GVAR(basic) {
        displayName = CSTRING(127x99);
        descriptionShort = CSTRING(127x99_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 2.59;
        };
    };

    class GVAR(127x99_tracer): GVAR(127x99) {
        displayName = CSTRING(127x99_tracer);
        descriptionShort = CSTRING(127x99_tracer_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
    };

    class GVAR(127x108): GVAR(basic) {
        displayName = CSTRING(127x108);
        descriptionShort = CSTRING(127x108_desc);
        picture = QPATHTOF(data\ammo_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 2.83;
        };
    };

    class GVAR(127x108_tracer): GVAR(127x108) {
        displayName = CSTRING(127x108_tracer);
        descriptionShort = CSTRING(127x108_tracer_desc);
        picture = QPATHTOF(data\ammo_ca.paa);
    };
};
