
class Multi_Melta_Single: Single {
	requiredOpticType = 0;
	showToPlayer = 1;
	reloadTime = 1.0;
	dispersion = 0.0003;
	recoil = "recoil_pistol_light";
	recoilProne = "recoil_prone_pistol_light";
	minRange = 0;
	minRangeProbab = 1.0;
	midRange = 300;
	midRangeProbab = 1.0;
	maxRange = 500;
	maxRangeProbab = 0.0;
	aiRateOfFire = 1.0;
	aiRateOfFireDispersion = 0.1;
	aiRateOfFireDistance = 0;
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