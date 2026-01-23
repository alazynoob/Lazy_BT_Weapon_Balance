
class launch_RPG7_F;
class arifle_MX_Base_F;
class TIOW_SM_Ragefire_PlasmaGun;
class Pistol_Base_F;
class Rifle_Base_F;
class Lucius98Lasgun;
class DK_PlasmaGun_base;
class TIOW_Krieg_Flamer;
class Type14Heavy;
class AgripinaaAutoBase;
class TIOW_delaque_bolter_base;
class TIOW_delaque_plasma_base;
class TIOW_delaque_flechette_base;
class TIOW_delaque_lasgun_base;
class TIOW_delaque_autogun_base;
class TIOW_delaque_sniper_base;
class TIOW_delaque_stubber_base;
class hgun_Rook40_F;
class CfgWeapons {

  

  //Wbk_Improved40Weapons_OverridCfg_Spec
  //Arbites Lawbringer III Pattern Shotgun
  class TIOW_Shotgun: Rifle_Base_F {
    displayName = "[AsM] Shotgun, Arbites Lawbringer III Pattern (TIOW2-LBP)";
  };

  //Accatran Pattern Shotgun
  class TIOW_Chaos_Shotgun: Rifle_Base_F {
    displayName = "[AsM] Shotgun, Accatran Pattern (TIOW2-LBP)";
  };

  //Wbk_Improved40Weapons_OverridCfg_Krieg
  //Lucius Pattern Lasgun 
  class Lucius98LasgunBlackS: Lucius98Lasgun {
    displayName = "[AsM] Lasgun, Lucius Pattern (TIOW2-LBP)";
  };
  class Lucius98LasgunBlackG: Lucius98Lasgun {
    displayName = "[AsM] Lasgun, Lucius Pattern (TIOW2-LBP)";
  };  
  class Lucius98LasgunGreenS: Lucius98Lasgun {
    displayName = "[AsM] Lasgun, Lucius Pattern (TIOW2-LBP)";
  };  
  class Lucius98LasgunGreenG: Lucius98Lasgun {
    displayName = "[AsM] Lasgun, Lucius Pattern (TIOW2-LBP)";
  };

  //Lucius Pattern Shotgun
  class Lucius22c: Rifle_Base_F {
    displayName = "[AsM] Shotgun, Lucius Pattern 22c (TIOW2-LBP)";
  };

  //Lucius Type 14 Pattern Hot Shot Lasgun
  class Type14HeavyBlack: Lucius98Lasgun {
    displayName = "[AsM] Lasgun Hot Shot, Lucius Pattern (TIOW2-LBP)";
  };  
  class Type14HeavyGreen: Lucius98Lasgun {
    displayName = "[AsM] Lasgun Hot Shot, Lucius Pattern (TIOW2-LBP)";
  };  

    //Lucius Pattern Grenade Launcher
  class TIOW_KriegLauncher: Rifle_Base_F {
    displayName = "[AsM] Grenade Launcher, Lucius Pattern (TIOW2-LBP)";
  };

  //Lucius Pattern Plasma Gun
  class DK_PlasmaGun: DK_PlasmaGun_base {
    displayName = "[AsM] Plasma Gun, Lucius Pattern (TIOW2-LBP)";
  };
  class Chaos_PlasmaGun: DK_PlasmaGun_base {
    displayName = "[AsM] Plasma Gun, Lucius Pattern (TIOW2-LBP)";
  };

  //Antioc Pattern Lasgun 
  class Antioc43Lasgun: Lucius98Lasgun {
    displayName = "[AsM] Lasgun, Antioc Pattern (TIOW2-LBP)";
  };  
  class Antioc43Lasgun_2: Lucius98Lasgun {
    displayName = "[AsM] Lasgun, Antioc Pattern (TIOW2-LBP)";
  };  
  class Antioc43Lasgun_3: Lucius98Lasgun {
    displayName = "[AsM] Lasgun, Antioc Pattern (TIOW2-LBP)";
  };

  //Wbk_Improved40Weapons_OverridCfg
  //cadian Grenade Launcher
  class TIOW_IG_GL: Rifle_Base_F {
    displayName = "[AsM] Grenade Launcher, Kantrael Pattern (TIOW2-LBP)";
  };

   //Mark 2 Gyro-Stabilized Hot-Shot Lasgun
  class TIOW_CadianHellgun: Type14Heavy {
    displayName = "[AsM] Lasgun Hot Shot, Mark 2 Pattern (TIOW2-LBP)";
  };

  class TIOW_IG_Plasmagun_01: DK_PlasmaGun {
    displayName = "[AsM] Plasma Gun, Magnacore Pattern (TIOW2-LBP)";
  }; 

  //Godwyn Branx Pattern Bolt Pistol
  class TIOW_Bolt_Pistol2: Pistol_Base_F {
    displayName = "[AsM] Pistol Bolt, Godwyn-Branx Pattern (TIOW2-LBP)";
  }; 
  class TIOW_Bolt_Pistol: TIOW_Bolt_Pistol2 {
    displayName = "[AsM] Pistol Bolt, Godwyn-Branx Pattern (TIOW2-LBP)";
  };    

  //Wbk_Improved40Weapons_OverridCfg_Automatic
  //Agripinaa Pattern Autogun Type 2
  class  TIOW_AgripinaaType2_1: AgripinaaAutoBase {
    displayName = "[AsM] Autogun, Agripinaa Type 2 Pattern (TIOW2-LBP)";
  };
  class TIOW_AgripinaaType2_UGL: TIOW_AgripinaaType2_1 {
    displayName = "[AsM] Autogun, Agripinaa Type 2 Pattern (TIOW2-LBP)";
  };

  //Agripinaa Pattern Autogun Type 1
  //Fixing Mis-Assigned Models, Textures, Anims
  class AgripinaaAutoSoBgl: TIOW_AgripinaaType2_UGL {
    displayName = "[AsM] Autogun, Agripinaa Type 1 Pattern (L-TIOW2-LBP)";
    model="\TIOW_AutoWeapons\Model\AgripinaaAutogunSoBgl.p3d";
    picture="\TIOW_AutoWeapons\Icon\Type2_UGL_ca.paa";
    UiPicture="\TIOW_AutoWeapons\Icon\Type2_UGL_ca.paa";
    handAnim[]=
    {
      "OFP2_ManSkeleton",
      "\TIOW_AutoWeapons\Anim\AgripinaaAutoUGL.rtm"
    };
    hiddenSelections[]=
    {
      "camo"
    };
    hiddenSelectionsTextures[]=
    {
      "\TIOW_AutoWeapons\Data\Autogun_SoB_co.paa"
    };
  };
  class AgripinaaAutoSoB: TIOW_AgripinaaType2_1 {
    displayName = "[AsM] Autogun, Agripinaa Type 1 Pattern (L-TIOW2-LBP)";
    model="\TIOW_AutoWeapons\Model\AgripinaaAutogunSoB.p3d";
    picture="\TIOW_AutoWeapons\Icon\Type2_UGL_ca.paa";
    UiPicture="\TIOW_AutoWeapons\Icon\Type2_UGL_ca.paa";
    handAnim[]=
    {
      "OFP2_ManSkeleton",
      "\TIOW_AutoWeapons\Anim\AgripinaaAuto.rtm"
    };
    hiddenSelections[]=
    {
      "camo"
    };
    hiddenSelectionsTextures[]=
    {
      "\TIOW_AutoWeapons\Data\Autogun_SoB_co.paa"
    };
  };
  class AgripinaaAutoChaos: TIOW_AgripinaaType2_1 {
    displayName = "[AsM] Autogun, Agripinaa Type 1 Pattern (L-TIOW2-LBP)";
    model="\TIOW_AutoWeapons\Model\chaos_black_AgripinaaAutogun.p3d";
    picture="\TIOW_AutoWeapons\Icon\Type2_UGL_ca.paa";
    UiPicture="\TIOW_AutoWeapons\Icon\Type2_UGL_ca.paa";
    handAnim[]=
    {
      "OFP2_ManSkeleton",
      "\TIOW_AutoWeapons\Anim\AgripinaaAuto.rtm"
    };
    hiddenSelections[]=
    {
      "camo"
    };
    hiddenSelectionsTextures[]=
    {
      "\TIOW_AutoWeapons\Data\Autogun_chaos1_co.paa"
    };
  };
  class AgripinaaAutoChaos2: TIOW_AgripinaaType2_1 {
    displayName = "[AsM] Autogun, Agripinaa Type 1 Pattern (L-TIOW2-LBP)";
    model="\TIOW_AutoWeapons\Model\chaos_black_AgripinaaAutogun.p3d";
    picture="\TIOW_AutoWeapons\Icon\Type2_UGL_ca.paa";
    UiPicture="\TIOW_AutoWeapons\Icon\Type2_UGL_ca.paa";
    handAnim[]=
    {
      "OFP2_ManSkeleton",
      "\TIOW_AutoWeapons\Anim\AgripinaaAuto.rtm"
    };
    hiddenSelections[]=
    {
      "camo"
    };
    hiddenSelectionsTextures[]=
    {
      "\TIOW_AutoWeapons\Data\Autogun_chaos2_co.paa"
    };
  };
  class AgripinaaAutoChaos3: TIOW_AgripinaaType2_1 {
    displayName = "[AsM] Autogun, Agripinaa Type 1 Pattern (L-TIOW2-LBP)";
    model="\TIOW_AutoWeapons\Model\chaos_black_AgripinaaAutogun.p3d";
    picture="\TIOW_AutoWeapons\Icon\Type2_UGL_ca.paa";
    UiPicture="\TIOW_AutoWeapons\Icon\Type2_UGL_ca.paa";
    handAnim[]=
    {
      "OFP2_ManSkeleton",
      "\TIOW_AutoWeapons\Anim\AgripinaaAuto.rtm"
    };
    hiddenSelections[]=
    {
      "camo"
    };
    hiddenSelectionsTextures[]=
    {
      "\TIOW_AutoWeapons\Data\Autogun_chaos3_co.paa"
    };
  };
  class AgripinaaAutoChaosgl: TIOW_AgripinaaType2_UGL {
    displayName = "[AsM] Autogun, Agripinaa Type 1 Pattern (L-TIOW2-LBP)";
    model="\TIOW_AutoWeapons\Model\chaos_black_AgripinaaAutogungl.p3d";
    picture="\TIOW_AutoWeapons\Icon\Type2_UGL_ca.paa";
    UiPicture="\TIOW_AutoWeapons\Icon\Type2_UGL_ca.paa";
    handAnim[]=
    {
      "OFP2_ManSkeleton",
      "\TIOW_AutoWeapons\Anim\AgripinaaAutoUGL.rtm"
    };
    hiddenSelections[]=
    {
      "camo"
    };
    hiddenSelectionsTextures[]=
    {
      "\TIOW_AutoWeapons\Data\Autogun_chaos1_co.paa"
    };
  };
  class AgripinaaAutoChaos2gl: TIOW_AgripinaaType2_UGL {
    displayName = "[AsM] Autogun, Agripinaa Type 1 Pattern (L-TIOW2-LBP)";
    model="\TIOW_AutoWeapons\Model\chaos_black_AgripinaaAutogungl.p3d";
    picture="\TIOW_AutoWeapons\Icon\Type2_UGL_ca.paa";
    UiPicture="\TIOW_AutoWeapons\Icon\Type2_UGL_ca.paa";
    handAnim[]=
    {
      "OFP2_ManSkeleton",
      "\TIOW_AutoWeapons\Anim\AgripinaaAutoUGL.rtm"
    };
    hiddenSelections[]=
    {
      "camo"
    };
    hiddenSelectionsTextures[]=
    {
      "\TIOW_AutoWeapons\Data\Autogun_chaos2_co.paa"
    };
  };
  class AgripinaaAutoChaos3gl: TIOW_AgripinaaType2_UGL {
    displayName = "[AsM] Autogun, Agripinaa Type 1 Pattern (L-TIOW2-LBP)";
    model="\TIOW_AutoWeapons\Model\chaos_black_AgripinaaAutogungl.p3d";
    picture="\TIOW_AutoWeapons\Icon\Type2_UGL_ca.paa";
    UiPicture="\TIOW_AutoWeapons\Icon\Type2_UGL_ca.paa";
    handAnim[]=
    {
      "OFP2_ManSkeleton",
      "\TIOW_AutoWeapons\Anim\AgripinaaAutoUGL.rtm"
    };
    hiddenSelections[]=
    {
      "camo"
    };
    hiddenSelectionsTextures[]=
    {
      "\TIOW_AutoWeapons\Data\Autogun_chaos3_co.paa"
    };
  };
  class AgripinaaAutoIG1: TIOW_AgripinaaType2_1 {
    displayName = "[AsM] Autogun, Agripinaa Type 1 Pattern (L-TIOW2-LBP)";
    model="\TIOW_AutoWeapons\Model\AgripinaaAutogunIG1.p3d";
    picture="\TIOW_AutoWeapons\Icon\Type2_UGL_ca.paa";
    UiPicture="\TIOW_AutoWeapons\Icon\Type2_UGL_ca.paa";
    handAnim[]=
    {
      "OFP2_ManSkeleton",
      "\TIOW_AutoWeapons\Anim\AgripinaaAuto.rtm"
    };
    hiddenSelections[]=
    {
      "camo"
    };
    hiddenSelectionsTextures[]=
    {
      "\TIOW_AutoWeapons\Data\Autogun_IG1_co.paa"
    };
  };
  class AgripinaaAutoIG2: TIOW_AgripinaaType2_1 {
    displayName = "[AsM] Autogun, Agripinaa Type 1 Pattern (L-TIOW2-LBP)";
    model="\TIOW_AutoWeapons\Model\AgripinaaAutogunIG1.p3d";
    picture="\TIOW_AutoWeapons\Icon\Type2_UGL_ca.paa";
    UiPicture="\TIOW_AutoWeapons\Icon\Type2_UGL_ca.paa";
    handAnim[]=
    {
      "OFP2_ManSkeleton",
      "\TIOW_AutoWeapons\Anim\AgripinaaAuto.rtm"
    };
    hiddenSelections[]=
    {
      "camo"
    };
    hiddenSelectionsTextures[]=
    {
      "\TIOW_AutoWeapons\Data\Autogun_IG2_co.paa"
    };
  };
  class AgripinaaAutoIG1GL: TIOW_AgripinaaType2_UGL {
    displayName = "[AsM] Autogun, Agripinaa Type 1 Pattern (L-TIOW2-LBP)";
    model="\TIOW_AutoWeapons\Model\AgripinaaAutogunIG1gl.p3d";
    picture="\TIOW_AutoWeapons\Icon\Type2_UGL_ca.paa";
    UiPicture="\TIOW_AutoWeapons\Icon\Type2_UGL_ca.paa";
    handAnim[]=
    {
      "OFP2_ManSkeleton",
      "\TIOW_AutoWeapons\Anim\AgripinaaAutoUGL.rtm"
    };
    hiddenSelections[]=
    {
      "camo"
    };
    hiddenSelectionsTextures[]=
    {
      "\TIOW_AutoWeapons\Data\Autogun_IG1_co.paa"
    };
  };
  class AgripinaaAutoIG2GL: TIOW_AgripinaaType2_UGL {
    displayName = "[AsM] Autogun, Agripinaa Type 1 Pattern (L-TIOW2-LBP)";
    model="\TIOW_AutoWeapons\Model\AgripinaaAutogunIG1gl.p3d";
    picture="\TIOW_AutoWeapons\Icon\Type2_UGL_ca.paa";
    UiPicture="\TIOW_AutoWeapons\Icon\Type2_UGL_ca.paa";
    handAnim[]=
    {
      "OFP2_ManSkeleton",
      "\TIOW_AutoWeapons\Anim\AgripinaaAutoUGL.rtm"
    };
    hiddenSelections[]=
    {
      "camo"
    };
    hiddenSelectionsTextures[]=
    {
      "\TIOW_AutoWeapons\Data\Autogun_IG2_co.paa"
    };
  };

  //Agripinaa Type 3 Pattern
  class TIOW_Type3_AgripinaaAuto_Base: AgripinaaAutoBase {
    displayName = "[AsM] Autogun, Agripinaa Type 3 Pattern (TIOW2-LBP)";
  };

  //TIOW_Launchers
  //Soundstrike Pattern Missile Launcher
  class TIOW_SM_Rocket_1_LSLOT: launch_RPG7_F {
    displayName="[SM] Missile Launcher, Soundstrike Pattern (TIOW2-LBP)";
  };


  //TIOW_Dos_Weps
  //Godwyn Pattern Boltgun
  class TIOW_GodwynBoltgun_1: arifle_MX_Base_F {
    displayName = "[SM] Bolter, Godwyn Pattern (TIOW2-LBP)";
  };

  //Mars Pattern Storm Bolter
  class TIOW_SM_Storm_Bolt_1: TIOW_GodwynBoltgun_1 {
    displayName = "[SM] Bolter Storm, Mars Pattern (TIOW2-LBP)";
  };
  class TIOW_SM_Storm_Bolt_2: TIOW_SM_Storm_Bolt_1 {
    displayName = "[SM] Bolter Storm, Mars Pattern (TIOW2-LBP)";
  };
  class TIOW_SM_Storm_Bolt_3: TIOW_SM_Storm_Bolt_1 {
    displayName = "[SM] Bolter Storm, Mars Pattern (TIOW2-LBP)";
  };
  class TIOW_SM_Storm_Bolt_4: TIOW_SM_Storm_Bolt_1 {
    displayName = "[SM] Bolter Storm, Mars Pattern (TIOW2-LBP)";
  };
  class TIOW_SM_Storm_Bolt_5: TIOW_SM_Storm_Bolt_1 {
    displayName = "[SM] Bolter Storm, Mars Pattern (TIOW2-LBP)";
  };
  class TIOW_SM_Storm_Bolt_6: TIOW_SM_Storm_Bolt_1 {
    displayName = "[SM] Bolter Storm, Mars Pattern (TIOW2-LBP)";
  };
  class TIOW_SM_Storm_Bolt_7: TIOW_SM_Storm_Bolt_1 {
    displayName = "[SM] Bolter Storm, Mars Pattern (TIOW2-LBP)";
  };
  class TIOW_SM_Storm_Bolt_8: TIOW_SM_Storm_Bolt_1 {
    displayName = "[SM] Bolter Storm, Mars Pattern (TIOW2-LBP)";
  };

  //Mars Pattern Lascannon
  class TIOW_SM_LasCan_01: TIOW_GodwynBoltgun_1 {
    displayName = "[SM] Lascannon, Mars Pattern (TIOW2-LBP)";
  };
  class TIOW_SM_LasCan_02: TIOW_SM_LasCan_01 {
    displayName = "[SM] Lascannon, Mars Pattern (TIOW2-LBP)";
  };
  class TIOW_SM_LasCan_03: TIOW_SM_LasCan_01 {
    displayName = "[SM] Lascannon, Mars Pattern (TIOW2-LBP)";
  };
  class TIOW_SM_LasCan_04: TIOW_SM_LasCan_01 {
    displayName = "[SM] Lascannon, Mars Pattern (TIOW2-LBP)";
  };  
  class TIOW_SM_LasCan_05: TIOW_SM_LasCan_01 {
    displayName = "[SM] Lascannon, Mars Pattern (TIOW2-LBP)";
  };   
  class TIOW_CSM_LasCan_01: TIOW_SM_LasCan_01 {
    displayName = "[SM] Lascannon, Mars Pattern (TIOW2-LBP)";
  }; 
  class TIOW_CSM_LasCan_02: TIOW_CSM_LasCan_01 {
    displayName = "[SM] Lascannon, Mars Pattern (TIOW2-LBP)";
  };
  class TIOW_CSM_LasCan_03: TIOW_CSM_LasCan_01 {
    displayName = "[SM] Lascannon, Mars Pattern (TIOW2-LBP)";
  };
  class TIOW_CSM_LasCan_04: TIOW_CSM_LasCan_01 {
    displayName = "[SM] Lascannon, Mars Pattern (TIOW2-LBP)";
  };
  class TIOW_CSM_LasCan_05: TIOW_CSM_LasCan_01 {
    displayName = "[SM] Lascannon, Mars Pattern (TIOW2-LBP)";
  };


  //Ragefire Plasma Cannon
  class TIOW_SM_PlasCan_01: TIOW_SM_Ragefire_PlasmaGun {
    displayName = "[SM] Plasma Cannon, Ragefire Mark 1 Pattern (TIOW2-LBP)";
  };
  class TIOW_SM_PlasCan_02: TIOW_SM_PlasCan_01 {
    displayName = "[SM] Plasma Cannon, Ragefire Mark 1 Pattern (TIOW2-LBP)";
  };
  class TIOW_SM_PlasCan_03: TIOW_SM_PlasCan_01 {
    displayName = "[SM] Plasma Cannon, Ragefire Mark 1 Pattern (TIOW2-LBP)";
  };
  class TIOW_SM_PlasCan_04: TIOW_SM_PlasCan_01 {
    displayName = "[SM] Plasma Cannon, Ragefire Mark 1 Pattern (TIOW2-LBP)";
  };
  class TIOW_CSM_PlasCan_01: TIOW_SM_PlasCan_01 {
    displayName = "[SM] Plasma Cannon, Ragefire Mark 1 Pattern (TIOW2-LBP)";
  };
  class TIOW_CSM_PlasCan_02: TIOW_CSM_PlasCan_01 {
    displayName = "[SM] Plasma Cannon, Ragefire Mark 1 Pattern (TIOW2-LBP)";
  };
  class TIOW_CSM_PlasCan_03: TIOW_CSM_PlasCan_01 {
    displayName = "[SM] Plasma Cannon, Ragefire Mark 1 Pattern (TIOW2-LBP)";
  };
  class TIOW_CSM_PlasCan_04: TIOW_CSM_PlasCan_01 {
    displayName = "[SM] Plasma Cannon, Ragefire Mark 1 Pattern (TIOW2-LBP)";
  };
  class TIOW_CSM_PlasCan_05: TIOW_CSM_PlasCan_01 {
    displayName = "[SM] Plasma Cannon, Ragefire Mark 1 Pattern (TIOW2-LBP)";
  };

  //Ragefire Plasma Pistol
  class TIOW_Guard_Plasma_Pistol: Pistol_Base_F {
    displayName = "[AsM] Plasma Pistol, Ragefire Mark 2 Pattern (TIOW2-LBP)";
  };

  //Godwyn Pattern Bolter Combi Plasma

  class TIOW_SM_Combi_Bolter_1: TIOW_GodwynBoltgun_1 {
    displayName = "[SM] Plasma Gun Combi, Dekker Pattern (TIOW2-LBP)";
  };
  class TIOW_SM_Combi_Bolter_2: TIOW_SM_Combi_Bolter_1 {
    displayName = "[SM] Plasma Gun Combi, Dekker Pattern (TIOW2-LBP)";
  };
  class TIOW_SM_Combi_Bolter_3: TIOW_SM_Combi_Bolter_1 {
    displayName = "[SM] Plasma Gun Combi, Dekker Pattern (TIOW2-LBP)";
  };


  //Dominion Pattern Flamer
  class TIOW_SoB_Flamer_1: TIOW_Krieg_Flamer {
    displayName = "[AsM] Flamer, Dominion Pattern (TIOW2-LBP)";
  };
  class TIOW_SoB_Flamer_2: TIOW_SoB_Flamer_1 {
    displayName = "[AsM] Flamer, Dominion Pattern (TIOW2-LBP)";
  };
  class TIOW_SoB_Flamer_3: TIOW_SoB_Flamer_1 {
    displayName = "[AsM] Flamer, Dominion Pattern (TIOW2-LBP)";
  };

  //Godwyn De'az Mark II Pattern Boltgun
  class TIOW_SoB_Bolter_1: TIOW_GodwynBoltgun_1 {
    displayName = "[AsM] Boltgun, Godwyn De'az Pattern Mark II (TIOW2-LBP)";
  };
  class TIOW_SoB_Bolter_2: TIOW_SoB_Bolter_1 {
    displayName = "[AsM] Boltgun, Godwyn De'az Pattern Mark II (TIOW2-LBP)";
  };
  class TIOW_SoB_Bolter_3: TIOW_SoB_Bolter_1 {
    displayName = "[AsM] Boltgun, Godwyn De'az Pattern Mark II (TIOW2-LBP)";
  };
  class TIOW_Guard_Bolter_1: TIOW_GodwynBoltgun_1 {
    displayName = "[AsM] Boltgun, Godwyn De'az Pattern Mark II (TIOW2-LBP)";
  };
  class TIOW_Guard_Bolter_2: TIOW_Guard_Bolter_1 {
    displayName = "[AsM] Boltgun, Godwyn De'az Pattern Mark II (TIOW2-LBP)";
  };

  //Mars De'az Pattern Storm Bolter
  class TIOW_SoB_Storm_Bolt_1: TIOW_SM_Storm_Bolt_1 {
    displayName = "[AsM] Boltgun Storm, Mars De'az Pattern (TIOW2-LBP)";
  };
  class TIOW_SoB_Storm_Bolt_2: TIOW_SoB_Storm_Bolt_1 {
    displayName = "[AsM] Boltgun Storm, Mars De'az Pattern (TIOW2-LBP)";
  };
  class TIOW_SoB_Storm_Bolt_3: TIOW_SoB_Storm_Bolt_1 {
    displayName = "[AsM] Boltgun Storm, Mars De'az Pattern (TIOW2-LBP)";
  };


  //Soundstrike Pattern Rocket Launcher
  class TIOW_SM_Rocket_1: TIOW_GodwynBoltgun_1 {
     displayName = "[SM] Rocket Launcher, Soundstrike Pattern (TIOW2-LBP)";
  };

  //TIOW_delaque_weps
  //Sinister Pattern Boltgun
  class TIOW_delaque_bolter: TIOW_delaque_bolter_base {
    displayName = "[AsM] Boltgun, Sinister Pattern (TIOW2-LBP)"
  };

  //Sinister Pattern Plasma Gun
  class TIOW_delaque_plasma: TIOW_delaque_plasma_base {
    displayName = "[AsM] Plasma Gun, Sinister Pattern (TIOW2-LBP)";
  };

  //Sinister Pattern Flechette Rifle
  class TIOW_delaque_flechette: TIOW_delaque_flechette_base {
    displayName = "[AsM] Fletchette Rifle, Sinister Pattern (TIOW2-LBP)";
  };

  //Sinister Pattern Lasgun
  class TIOW_delaque_lasgun: TIOW_delaque_lasgun_base {
    displayName = "[AsM] Lasgun, Sinister Pattern (TIOW2-LBP)";
  };

  class TIOW_delaque_autogun: TIOW_delaque_autogun_base {
    displayName = "[AsM] Autogun, Sinister Pattern (TIOW2-LBP)";
  };

  class TIOW_delaque_sniper: TIOW_delaque_sniper_base {
    displayName = "[AsM] Auto Sniper, Sinister Pattern (TIOW2-LBP)"
  };

  class TIOW_delaque_stubber: TIOW_delaque_stubber_base {
    displayName = "[AsM] Stubber Medium, Sinister Pattern (TIOW2-LBP)"
  };


  //TIOW_BoltPistols
  //Godwyn Pattern Bolt Pistol
  class TIOW_BoltPistol_Base: hgun_Rook40_F {
    displayName = "[SM] Bolt Pistol, Godwyn Pattern (TIOW2-LBP)";
  };

  //Ork_Gubbinz
  //Radium Carbine
  class TIOW_RADIUM_CARBINE_1: Rifle_Base_F {
    displayName = "[AM] Radium Carbine, Mars Pattern (TIOW2-LBP)";
  }; 

  //Galvanic Rifle
  class TIOW_galvanic_rifle_1: Rifle_Base_F {
    displayName = "[AM] Rifle Galvanic, Mars Pattern (TIOW2-LBP)"
  };

  //Plasma Caliver
  class TIOW_plasma_caliver_1: Rifle_Base_F {
    displayName = "[AM] Plasma Gun, Caliver Pattern (TIOW2-LBP)"
  };

  //Arc Pistol
  class TIOW_ARC_PISTOL_1: Pistol_Base_F {
    displayName = "[AM] Arc Pistol, Mars Pattern (TIOW2-LBP)";
  };

  //Arc Rifle
  class TIOW_Arc_rifle_1: TIOW_plasma_caliver_1 {
    displayName = "[AM] Arc Rifle, Mars Pattern (TIOW2-LBP)";
  };

  class TIOW_arquebus_1: Rifle_Base_F {
    displayName = "[AM] Transuranic Arquebus, Mars Pattern (TIOW2-LBP)";
  };
 

  //OrkDakka
  //Shoota, Type 3
  class Ork_Shoota_1: Rifle_Base_F {
    displayName = "[Ork] Shoota, Type 3 (TIOW2-LBP)";
  };
  class Ork_Shoota_2: Ork_Shoota_1 {
    displayName = "[Ork] Shoota, Type 4 (TIOW2-LBP)";
  };
  class Ork_Shoota_3: Ork_Shoota_1 {
    displayName = "[Ork] Shoota, Type 5 (TIOW2-LBP)";
  };

  //Ork Big Shoota
  class Ork_BigShoota_01_F: Rifle_Base_F {
    displayName = "[Ork] Shoota Big, Type 1 (TIOW2-LBP)";
  };
  class Ork_BigShoota_01_ES: Ork_BigShoota_01_F {
    displayName = "[Ork] Shoota Big, Type 1 (TIOW2-LBP)";
  };
  class Ork_BigShoota_01_BA: Ork_BigShoota_01_F {
    displayName = "[Ork] Shoota Big, Type 1 (TIOW2-LBP)";
  };
  class Ork_BigShoota_01_BM: Ork_BigShoota_01_F {
    displayName = "[Ork] Shoota Big, Type 1 (TIOW2-LBP)";
  };

  //Ork Burna
  class Ork_Burna_01_F: Rifle_Base_F {
    displayName = "[Ork] Burna, Type 1 (TIOW2-LBP)";
  };
  class Ork_Burna_01_BA: Ork_Burna_01_F {
    displayName = "[Ork] Burna, Type 1 (TIOW2-LBP)";
  };
  class Ork_Burna_01_BM: Ork_Burna_01_F {
    displayName = "[Ork] Burna, Type 1 (TIOW2-LBP)";
  };
  class Ork_Burna_01_DS: Ork_Burna_01_F {
    displayName = "[Ork] Burna, Type 1 (TIOW2-LBP)";
  };

  class Ork_Speshul_01_F: Rifle_Base_F {
    displayName = "[Ork] Shoota Speshul, Type 1 (TIOW2-LBP)";
  };
  class Ork_Speshul_01_BA: Ork_Speshul_01_F {
    displayName = "[Ork] Shoota Speshul, Type 1 (TIOW2-LBP)";
  };
  class Ork_Speshul_01_BM: Ork_Speshul_01_F {
    displayName = "[Ork] Shoota Speshul, Type 1 (TIOW2-LBP)";
  };
  class Ork_Speshul_01_DS: Ork_Speshul_01_F {
    displayName = "[Ork] Shoota Speshul, Type 1 (TIOW2-LBP)";
  };

  class Ork_Loota_01_F: Rifle_Base_F {
    displayName = "[Ork] Shoota Deffgun, Type 1 (TIOW2-LBP)";
  };
  class Ork_Loota_01_BA: Ork_Loota_01_F {
    displayName = "[Ork] Shoota Deffgun, Type 1 (TIOW2-LBP)";
  };
  class Ork_Loota_01_BM: Ork_Loota_01_F {
    displayName = "[Ork] Shoota Deffgun, Type 1 (TIOW2-LBP)";
  };
  class Ork_Loota_01_DS: Ork_Loota_01_F {
    displayName = "[Ork] Shoota Deffgun, Type 1 (TIOW2-LBP)";
  };

  class Ork_SnazzGun_01_F: Rifle_Base_F {
    displayName = "[Ork] Snazzgun, Type 1 (TIOW2-LBP)";
  };
};