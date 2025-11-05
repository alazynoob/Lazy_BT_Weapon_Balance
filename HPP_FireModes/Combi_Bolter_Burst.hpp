class Combi_Bolter_Burst: Burst
		{
			reloadTime = 0.05;
			dispersion = 0.003;
			burst = 6;
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			minRange = 500;
			minRangeProbab = .25;
			midRange = 700;
			midRangeProbab = 0.75;
			maxRange = 1000;
			maxRangeProbab = 0.1;
			aiRateOfFire = 0.75;
			aiRateOfFireDispersion = 0.5;
			aiRateOfFireDistance = 200;
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