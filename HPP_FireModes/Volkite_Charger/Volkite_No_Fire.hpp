
class Bolter_No_Fire: Single {
	requiredOpticType = 0;
	showToPlayer = 0;
	reloadTime = 0.32;
	dispersion = 0.0003;
	recoil = "recoil_pistol_light";
	recoilProne = "recoil_prone_pistol_light";
	minRange = 500;
	minRangeProbab = 0.0;
	midRange = 750;
	midRangeProbab = 0.5;
	maxRange = 1000;
	maxRangeProbab = 1.0;
	aiRateOfFire = 999.0;
	aiRateOfFireDispersion = 0.1;
	aiRateOfFireDistance = 700;
	sounds[] = {"StandardSound"};
	class BaseSoundModeType{};
	class StandardSound	{
			begin1[] = {"AoD_All_Weps\Sounds\Special_Weps\Volkite_Sound.Ogg",1,1,2000};
			soundBegin[] = {"begin1",100};
			soundsetshot[] = {"AoD_Volkite_Shot_SoundSet","AoD_Volkite_Tail_SoundSet","AoD_Volkite_InteriorTail_SoundSet"};
	};
	soundContinuous = 0;
	soundBurst = 0;
};