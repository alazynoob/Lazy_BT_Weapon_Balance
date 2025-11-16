
class Plasma_Cannon_No_Fire: Single {
	requiredOpticType = 0;
	showToPlayer = 0;
	reloadTime = 0.8;
	dispersion = 0.0003;
	recoil = "recoil_pistol_light";
	recoilProne = "recoil_prone_pistol_light";
	minRange = 1000;
	minRangeProbab = 0.0;
	midRange = 1150;
	midRangeProbab = 0.5;
	maxRange = 1300;
	maxRangeProbab = 1.0;
	aiRateOfFire = 999.0;
	aiRateOfFireDispersion = 0.1;
	aiRateOfFireDistance = 700;
	sounds[] = {"StandardSound"};
	class BaseSoundModeType{};
	class StandardSound	{
		begin1[] = {"AoD_All_Weps\Sounds\Special_Weps\Plasma_Sound_1",1,1,2000};
		begin2[] = {"AoD_All_Weps\Sounds\Special_Weps\Plasma_Sound_2",1,1,2000};
		begin3[] = {"AoD_All_Weps\Sounds\Special_Weps\Plasma_Sound_2",1,1,2000};
		soundBegin[] = {"begin1",33,"begin2",33,"begin3",33};
		soundsetshot[] = {"AoD_PlasmaShot_SoundSet","AoD_PlasmaShot_Gun_Tail_SoundSet","AoD_PlasmaShot_Gun_InteriorTail_SoundSet"};
	};
	soundContinuous = 0;
	soundBurst = 0;
};