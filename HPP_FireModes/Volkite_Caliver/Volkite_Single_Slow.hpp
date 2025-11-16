
class Bolter_Single_Slow: Single {
	requiredOpticType = 0;
	showToPlayer = 0;
	reloadTime = 0.32;
	dispersion = 0.0003;
	recoil = "recoil_pistol_light";
	recoilProne = "recoil_prone_pistol_light";
	minRange = 300;
	minRangeProbab = 0.0;
	midRange = 500;
	midRangeProbab = 1.0;
	maxRange = 1000;
	maxRangeProbab = 0.0;
	aiRateOfFire = .75;
	aiRateOfFireDispersion = 0.1;
	aiRateOfFireDistance = 500;
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