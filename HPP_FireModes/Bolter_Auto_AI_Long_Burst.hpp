class Bolter_Auto_AI_Long_Burst: Burst
	{
		requiredOpticType = 0;
		showToPlayer = 0;
		reloadTime = 0.08325;
		dispersion = 0.0045;
		recoil = "recoil_pistol_light";
		recoilProne = "recoil_prone_pistol_light";
		minRange = 0;
		minRangeProbab = 1;
		midRange = 100;
		midRangeProbab = .75;
		maxRange = 200;
		maxRangeProbab = 0.25;
		aiBurstTerminable = true;
		burst = 20;
		aiRateOfFire = 0.75;
		aiRateOfFireDispersion = 0.1;
		aiRateOfFireDistance = 100;
		sounds[] = {"StandardSound"};
		class BaseSoundModeType{};
		class StandardSound
		{
			begin1[] = {"AoD_All_Weps\Sounds\Bolters\Normal_Bolter",1,1,2000};
			soundBegin[] = {"begin1",100};
			soundsetshot[] = {"Aod_Bolt_Shot_SoundSet","Aod_Bolt_tail_SoundSet"};
		};
		soundContinuous = 0;
		soundBurst = 0;
	};