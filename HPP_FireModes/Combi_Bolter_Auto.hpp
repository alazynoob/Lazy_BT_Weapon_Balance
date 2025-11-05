class Bolter_Auto: FullAuto
		{
			reloadTime = 0.08325;
			dispersion = 0.006;
			recoil = "recoil_auto_mx";
			recoilProne = "recoil_auto_prone_mx";
			minRange = 0;
			minRangeProbab = 0.0;
			midRange = 200;
			midRangeProbab = 0.0;
			maxRange = 500;
			maxRangeProbab = 0.0;
			aiRateOfFire = 1e-06;
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