class Combi_Bolter_Auto_AI_Short_Burst: Burst
		{
			showToPlayer = 0;
			reloadTime = 0.05;
			dispersion = 0.006;
			recoil = "recoil_auto_mx";
			recoilProne = "recoil_auto_prone_mx";
			minRange = 300;
			minRangeProbab = 0.25;
			midRange = 500;
			midRangeProbab = 0.75;
			maxRange = 700;
			maxRangeProbab = 0.25;
			aiBurstTerminable = true;
			burst = 10;
			aiRateOfFire = 0.75;
			aiRateOfFireDispersion = 0.5;
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