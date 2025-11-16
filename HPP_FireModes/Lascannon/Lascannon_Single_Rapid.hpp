
class Lascannon_Single_Rapid: Single {
	requiredOpticType = 0;
	showToPlayer = 1;
	reloadTime = 2.8;
	dispersion = 0.0003;
	recoil = "recoil_pistol_light";
	recoilProne = "recoil_prone_pistol_light";
	minRange = 0;
	minRangeProbab = 1.0;
	midRange = 1000;
	midRangeProbab = 1.0;
	maxRange = 1500;
	maxRangeProbab = 0.0;
	aiRateOfFire = 2.8;
	aiRateOfFireDispersion = 0.1;
	aiRateOfFireDistance = 0;
	sounds[] = {"StandardSound"};
	class BaseSoundModeType{};
	class StandardSound	{
		begin1[] = {"AoD_All_Weps\Sounds\Special_Weps\Lascannon_Sound",1,1,2000};
		soundBegin[] = {"begin1",33};
		soundsetshot[] = {"AoD_Lascannon_Shot_SoundSet","AoD_Lascannon_Tail_SoundSet","AoD_Lascannon_InteriorTail_SoundSet"};
	};
	soundContinuous = 0;
	soundBurst = 0;
};