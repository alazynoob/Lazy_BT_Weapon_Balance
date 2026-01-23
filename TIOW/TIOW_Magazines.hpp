class cfgMagazines {
  class CA_Magazine;

  //TIOWSpaceMarineWep
  class TIOW_30rnd_GodwynBoltgunMag: CA_Magazine
  {
    displayName = "[BTBP] Godwyn Boltgun Magazine 30 Rnd.";
    #include "..\HPP_Magazine\Phobos_Magazine.hpp"
    ammo = "BT_Lazy_Phobos_Bolt_Round_Base";  
  };
  class TIOW_Mars_HeavyBolterMag_85rnd: CA_Magazine
  {
    displayName = "[BTBP] Heavy Bolter Magazine 85 rnd Rnd.";
    #include "..\HPP_Magazine\Heavy_Boltgun_Magazine.hpp"
    ammo = "BT_Lazy_Heavy_Bolt_Round_Base";
  };
  class TIOW_SM_Plasmagun_Mag: CA_Magazine
  {
    displayName = "[BTBP] Plasma Stabiliser 30mL.";
    #include "..\HPP_Magazine\Plasma_Magazine.hpp"
    ammo = "BT_Lazy_Ryza_Plasma_Round"; 
  };
  class TIOW_SM_Overcharge_Plasmagun_Mag: CA_Magazine
  {
    displayName = "[BTBP] Plasma Overcharger 6mL.";
    #include "..\HPP_Magazine\Plasma_Overcharge_Magazine.hpp"
    ammo = "BT_Lazy_Ryza_Plasma_Overhcarge_Round"; 
  };

  //Cadian_Weapons
  class M36KantRifle_mag: CA_Magazine
  {
  };
  // class TIOW_LongLas_Mag: CA_Magazine
  // {
  // };
  // class TIOW_CadianHellgun_Mag: CA_Magazine
  // {
  // };
  class TIOW_Meltagun_Mag: M36KantRifle_mag
  {
  };
  class TIOW_SM_Meltagun_Mag: TIOW_Meltagun_Mag {
    displayName = "[BTBP] Melta Coolant 10mL.";
    #include "..\HPP_Magazine\Meltagun_Magazine.hpp"
    ammo = "BT_Lazy_Meltagun_Round";  
  };
  // class TIOW_IGBoltPistol_Mag: CA_Magazine
  // {
  // };   

  //DKoK_Weapons
  // class MLHE_Mag: RPG32_F
  // {
  // };
  // class MLAT_Mag: RPG32_F
  // {
  // };
  // class Lucius98_mag: CA_Magazine
  // {
  // };
  // class TIOW_Antioc43_Mag: CA_Magazine
  // {
  // };
  // class TIOW_Antioc43_MagHeavy: CA_Magazine
  // {
  // };
  // class Type14_mag: CA_Magazine
  // {
  // };
  // class Lucius22c_Solid: CA_Magazine
  // {
  // };
  // class Lucius22c_Pellet: CA_Magazine
  // {
  // };
  // class LuciusLaspistol_mag: CA_Magazine
  // {
  // };
  // class DK_PlasmaGun_Flask: CA_Magazine
  // {
  // };
  // class DK_Overcharge_PlasmaGun_Flask: CA_Magazine
  // {
  // };
  // class TIOW_Krieg_Flamer_mag: CA_Magazine
  // {
  // };
  // class TIOW_Krieg_LauncherFrag_mag: CA_Magazine
  // {    
  // };

  //OrkDakka
  // class ShootaMag: CA_Magazine
  // {
  // };
  // class KannonHEMag: CA_Magazine
  // {
  // };
  // class KannonAPMag: CA_Magazine
  // {
  // };
  // class TankBustaMag: CA_Magazine
  // {
  // };

  //TIOW_AutoWeapons
  // class 30Rnd_Agrip_mag: CA_Magazine
  // {
  // };
  // class 30Rnd_Agrip_mag_Tracer: 30Rnd_Agrip_mag
  // {
  // };
  // class 20Rnd_Agrip_mag: CA_Magazine
  // {
  // };
  // class 20Rnd_Agrip_mag_Tracer: 20Rnd_Agrip_mag
  // {
  // };
  // class TIOW_50Rnd_Stubber_mag: CA_Magazine
  // {
  // };
  // class TIOW_50Rnd_Stubber_mag_Tracer: TIOW_50Rnd_Stubber_mag
  // {
  // };
  // class TIOW_50Rnd_Stubber_amput: CA_Magazine
  // {
  // };
  // class TIOW_50Rnd_Stubber_manstop: CA_Magazine
  // {
  // };
  // class TIOW_50Rnd_Stubber_expander: CA_Magazine
  // {
  // };
  // class TIOW_6rnd_StubPistolMag: CA_Magazine
  // {
  // };
  // class TIOW_1Rnd_HE_Grenade_shell: CA_Magazine
  // {
  // };
  // class TIOW_OCC_CarbineMag_40rnd: CA_Magazine
  // {
  // };
  // class TIOW_OCC_CarbineMag_40rnd_Tracer: TIOW_OCC_CarbineMag_40rnd
  // {
  // };

  //TIOW_NecronLord_Wep
  // class TIOW_StaffOfLight_Mag: CA_Magazine
  // {
  // };

  //TIOW_NecronWarrior_Wep
  // class TIOW_GaussFlayer_Mag: CA_Magazine
  // {
  // };
  // class TIOW_GaussFlayer_High_Power_Mag: CA_Magazine
  // {
  // };

  //TIOW_Spec_Weps
  // class TIOW_Shotgun_pellets_mag: CA_Magazine
  // {
  // };
  // class TIOW_Chaos_Flamer_mag: CA_Magazine
  // {
  // };
  // class TIOW_IG_GL_Frag_mag: CA_Magazine
  // {
  // };
  // class TIOW_IG_GL_Krak_mag: TIOW_IG_GL_Frag_mag
  // {
  // };
  // class TIOW_IG_GL_Smoke_mag: TIOW_IG_GL_Frag_mag
  // {
  // };
  // class TIOW_IG_GL_Flare_mag: TIOW_IG_GL_Frag_mag
  // {
  // };
  // class TIOW_IG_GL_Buck_mag: TIOW_IG_GL_Frag_mag
  // {
  // };
  // class TIOW_IG_GL_Flame_mag: TIOW_IG_GL_Frag_mag
  // {
  // };

  //TIOW_tau_40k_weapons
  // class TIOW_pulse_mag: CA_Magazine
  // {
  // };
  // class TIOW_pulse_grenade_mag: CA_Magazine
  // {
  // };
  // class TIOW_pulse_blaster_mag: CA_Magazine
  // {
  // };
  // class TIOW_ionrifle_shot_mag: CA_Magazine
  // {
  // };
  // class TIOW_ionrifle_overcharge_mag: CA_Magazine
  // {
  // };
  // class TIOW_railrifle_mag: CA_Magazine
  // {
  // };
  // class TIOW_pulse_pistol_mag: CA_Magazine
  // {
  // };
};