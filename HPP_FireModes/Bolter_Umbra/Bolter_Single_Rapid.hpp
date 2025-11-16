
class Bolter_Single_Rapid: Single {
	requiredOpticType = 0;
	showToPlayer = 1;
	reloadTime = 0.22;
	dispersion = 0.0003;
	recoil = "recoil_pistol_light";
	recoilProne = "recoil_prone_pistol_light";
	minRange = 200;
	minRangeProbab = 0.0;
	midRange = 500;
	midRangeProbab = 1.0;
	maxRange = 700;
	maxRangeProbab = 0.0;
	aiRateOfFire = .25;
	aiRateOfFireDispersion = 0.1;
	aiRateOfFireDistance = 500;
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