class CfGPatches {
	class Lazy_BT_Weapon_Balance_Patch {
		name = "Lazy's BT Weapon Balance Patch";
		author = "Lazy";
		units[] = {
		};
		requiredAddons[] = {
			"A3_Weapons_F",
			"A3_Data_F",
			"A3_Soft_F",
			"AoD_All_Weps",
		};
		weapons[] = {    
	    };
		skipWhenMissingDependencies = 1;		
	};
};

class CfgRecoils
{
	LBP_No_Recoil[] =	{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
};
#include "HPP_AmmoConfig\ammoConfig.hpp"