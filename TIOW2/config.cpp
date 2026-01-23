class CfGPatches {
	class Lazy_BT_Weapon_Balance_Patch_TIOW2 {
		addonRootClass = "Lazy_BT_Weapon_Balance_Patch";
		units[] = {
		};
		requiredAddons[] = {
      		"TIOW_Launchers",
      		"TIOW_Dos_Weps",
      		"TIOW_delaque_weps",
      		"TIOW_BoltPistols",
      		"Ork_Gubbinz",
      		"OrkDakka",
      		"Wbk_Improved40Weapons_OverridCfg_Spec",
      		"Wbk_Improved40Weapons_OverridCfg_Krieg",
      		"Wbk_Improved40Weapons_OverridCfg_Automatic",
      		"Wbk_Improved40Weapons_OverridCfg"
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
#include "TIOW2_Magazines.hpp"
#include "TIOW2.hpp"