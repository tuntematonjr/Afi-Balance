#include "script_component.hpp"

// information on this addon specifically
class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"rhs_c_weapons","rhs_c_heavyweapons", "rhsusf_c_airweapons","RHS_US_A2Port_Armor","rhsusf_c_weapons","rhsusf_c_statics","A3_Data_F_ParticleEffects","A3_Weapons_F","ace_overpressure",AFIBALANCE_COMMON};
        authors[] = {"Johnson", "Tuntematon"};
        VERSION_CONFIG;
        skipWhenMissingDependencies = 1;
    };
};

// configs go here
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
#include "CfgCloudlets.hpp"
