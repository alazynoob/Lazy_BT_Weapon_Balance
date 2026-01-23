class CfGPatches {
	class Lazy_BT_Weapon_Balance_Patch_CTR {
		addonRootClass = "Lazy_BT_Weapon_Balance_Patch";
		units[] = {
		};
		requiredAddons[] = {
      		"CTR_Weapons",
      		"CTR_Flamers"
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
#include "CTR_Magazines.hpp"
#include "CTR.hpp"