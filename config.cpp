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
	class LBP_No_Recoil
	{
		muzzleOuter[]	= { 0.0, 0.0, 0.0, 0.0 }; // x, y, a, b
		kickBack[]	= { 0.0, 0.0 };
		permanent	= 0.0;
		temporary	= 0.0;
	};
};
#include "HPP_AmmoConfig\ammoConfig.hpp"
#include "HPP_AOD2\AOD2_Magazines.hpp"
#include "HPP_AOD2\AOD2.hpp"