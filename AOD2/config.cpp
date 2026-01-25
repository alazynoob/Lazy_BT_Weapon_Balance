class CfGPatches {
	class Lazy_BT_Weapon_Balance_Patch_AOD2 {
		addonRootClass = "Lazy_BT_Weapon_Balance_Patch";
		units[] = {
		};
		requiredAddons[] = {
			"Lazy_BT_Weapon_Balance_Patch",
			"AoD_All_Weps",
			"Lazy_BT_Weapon_Balance_Patch_AOD"
		};
		skipWhenMissingDependencies = 1;		
	};
	class aceax_config_compat {
    	units[] = {};
    	weapons[] = {};
    	requiredVersion = "1.0";
    	requiredAddons[] = {"aceax_gearinfo"};
  	};
};
#include "AOD2_Magazines.hpp"
#include "AOD2.hpp"