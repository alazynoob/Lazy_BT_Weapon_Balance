class Sniper_Bolter_Single: Single
		{
			reloadTime = 0.25;
			dispersion = 0.0003;
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			minRange = 0;
			minRangeProbab = 1;
			midRange = 700;
			midRangeProbab = 0.75;
			maxRange = 2000;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1.5;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 500;
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