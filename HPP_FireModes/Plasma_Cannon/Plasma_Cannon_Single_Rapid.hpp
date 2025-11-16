
class Plasma_Cannon_Single_Rapid: Single {
	requiredOpticType = 0;
	showToPlayer = 1;
	reloadTime = 0.8;
	dispersion = 0.0003;
	recoil = "recoil_pistol_light";
	recoilProne = "recoil_prone_pistol_light";
	minRange = 0;
	minRangeProbab = 1.0;
	midRange = 1000;
	midRangeProbab = 1.0;
	maxRange = 1300;
	maxRangeProbab = 0.0;
	aiRateOfFire = .8;
	aiRateOfFireDispersion = 0.1;
	aiRateOfFireDistance = 0;
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