#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = ADDON_NAME;
        author = ECSTRING(main,cvo);
        authors[] = {"Skippie [CVO]"};
        url = ECSTRING(main,url);

        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main", "ace_common", "ace_interact_menu", "ace_magazinerepack"};
        
        units[] = {};
        weapons[] = {};

        skipWhenMissingDependencies = 0;
        
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgFunctions.hpp"
#include "CfgVehicles.hpp"
