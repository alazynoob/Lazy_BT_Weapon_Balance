
class Autocannon_No_Fire: Single {
	requiredOpticType = 0;
	showToPlayer = 0;
	reloadTime = 0.42;
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
		begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_105mm\slammer_105mm_distant",1,1,1500};
		soundBegin[] = {"begin1",1};
		soundsetshot[] = {"Cannon105mm_Shot_SoundSet","Cannon105mm_Tail_SoundSet"};
	};
	soundContinuous = 0;
	soundBurst = 0;
};