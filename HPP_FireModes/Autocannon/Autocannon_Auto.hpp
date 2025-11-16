class Autocannon_Auto: FullAuto
	{
		requiredOpticType = 0;
		showToPlayer = 1;
		reloadTime = 0.42;
		dispersion = 0.0045;
		recoil = "recoil_pistol_light";
		recoilProne = "recoil_prone_pistol_light";
		minRange = 0;
		minRangeProbab = 1.0;
		midRange = 200;
		midRangeProbab = 1.0;
		maxRange = 500;
		maxRangeProbab = 0.0;
		aiRateOfFire = 0.75;
		sounds[] = {"StandardSound"};
		class BaseSoundModeType{};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_105mm\slammer_105mm_distant",1,1,1500};
			soundBegin[] = {"begin1",1};
			soundsetshot[] = {"Cannon105mm_Shot_SoundSet","Cannon105mm_Tail_SoundSet"};
		};
		soundContinuous = 0;
		soundBurst = 0;
	};