class CVO_Magazines {
    class GVARMAG(Default);

    class GVARMAG(STANAG_556x45): GVARMAG(Default) {
        item = QGVAR(556x45);
        itemTracer = QGVAR(556x45_tracer);
    };

    class GVARMAG(30Rnd_STANAG_65x39): GVARMAG(Default) {
        item = QGVAR(65x39);
        itemTracer = QGVAR(65x39_tracer);
        convertMag[] = {
            "30Rnd_65x39_caseless_mag",
            "30Rnd_65x39_caseless_mag_Tracer",
            "ACE_30Rnd_65x39_caseless_mag_Tracer_Dim",
            "ACE_30Rnd_65_Creedmor_mag",
            "ACE_30Rnd_65x47_Scenar_mag"
        };
    };

    class GVARMAG(30Rnd_STANAG_65x39_Black): GVARMAG(30Rnd_STANAG_65x39) {
        convertMag[] = {
            "30Rnd_65x39_caseless_black_mag",
            "30Rnd_65x39_caseless_black_mag_Tracer",
            "ACE_30Rnd_65_Creedmor_black_mag",
            "ACE_30Rnd_65x47_Scenar_black_mag"
        };
    };

    class GVARMAG(30Rnd_STANAG_65x39_Khaki): GVARMAG(30Rnd_STANAG_65x39) {
        convertMag[] = {
            "30Rnd_65x39_caseless_khaki_mag",
            "30Rnd_65x39_caseless_khaki_mag_Tracer",
            "ACE_30Rnd_65_Creedmor_khaki_mag",
            "ACE_30Rnd_65x47_Scenar_khaki_mag"
        };
    };


    class GVARMAG(100Rnd_STANAG_65x39): GVARMAG(30Rnd_STANAG_65x39) {
        item = QGVAR(65x39);
        itemTracer = QGVAR(65x39_tracer);
        convertMag[] = {
            "100Rnd_65x39_caseless_mag",
            "100Rnd_65x39_caseless_mag_Tracer",
            "ACE_100Rnd_65x39_caseless_mag_Tracer_Dim"
        };
    };

    class GVARMAG(100Rnd_STANAG_65x39_Black): GVARMAG(100Rnd_STANAG_65x39) {
        convertMag[] = {
            "100Rnd_65x39_caseless_black_mag",
            "100Rnd_65x39_caseless_black_mag_tracer"
        };
    };

    class GVARMAG(100Rnd_STANAG_65x39_Khaki): GVARMAG(100Rnd_STANAG_65x39) {
        convertMag[] = {
            "100Rnd_65x39_caseless_khaki_mag",
            "100Rnd_65x39_caseless_khaki_mag_tracer"
        };
    };
};
