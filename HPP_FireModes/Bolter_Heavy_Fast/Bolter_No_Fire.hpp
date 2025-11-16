
class Bolter_No_Fire: Single {
	requiredOpticType = 0;
	showToPlayer = 0;
	reloadTime = 0.235;
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
		begin1[] = {"AoD_All_Weps\Sounds\Bolters\Heavy_Bolter",1,1,2000};
		soundBegin[] = {"begin1",100};
		soundsetshot[] = {"Aod_Heavy_Bolt_Shot_SoundSet","Aod_Bolt_tail_SoundSet"};
	};
	soundContinuous = 0;
	soundBurst = 0;
};