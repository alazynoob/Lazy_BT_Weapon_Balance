class Bolter_Auto: FullAuto
	{
		requiredOpticType = 0;
		showToPlayer = 1;
		reloadTime = 0.3;
		dispersion = 0.0045;
		recoil = "recoil_pistol_light";
		recoilProne = "recoil_prone_pistol_light";
		minRange = 0;
		minRangeProbab = 1.0;
		midRange = 50;
		midRangeProbab = 1.0;
		maxRange = 75;
		maxRangeProbab = 0.0;
		aiRateOfFire = 0.32;
		sounds[] = {"StandardSound"};
		class BaseSoundModeType{};
		class StandardSound
		{
			begin1[] = {"AoD_All_Weps\Sounds\Special_Weps\Volkite_Sound.Ogg",1,1,2000};
			soundBegin[] = {"begin1",100};
			soundsetshot[] = {"AoD_Volkite_Shot_SoundSet","AoD_Volkite_Tail_SoundSet","AoD_Volkite_InteriorTail_SoundSet"};
		};
		soundContinuous = 0;
		soundBurst = 0;
	};