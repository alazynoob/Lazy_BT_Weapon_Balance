class cfgWeapons {
class Single;
class Burst;
class FullAuto;
class arifle_MX_Base_F;
  class AoD_Tigrus_Boltgun_Basic: arifle_MX_Base_F {
    displayName = "[SM] Bolter, Tigrus Pattern (AOD2-LBP)";
    modes[] = { "Bolter_Single", "Bolter_Auto", "Bolter_Auto_AI_Short_Burst", "Bolter_Auto_AI_Long_Burst"};
    #include "..\HPP_FireModes\Bolter_Single.hpp"
    #include "..\HPP_FireModes\Bolter_Auto.hpp"
    #include "..\HPP_FireModes\Bolter_Auto_AI_Short_Burst.hpp"
    #include "..\HPP_FireModes\Bolter_Auto_AI_Long_Burst.hpp"
  };
  class AoD_Exitus_Basic: AoD_Tigrus_Boltgun_Basic {
    displayName = "[SM] Bolter Stalker, Tigrus Exitus Pattern (AOD2-LBP)";
    modes[] = {"Sniper_Bolter_Single"};
    #include "..\HPP_FireModes\Sniper_Bolter_Single.hpp"
  };
  class AoD_Tcombi_Basic: AoD_Tigrus_Boltgun_Basic {
    displayName = "[SM] Bolter Combi, Tigrus Pattern (AOD2-LBP)";
    modes[] = {"Combi_Bolter_Burst","Combi_Bolter_Auto","Combi_Bolter_Auto_AI_Short_Burst","Combi_Bolter_Auto_AI_Long_Burst"};
    #include "..\HPP_FireModes\Combi_Bolter_Burst.hpp"
    #include "..\HPP_FireModes\Combi_Bolter_Auto.hpp"
    #include "..\HPP_FireModes\Combi_Bolter_Auto_AI_Short_Burst.hpp"
    #include "..\HPP_FireModes\Combi_Bolter_Auto_AI_Long_Burst.hpp"
  };
  // class AoD_Phobos_Boltgun_Basic: AoD_Tigrus_Boltgun_Basic {
  //   displayName = "[SM] Bolter, Phobos Pattern (AOD2-LBP)";
  // };
  // class AoD_Atrox_Basic: AoD_Exitus_Basic {
  //   displayName = "[SM] Bolter Stalker, Phobos Atrox Pattern (AOD2-LBP)";
  // };
  // class AoD_Pcombi_Basic {
  //   displayName = "[SM] Bolter Combi, Phobos Pattern (AOD2-LBP)";
  // };
  // class AoD_Umbra_Boltgun_Basic: AoD_Tigrus_Boltgun_Basic {
  //   displayName = "[SM] Bolter, Umbra Pattern (AOD2-LBP)";
  //   magazines[] = {"AoD_Umbra_Bolt_Mag","AoD_Umbra_DF_Bolt_Mag","AoD_Umbra_KR_Bolt_Mag"};
  // };
  // class AoD_Heavy_Boltgun_Basic: AoD_Tigrus_Boltgun_Basic {
  //   displayName = "[SM] Bolter Heavy, Mars Dosiel Pattern (AOD2-LBP)";
  // };
  // class AoD_Meltagun_Basic: Rifle_Base_F {
  //   displayName = "[SM] Melta, Primus Pattern (AOD2-LBP)";
  // };
  // class AoD_Lascutter_Basic: AoD_Meltagun_Basic {
  //   displayName = "[SM] Lascutter, Ultima Pattern (AOD2-LBP)";
  // };
  // class AoD_Ryza_Plasma_Basic: AoD_Tigrus_Boltgun_Basic {
  //   displayName = "[SM] Plasma Gun, Ryza Thunderbolt Pattern (AOD2-LBP)";
  // };
  // class AoD_Volkite_Charger: AoD_Tigrus_Boltgun_Basic {
  //   displayName = "[SM] Volkite, Charger Pattern (AOD2-LBP)";
  // };
  // class AoD_Volkite_Caliver: AoD_Volkite_Charger {
  //   displayName = "[SM] Volkite, Caliver Pattern (AOD2-LBP)";
  // };
  // class AoD_LasCannon_Basic: AoD_Tigrus_Boltgun_Basic {
  //   displayName = "[SM] Lascannon, Ryza Pattern (AOD2-LBP)";
  // };
  // class AoD_LasCannon_NoShoulder: AoD_LasCannon_Basic {
  //   displayName = "[SM] Lascannon, Ryza Pattern (AOD2-LBP)";
  // };
  // class AoD_Autocannon_Basic: AoD_Tigrus_Boltgun_Basic {
  //   displayName = "[SM] Autocannon, Kalibrax Pattern (AOD2-LBP)";
  // };
  // class AoD_Plasma_Cannon_Basic: AoD_Meltagun_Basic {
  //   displayName = "[SM] Plasma Cannon, Dosiel Pattern (AOD2-LBP)";
  // };
  // class AoD_Plasma_Cannon_Under: AoD_Plasma_Cannon_Basic {
  //   displayName = "[SM] Plasma Cannon, Mars Pattern (AOD2-LBP)";
  // };
  // class AoD_Multi_Melta_Basic: AoD_Meltagun_Basic {
  //   displayName = "[SM] Melta Multi, Mediant Pattern (AOD2-LBP)";
  // };
  // class AoD_Rotor_Cannon_Basic: AoD_Tigrus_Boltgun_Basic {
  //   displayName = "[SM] Rotor Cannon, Proteus Pattern (AOD2-LBP)";
  // };
  // class AoD_Volkite_Culverin: AoD_Volkite_Charger {
  //   displayName = "[SM] Volkite, Culverin Pattern (AOD2-LBP)";
  // };
  // class AoD_Missile_Launcher_Under: AoD_Tigrus_Boltgun_Basic {
  //   displayName = "[SM] Missile Launcher, Proteus-II Pattern (AOD2-LBP)";
  // };
  // class AoD_Missile_Launcher_Shoulder: AoD_Tigrus_Boltgun_Basic {
  //   displayName = "[SM] Missile Launcher, Proteus-II Pattern (AOD2-LBP)";
  // };
  // class AoD_Tigrus_Seek_Plasma: AoD_Tigrus_Boltgun_Basic {
  //   displayName = "[SM] Bolter Combi, Tigrus Pattern (AOD2-LBP)";
  // };
  // class AoD_Tigrus_Seek_Melta: AoD_Tigrus_Boltgun_Basic {
  //   displayName = "[SM] Bolter Combi, Tigrus Pattern (AOD2-LBP)";
  // };
  // class AoD_Tigrus_Shield_Basic: AoD_Tigrus_Boltgun_Basic {
  //   displayName = "[SM] Bolter, Tigrus Pattern (AOD2-LBP)";
  // };
  // class AoD_Phobos_Shield_Basic: AoD_Phobos_Boltgun_Basic {
  //   displayName = "[SM] Bolter, Phobos Pattern (AOD2-LBP)";
  // };
  // class AoD_Lascutter_Shield_Basic: AoD_Lascutter_Basic {
  //   displayName = "[SM] Lascutter, Ultima Pattern (AOD2-LBP)";
  // };
};