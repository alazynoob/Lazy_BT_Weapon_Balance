class CfGPatches {
	class Lazy_BT_Weapon_Balance_Patch_TIOW {
		addonRootClass = "Lazy_BT_Weapon_Balance_Patch";
		units[] = {
		};
		requiredAddons[] = {
			"Lazy_BT_Weapon_Balance_Patch",
			"DKoK_Weapons",
      		"Cadian_Weapons",
      		"TIOW_tau_40k_weapons",
     	 	"TIOW_AutoWeapons",
      		"TIOW_Spec_Weps",
      		"TIOWSpaceMarineWep",
      		"OrkDakka",
      		"TIOW_NecronWarrior_Wep",
      		"TIOW_NecronLord_Wep"
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
#include "TIOW_Magazines.hpp"
#include "TIOW.hpp"