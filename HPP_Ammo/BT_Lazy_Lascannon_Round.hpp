		//AOD2 Lascannon Round

		hit = 400;
		cartridge = "";
		simulation = "shotBullet";
		tracerScale = 1;
		tracerStartTime = 0.015;
		tracerEndTime = 20;
		muzzleEffect = "";
		indirectHit = 1;
		indirectHitRange = 0.5;
		warheadName = "AP";
		suppressionRadiusHit = 18;
		explosive = 0;
		coefGravity = 0;
		airFriction = 0;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "AoD_Las_Spark";
		typicalSpeed = 1250;
		caliber = 40;
		deflecting = 0;
		timeToLive = 20;
		whistleOnFire = 1;
		whistleDist = 50;
		effectFly = "";
		model = "\AoD_All_Weps\Extra\MuzzleFlash\LasCan_Bolt";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01",1.7782794,1,1800};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02",1.7782794,1,1800};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03",1.7782794,1,1800};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04",1.7782794,1,1800};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		class HitEffects
		{
			hitMetal = "ImpactMetalSabotBig";
			hitMetalPlate = "ImpactMetalSabotBig";
			hitBuilding = "ImpactMetalSabotBig";
			hitConcrete = "ImpactMetalSabotBig";
			hitGroundSoft = "ImpactMetalSabotBig";
			hitGroundHard = "ImpactMetalSabotBig";
			hitWater = "ImpactMetalSabotBig";
			default_mat = "ImpactMetalSabotBig";
		};
		aiAmmoUsageFlags = "128 + 512";