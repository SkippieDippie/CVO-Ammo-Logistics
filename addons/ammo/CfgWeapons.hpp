class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;

    class GVAR(556x45): ACE_ItemCore {
        scope = 2;
        displayName = CSTRING(556x45);
        descriptionShort = CSTRING(556x45_desc);
        picture = QPATHTOF(data\556x45_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.5; // placeholder
        };
    };

    class GVAR(556x45_Tracer): GVAR(556x45) {
        displayName = CSTRING(556x45_tracer);
        descriptionShort = CSTRING(556x45_tracer_desc);
        picture = QPATHTOF(data\556x45_tracer_ca.paa);
    };

    class GVAR(65x39): ACE_ItemCore {
        scope = 2;
        displayName = CSTRING(65x39);
        descriptionShort = CSTRING(65x39_desc);
        picture = QPATHTOF(data\65x39_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.5; // placeholder
        };
    };

    class GVAR(65x39_Tracer): GVAR(65x39) {
        displayName = CSTRING(65x39_tracer);
        descriptionShort = CSTRING(65x39_tracer_desc);
        picture = QPATHTOF(data\65x39_tracer_ca.paa);
    };
};
