class Bolter_Auto_AI_Short_Burst: Burst
	{
		requiredOpticType = 0;
		showToPlayer = 0;
		reloadTime = 0.3;
		dispersion = 0.0045;
		recoil = "recoil_pistol_light";
		recoilProne = "recoil_prone_pistol_light";
		minRange = 75;
		minRangeProbab = 0.0;
		midRange = 150;
		midRangeProbab = 1.0;
		maxRange = 300;
		maxRangeProbab = 0.0;
		aiBurstTerminable = true;
		burst = 3;
		aiRateOfFire = 0.75;
		aiRateOfFireDispersion = 0.1;
		aiRateOfFireDistance = 100;
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