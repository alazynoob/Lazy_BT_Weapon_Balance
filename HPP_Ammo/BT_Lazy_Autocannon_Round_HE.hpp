		//AOD2 Autocannon Round HE

		hit = 135;
		indirectHit = 27;
		indirectHitRange = 8;
		warheadName = "HE";
		dangerRadiusHit = 30;
		suppressionRadiusHit = 16;
		typicalSpeed = 970;
		explosive = 0.55;
		airFriction = -0.000275;
		caliber = 3;
		deflecting = 4;
		timeToLive = 15;
		whistleOnFire = 1;
		whistleDist = 7;
		tracerScale = 0.85;
		tracerStartTime = 0.05;
		tracerEndTime = 3;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
		CraterEffects = "ATMissileCrater";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01",1.7782794,1,1800};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02",1.7782794,1,1800};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03",1.7782794,1,1800};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04",1.7782794,1,1800};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		class CamShakeExplode
		{
			power = 12;
			duration = 1.1;
			frequency = 10;
			distance = 50;
		};
		class CamShakeHit
		{
			power = 60;
			duration = 0.6;
			frequency = 10;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 1;
			duration = 1.1;
			frequency = 10;
			distance = 30;
		};
		class CamShakePlayerFire
		{
			power = 0.02;
			duration = 0.1;
			frequency = 10;
			distance = 1;
		};
		SoundSetExplosion[] = {"Shell105mm130mm_Exp_SoundSet","Shell105mm130mm_Tail_SoundSet","Explosion_Debris_SoundSet"};