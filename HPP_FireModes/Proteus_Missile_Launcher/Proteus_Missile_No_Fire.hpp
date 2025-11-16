
class Proteus_Missile_No_Fire: Single {
	requiredOpticType = 0;
	showToPlayer = 0;
	reloadTime = 0.32;
	dispersion = 0.0003;
	recoil = "recoil_pistol_light";
	recoilProne = "recoil_prone_pistol_light";
	minRange = 1600;
	minRangeProbab = 0.0;
	midRange = 1800;
	midRangeProbab = 0.5;
	maxRange = 2000;
	maxRangeProbab = 1.0;
	aiRateOfFire = 999.0;
	aiRateOfFireDispersion = 0.1;
	aiRateOfFireDistance = 700;
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