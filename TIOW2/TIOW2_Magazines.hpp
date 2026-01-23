class cfgMagazines {
  class CA_Magazine;

  //Wbk_Improved40Weapons_OverridCfg_Krieg
  // class TIOW_Krieg_GL_Frag_mag: CA_Magazine
  // {
  // };
  // class TIOW_Krieg_GL_Krak_mag: TIOW_Krieg_GL_Frag_mag
  // {
  // };
  // class TIOW_Krieg_GL_Smoke_mag: TIOW_Krieg_GL_Frag_mag
  // {
  // };
  // class TIOW_Krieg_GL_Flare_mag: TIOW_Krieg_GL_Frag_mag
  // {
  // };
  // class TIOW_Krieg_GL_Buck_mag: TIOW_Krieg_GL_Frag_mag
  // {
  // };
  // class TIOW_Krieg_GL_Flame_mag: TIOW_Krieg_GL_Frag_mag
  // {
  // };

  //TIOW_Launchers
  // class RPG7_F;
  // class TIOW_SM_Rocket_Krak_Mag_LSLOT: RPG7_F
  // {
  // };
  // class TIOW_SM_Rocket_Frag_Mag_LSLOT: TIOW_SM_Rocket_Krak_Mag_LSLOT
  // {
  // };

  //TIOW_Dos_Weps
  class TIOW_30rnd_GodwynBoltgunMag;
  // class TIOW_SM_Rocket_Krak_Mag: TIOW_30rnd_GodwynBoltgunMag
  // {
  // };
  // class TIOW_SM_Rocket_Frag_Mag: TIOW_30rnd_GodwynBoltgunMag
  // {
  // };
  class TIOW_SM_Lascannon_Mag: TIOW_30rnd_GodwynBoltgunMag
  {
    displayName = "[BTBP] Lascannon Pack 30V.";
    #include "..\HPP_Magazine\Lascannon_Magazine.hpp"
    ammo = "BT_Lazy_Lascannon_Round"; 
  };
  class TIOW_SM_Plasmagun_Mag;
  class TIOW_SM_PlasmaCannon_Mag: TIOW_SM_Plasmagun_Mag
  {
    displayName = "[BTBP] Plasma Cannon Stabiliser 15mL.";
    #include "..\HPP_Magazine\Plasma_Cannon_Magazine.hpp"
    ammo = "BT_Lazy_Plasma_Cannon_Round"; 
  };
  class TIOW_SM_PlasmaCannon_Mag_OC: TIOW_SM_Plasmagun_Mag
  {
  };
  // class DK_PlasmaGun_Flask;
  // class TIOW_IGPlasmaPistol_Mag: DK_PlasmaGun_Flask
  // {
  // };
  // class TIOW_IGPlasmaPistol_OC_Mag: DK_PlasmaGun_Flask
  // {
  // };
  class TIOW_SM_Storm_Box_Mag: TIOW_30rnd_GodwynBoltgunMag
  {
    displayName = "[BTBP] Storm Bolter Magazine 60 Rnd.";
    #include "..\HPP_Magazine\Phobos_Combi_Magazine.hpp"
    ammo = "BT_Lazy_Phobos_Bolt_Round_Base";  
  };
  class TIOW_SM_Storm_Clip_Mag: TIOW_30rnd_GodwynBoltgunMag
  {
    displayName = "[BTBP] Storm Bolter Magazine 60 Rnd.";
    #include "..\HPP_Magazine\Phobos_Combi_Magazine.hpp"
    ammo = "BT_Lazy_Phobos_Bolt_Round_Base"; 
  };
  // class TIOW_SoB_Storm_Box_Mag: TIOW_30rnd_GodwynBoltgunMag
  // {
  // };
  // class TIOW_SoB_Storm_Clip_Mag: TIOW_30rnd_GodwynBoltgunMag
  // {
  // };
  // class TIOW_Guard_BoltMag: TIOW_30rnd_GodwynBoltgunMag
  // {
  // };
  class TIOW_CombiPlas_Mag: CA_Magazine
  {
    displayName = "[BTBP] Plasma Stabiliser 30mL.";
    #include "..\HPP_Magazine\Plasma_Magazine.hpp"
    ammo = "BT_Lazy_Ryza_Plasma_Round"; 
  };
  class TIOW_CombiPlas_OVER_Mag: CA_Magazine
  {
    displayName = "[BTBP] Plasma Overcharger 6mL.";
    #include "..\HPP_Magazine\Plasma_Overcharge_Magazine.hpp"
    ammo = "BT_Lazy_Ryza_Plasma_Overhcarge_Round";  
  };
};