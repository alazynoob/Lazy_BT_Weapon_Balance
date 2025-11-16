
class Lascannon_No_Fire: Single {
	requiredOpticType = 0;
	showToPlayer = 0;
	reloadTime = 2.8;
	dispersion = 0.0003;
	recoil = "recoil_pistol_light";
	recoilProne = "recoil_prone_pistol_light";
	minRange = 1000;
	minRangeProbab = 0.0;
	midRange = 1250;
	midRangeProbab = 0.5;
	maxRange = 1500;
	maxRangeProbab = 1.0;
	aiRateOfFire = 999.0;
	aiRateOfFireDispersion = 0.1;
	aiRateOfFireDistance = 700;
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