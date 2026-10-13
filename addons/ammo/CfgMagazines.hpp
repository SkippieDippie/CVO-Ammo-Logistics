class CfgMagazines {
    class CA_Magazine;
    class 30Rnd_65x39_caseless_mag_Tracer;
    class 100Rnd_65x39_caseless_mag_Tracer;

    class 30Rnd_556x45_Stanag: CA_Magazine {
        PVAR(magazineData) = QGVARMAG(STANAG_556x45);
    };


    // 30Rnd 6.5 STANAG Magazines
    class 30Rnd_65x39_caseless_mag: CA_Magazine {
        PVAR(magazineData) = QGVARMAG(30Rnd_STANAG_65x39);
    };

    class 30Rnd_65x39_caseless_black_mag: 30Rnd_65x39_caseless_mag {
        PVAR(magazineData) = QGVARMAG(30Rnd_STANAG_65x39_Black);
    };

    class ACE_30Rnd_65_Creedmor_black_mag: 30Rnd_65x39_caseless_black_mag {
        PVAR(magazineData) = QGVARMAG(30Rnd_STANAG_65x39_Black);
    };

    class ACE_30Rnd_65x47_Scenar_black_mag: 30Rnd_65x39_caseless_black_mag {
        PVAR(magazineData) = QGVARMAG(30Rnd_STANAG_65x39_Black);
    };

    class 30Rnd_65x39_caseless_black_mag_Tracer: 30Rnd_65x39_caseless_mag_Tracer {
        PVAR(magazineData) = QGVARMAG(30Rnd_STANAG_65x39_Black);
    };

    class 30Rnd_65x39_caseless_khaki_mag: 30Rnd_65x39_caseless_mag {
        PVAR(magazineData) = QGVARMAG(30Rnd_STANAG_65x39_Khaki);
    };

    class ACE_30Rnd_65_Creedmor_khaki_mag: 30Rnd_65x39_caseless_khaki_mag {
        PVAR(magazineData) = QGVARMAG(30Rnd_STANAG_65x39_Khaki);
    };

    class ACE_30Rnd_65x47_Scenar_khaki_mag: 30Rnd_65x39_caseless_khaki_mag {
        PVAR(magazineData) = QGVARMAG(30Rnd_STANAG_65x39_Khaki);
    };

    class 30Rnd_65x39_caseless_khaki_mag_Tracer: 30Rnd_65x39_caseless_mag_Tracer {
        PVAR(magazineData) = QGVARMAG(30Rnd_STANAG_65x39_Khaki);
    };


    // 100Rnd 6.5 STANAG Magazines
    class 100Rnd_65x39_caseless_mag: CA_Magazine {
        PVAR(magazineData) = QGVARMAG(100Rnd_STANAG_65x39);
    };

    class ACE_100Rnd_65x39_caseless_mag_Tracer_Dim: 100Rnd_65x39_caseless_mag_Tracer {
        PVAR(magazineData) = QGVARMAG(100Rnd_STANAG_65x39);
    };

    class 100Rnd_65x39_caseless_black_mag: 100Rnd_65x39_caseless_mag {
        PVAR(magazineData) = QGVARMAG(100Rnd_STANAG_65x39_Black);
    };

    class 100Rnd_65x39_caseless_black_mag_tracer: 100Rnd_65x39_caseless_mag_Tracer {
        PVAR(magazineData) = QGVARMAG(100Rnd_STANAG_65x39_Black);
    };

    class 100Rnd_65x39_caseless_khaki_mag: 100Rnd_65x39_caseless_mag {
        PVAR(magazineData) = QGVARMAG(100Rnd_STANAG_65x39_Khaki);
    };

    class 100Rnd_65x39_caseless_khaki_mag_tracer: 100Rnd_65x39_caseless_mag_Tracer {
        PVAR(magazineData) = QGVARMAG(100Rnd_STANAG_65x39_Khaki);
    };
};
