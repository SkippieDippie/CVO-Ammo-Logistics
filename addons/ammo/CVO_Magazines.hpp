class CVO_Magazines {
    class GVARMAG(Default) {
        ammoSimple = QGVAR(ammo_default);
        ammoBasic = "";
        ammoTracer = QGVAR(ammo_default_tracer);
        quickloader = "";
        magazines[] = {};
        useBelt = 0;
    };

    class GVARMAG(STANAG_556x45): GVARMAG(Default) {
        ammoBasic = QGVAR(ammo_556x45);
        ammoTracer = QGVAR(ammo_556x45_tracer);
    };

    class GVARMAG(30Rnd_STANAG_65x39): GVARMAG(Default) {
        ammoBasic = QGVAR(ammo_65x39);
        ammoTracer = QGVAR(ammo_65x39_tracer);
        magazines[] = {
            {"30Rnd_65x39_caseless_mag", QGVAR(ammo_65x39)},
            {"30Rnd_65x39_caseless_mag_Tracer", QGVAR(ammo_65x39)},
            {"ACE_30Rnd_65x39_caseless_mag_Tracer_Dim", QGVAR(ammo_65x39)},
            {"ACE_30Rnd_65_Creedmor_mag", QGVAR(ammo_65x39)},
            {"ACE_30Rnd_65x47_Scenar_mag", QGVAR(ammo_65x39)}
        };
    };

    class GVARMAG(30Rnd_STANAG_65x39_Black): GVARMAG(30Rnd_STANAG_65x39) {
        magazines[] = {
            {"30Rnd_65x39_caseless_black_mag", QGVAR(ammo_65x39)},
            {"30Rnd_65x39_caseless_black_mag_Tracer", QGVAR(ammo_65x39)},
            {"ACE_30Rnd_65_Creedmor_black_mag", QGVAR(ammo_65x39)},
            {"ACE_30Rnd_65x47_Scenar_black_mag", QGVAR(ammo_65x39)}
        };
    };

    class GVARMAG(30Rnd_STANAG_65x39_Khaki): GVARMAG(30Rnd_STANAG_65x39) {
        magazines[] = {
            {"30Rnd_65x39_caseless_khaki_mag", QGVAR(ammo_65x39)},
            {"30Rnd_65x39_caseless_khaki_mag_Tracer", QGVAR(ammo_65x39)},
            {"ACE_30Rnd_65_Creedmor_khaki_mag", QGVAR(ammo_65x39)},
            {"ACE_30Rnd_65x47_Scenar_khaki_mag", QGVAR(ammo_65x39)}
        };
    };


    class GVARMAG(100Rnd_STANAG_65x39): GVARMAG(30Rnd_STANAG_65x39) {
        ammoBasic = QGVAR(ammo_65x39);
        ammoTracer = QGVAR(ammo_65x39_tracer);
        magazines[] = {
            {"100Rnd_65x39_caseless_mag", QGVAR(ammo_65x39)},
            {"100Rnd_65x39_caseless_mag_Tracer", QGVAR(ammo_65x39)},
            {"ACE_100Rnd_65x39_caseless_mag_Tracer_Dim", QGVAR(ammo_65x39)}
        };
    };

    class GVARMAG(100Rnd_STANAG_65x39_Black): GVARMAG(100Rnd_STANAG_65x39) {
        magazines[] = {
            {"100Rnd_65x39_caseless_black_mag", QGVAR(ammo_65x39)},
            {"100Rnd_65x39_caseless_black_mag_tracer", QGVAR(ammo_65x39)}
        };
    };

    class GVARMAG(100Rnd_STANAG_65x39_Khaki): GVARMAG(100Rnd_STANAG_65x39) {
        magazines[] = {
            {"100Rnd_65x39_caseless_khaki_mag", QGVAR(ammo_65x39)},
            {"100Rnd_65x39_caseless_khaki_mag_tracer", QGVAR(ammo_65x39)}
        };
    };
};
