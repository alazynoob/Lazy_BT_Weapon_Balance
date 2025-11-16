
class Proteus_Missile_Single_Rapid: Single {
	requiredOpticType = 0;
	showToPlayer = 1;
	reloadTime = 0.5;
	dispersion = 0.0003;
	recoil = "recoil_pistol_light";
	recoilProne = "recoil_prone_pistol_light";
	minRange = 0;
	minRangeProbab = 0.0;
	midRange = 500;
	midRangeProbab = 1.0;
	maxRange = 700;
	maxRangeProbab = 0.0;
	aiRateOfFire = 0.5;
	aiRateOfFireDispersion = 0.1;
	aiRateOfFireDistance = 0;
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