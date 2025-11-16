class Bolter_Auto: FullAuto
	{
		requiredOpticType = 0;
		showToPlayer = 1;
		reloadTime = 0.14;
		dispersion = 0.0045;
		recoil = "recoil_pistol_light";
		recoilProne = "recoil_prone_pistol_light";
		minRange = 0;
		minRangeProbab = 1.0;
		midRange = 200;
		midRangeProbab = 1.0;
		maxRange = 500;
		maxRangeProbab = 0.0;
		aiRateOfFire = 0.25;
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