class CfGPatches {
	class Lazy_BT_Weapon_Balance_Patch_AOD {
		addonRootClass = "Lazy_BT_Weapon_Balance_Patch";
		units[] = {
		};
		requiredAddons[] = {
			"Lazy_BT_Weapon_Balance_Patch",
			"Steve_30K_weps",
      		"Steve_30K_weps_NEW",
      		"Steve_30K_weps2",
      		"Steve_30K_weps3",
      		"Steve_30K_weps4"
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
#include "XtdGearModels.hpp"
#include "XtdGearInfos.hpp"
#include "AOD_Magazines.hpp"
#include "AOD.hpp"