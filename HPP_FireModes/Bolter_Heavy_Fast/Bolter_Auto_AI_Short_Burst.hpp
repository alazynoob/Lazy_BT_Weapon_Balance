class Bolter_Auto_AI_Short_Burst: Burst
	{
		requiredOpticType = 0;
		showToPlayer = 0;
		reloadTime = 0.14;
		dispersion = 0.0045;
		recoil = "recoil_pistol_light";
		recoilProne = "recoil_prone_pistol_light";
		minRange = 500;
		minRangeProbab = 0.0;
		midRange = 1000;
		midRangeProbab = 1.0;
		maxRange = 1300;
		maxRangeProbab = 0.0;
		aiBurstTerminable = true;
		burst = 5;
		aiRateOfFire = 0.75;
		aiRateOfFireDispersion = 0.1;
		aiRateOfFireDistance = 100;
		sounds[] = {"StandardSound"};
		class BaseSoundModeType{};
		class StandardSound
		{
			begin1[] = {"AoD_All_Weps\Sounds\Bolters\Heavy_Bolter",1,1,2000};
			soundBegin[] = {"begin1",100};
			soundsetshot[] = {"Aod_Heavy_Bolt_Shot_SoundSet","Aod_Bolt_tail_SoundSet"};
		};
		soundContinuous = 0;
		soundBurst = 0;
	};