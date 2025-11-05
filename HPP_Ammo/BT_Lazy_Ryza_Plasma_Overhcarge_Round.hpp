		//AOD Ryza Plasma Overcharge Round

		craterShape = "\a3\Data_f_orange\data\krater_maly";
		hit = 125;
		indirectHit = 30;
		timeToLive = 6;
		indirectHitRange = 3;
		typicalSpeed = 150;
		deflecting = 0;
		cartridge = "";
		explosive = 0.6;
		model = "AoD_All_Weps\Extra\MuzzleFlash\Plasma_bolt.p3d";
		tracerScale = 1;
		tracerStartTime = 0.001;
		tracerEndTime = 6;
		caliber = 10;
		airFriction = -0.0008;
		coefGravity = 2;
		fuseDistance = 0;
		CraterEffects = "GrenadeCrater";
		CraterWaterEffects = "ImpactEffectsWaterHE";
		explosionEffects = "AoD_Plas_Explosion";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01",1.7782794,1,1800};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02",1.7782794,1,1800};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03",1.7782794,1,1800};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04",1.7782794,1,1800};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		class HitEffects
		{
			hitMetal = "ImpactMetalSabotBig";
			hitMetalPlate = "ImpactMetalSabotBig";
			hitBuilding = "ImpactConcreteSabot";
			hitConcrete = "ImpactConcreteSabot";
			hitGroundSoft = "ImpactEffectsGroundSabot";
			hitGroundHard = "ImpactEffectsGroundSabot";
			hitWater = "ImpactEffectsWater";
			default_mat = "ImpactEffectsGroundSabot";
		};
		class CamShakeExplode
		{
			power = 13.4164;
			duration = 2.6;
			frequency = 20;
			distance = 40.2492;
		};
		class CamShakeHit
		{
			power = 180;
			duration = 0.8;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 3.30975;
			duration = 2.2;
			frequency = 20;
			distance = 87.6356;
		};
		class CamShakePlayerFire
		{
			power = 0.02;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		SoundSetExplosion[] = {"Shell105mm130mm_Exp_SoundSet","Shell105mm130mm_Tail_SoundSet","Explosion_Debris_SoundSet"};