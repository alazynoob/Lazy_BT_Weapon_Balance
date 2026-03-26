
class Bolter_No_Fire: Single {
	requiredOpticType = 0;
	showToPlayer = 0;
	reloadTime = 999;
	dispersion = 0.000290888;
	recoil = "LBP_No_Recoil";
	recoilProne = "LBP_No_Recoil";
	minRange = 700;
	minRangeProbab = 0.0;
	midRange = 850;
	midRangeProbab = 0.5;
	maxRange = 1000;
	maxRangeProbab = 1.0;
	aiRateOfFire = 999.0;
	aiRateOfFireDispersion = 0.1;
	aiRateOfFireDistance = 700;
	sounds[] = {"StandardSound"};
	class BaseSoundModeType{};
	class StandardSound	{
		begin1[] = {"AoD_All_Weps\Sounds\Bolters\Normal_Bolter",1,1,2000};
		soundBegin[] = {"begin1",100};
		soundsetshot[] = {"Aod_Bolt_Shot_SoundSet","Aod_Bolt_tail_SoundSet"};
	};
	soundContinuous = 0;
	soundBurst = 0;
};