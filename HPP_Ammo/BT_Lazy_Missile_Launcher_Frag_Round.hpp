		//Missile Launcher Krak Rounds

		hit = 200;
		indirectHit = 100;
		indirectHitRange = 10;
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 2;
		deflecting = 0;
		explosive = 0.8;
		caliber = 10;
		tracerScale = 1;
		timeToLive = 10;
		tracerStartTime = 0.0075;
		tracerEndTime = 10;
		cartridge = "";
		model = "\A3\Weapons_F_Exp\Launchers\RPG7\rocket_rpg7.p3d";
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		effectFly = "missile1";
		soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01",2.51189,1,1800};
		soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02",2.51189,1,1800};
		soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03",2.51189,1,1800};
		multiSoundHit[] = {"soundHit1",0.34,"soundHit2",0.33,"soundHit3",0.33};
		class CamShakeExplode
		{
			power = "(35*0.2)";
			duration = "((round (35^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((4 + 35^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 85;
			duration = "((round (85^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(15^0.25)";
			duration = "((round (15^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((15^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		SoundSetExplosion[] = {"RocketsMedium_Exp_SoundSet","RocketsMedium_Tail_SoundSet","Explosion_Debris_SoundSet"};