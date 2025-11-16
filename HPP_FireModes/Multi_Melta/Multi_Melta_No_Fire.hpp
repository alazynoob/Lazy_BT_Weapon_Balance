
class Multi_Melta_No_Fire: Single {
	requiredOpticType = 0;
	showToPlayer = 1;
	reloadTime = 1.0;
	dispersion = 0.0003;
	recoil = "recoil_pistol_light";
	recoilProne = "recoil_prone_pistol_light";
	minRange = 300;
	minRangeProbab = 0.0;
	midRange = 400;
	midRangeProbab = 0.5;
	maxRange = 500;
	maxRangeProbab = 1.0;
	aiRateOfFire = 999.0;
	aiRateOfFireDispersion = 0.1;
	aiRateOfFireDistance = 150;
	sounds[] = {"StandardSound"};
	class BaseSoundModeType{};
	class StandardSound	{
		begin1[] = {"\AoD_All_Weps\Sounds\Special_Weps\Melta_Gun_New",1.7782794,1,2000};
		begin2[] = {"\AoD_All_Weps\Sounds\Special_Weps\Melta_Gun_New",1.7782794,1,2000};
		begin3[] = {"\AoD_All_Weps\Sounds\Special_Weps\Melta_Gun_New",1.7782794,1,2000};
		soundBegin[] = {"begin1",33,"begin2",33,"begin3",33};
		soundsetshot[] = {"AoD_MeltaShot_SoundSet","AoD_MeltaShot_Gun_Tail_SoundSet","AoD_MeltaShot_Gun_InteriorTail_SoundSet"};
	};
	soundContinuous = 0;
	soundBurst = 0;
};