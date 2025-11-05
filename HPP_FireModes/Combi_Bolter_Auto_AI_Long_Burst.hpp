class Combi_Bolter_Auto_AI_Long_Burst: Burst
		{
			showToPlayer = 0;
			reloadTime = 0.05;
			dispersion = 0.006;
			recoil = "recoil_auto_mx";
			recoilProne = "recoil_auto_prone_mx";
			minRange = 0;
			mixnRangeProbab = 1;
			midRange = 300;
			midRangeProbab = .75;
			maxRange = 500;
			maxRangeProbab = 0.25;
			aiBurstTerminable = true;
			burst = 40;
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