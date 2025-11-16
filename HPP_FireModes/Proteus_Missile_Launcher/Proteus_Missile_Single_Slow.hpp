
class Proteus_Missile_Single_Slow: Single {
	requiredOpticType = 0;
	showToPlayer = 0;
	reloadTime = 0.5;
	dispersion = 0.0003;
	recoil = "recoil_pistol_light";
	recoilProne = "recoil_prone_pistol_light";
	minRange = 700;
	minRangeProbab = 0.0
	midRange = 1600;
	midRangeProbab = 1.0
	maxRange = 2000;
	maxRangeProbab = 0.0
	aiRateOfFire = 1.0;
	aiRateOfFireDispersion = 0.2;
	aiRateOfFireDistance = 500;
	sounds[] = {"StandardSound"};
	class BaseSoundModeType{};
	class StandardSound	{
		begin1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\rpg32",1,1,2000};
		soundBegin[] = {"begin1",100};
		soundsetshot[] = {"Launcher_RPG7_Shot_SoundSet","Launcher_RPG7_Tail_SoundSet"};
	};
	soundContinuous = 0;
	soundBurst = 0;
};