#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "vet_monocraft_main"
        };
        author = "veteran29";
        VERSION_CONFIG;
    };
};

#include "CfgFontFamilies.hpp"
