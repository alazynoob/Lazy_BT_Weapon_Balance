class cfgWeapons {
class Single;
class Burst;
class FullAuto;
class arifle_MX_Base_F;
class Rifle_Base_F;
  class AoD_Tigrus_Boltgun_Basic: arifle_MX_Base_F {
    displayName = "[SM] Bolter, Tigrus Pattern (AOD2-LBP)";
    modes[] = { "Bolter_No_Fire", "Bolter_Single_Slow", "Bolter_Single_Rapid", "Bolter_Auto_AI_Short_Burst", "Bolter_Auto_AI_Long_Burst", "Bolter_Auto"};
    #include "..\HPP_FireModes\Bolter_Tigrus\Bolter_No_Fire.hpp"
    #include "..\HPP_FireModes\Bolter_Tigrus\Bolter_Single_Slow.hpp"
    #include "..\HPP_FireModes\Bolter_Tigrus\Bolter_Single_Rapid.hpp"
    #include "..\HPP_FireModes\Bolter_Tigrus\Bolter_Auto_AI_Short_Burst.hpp"
    #include "..\HPP_FireModes\Bolter_Tigrus\Bolter_Auto_AI_Long_Burst.hpp"
    #include "..\HPP_FireModes\Bolter_Tigrus\Bolter_Auto.hpp"
  };
  class AoD_Exitus_Basic: AoD_Tigrus_Boltgun_Basic {
    displayName = "[SM] Bolter Stalker, Tigrus Exitus Pattern (AOD2-LBP)";
    modes[] = {"Bolter_No_Fire", "Bolter_Single_Slow", "Bolter_Single_Slow_Extended", "Bolter_Single_Rapid"};
    #include "..\HPP_FireModes\Bolter_Tigrus_Exitus\Bolter_No_Fire.hpp"
    #include "..\HPP_FireModes\Bolter_Tigrus_Exitus\Bolter_Single_Slow.hpp"
    #include "..\HPP_FireModes\Bolter_Tigrus_Exitus\Bolter_Single_Slow_Extended.hpp"
    #include "..\HPP_FireModes\Bolter_Tigrus_Exitus\Bolter_Single_Rapid.hpp"
  };
  class AoD_Tcombi_Basic: AoD_Tigrus_Boltgun_Basic {
    displayName = "[SM] Bolter Combi, Tigrus Pattern (AOD2-LBP)";
    modes[] = {"Bolter_No_Fire","Bolter_Auto_AI_Short_Burst","Bolter_Auto_AI_Long_Burst","Bolter_Auto"};
    #include "..\HPP_FireModes\Bolter_Tigrus_Combi_Bolter\Bolter_No_Fire.hpp"
    #include "..\HPP_FireModes\Bolter_Tigrus_Combi_Bolter\Bolter_Auto_AI_Short_Burst.hpp"
    #include "..\HPP_FireModes\Bolter_Tigrus_Combi_Bolter\Bolter_Auto_AI_Long_Burst.hpp"
    #include "..\HPP_FireModes\Bolter_Tigrus_Combi_Bolter\Bolter_Auto.hpp"
  };
  class AoD_Phobos_Boltgun_Basic: AoD_Tigrus_Boltgun_Basic {
    displayName = "[SM] Bolter, Phobos Pattern (AOD2-LBP)";
    modes[] = { "Bolter_No_Fire", "Bolter_Single_Slow", "Bolter_Single_Rapid", "Bolter_Auto_AI_Short_Burst", "Bolter_Auto_AI_Long_Burst", "Bolter_Auto"};
    #include "..\HPP_FireModes\Bolter_Phobos\Bolter_No_Fire.hpp"
    #include "..\HPP_FireModes\Bolter_Phobos\Bolter_Single_Slow.hpp"
    #include "..\HPP_FireModes\Bolter_Phobos\Bolter_Single_Rapid.hpp"
    #include "..\HPP_FireModes\Bolter_Phobos\Bolter_Auto_AI_Short_Burst.hpp"
    #include "..\HPP_FireModes\Bolter_Phobos\Bolter_Auto_AI_Long_Burst.hpp"
    #include "..\HPP_FireModes\Bolter_Phobos\Bolter_Auto.hpp"
  };
  class AoD_Atrox_Basic: AoD_Exitus_Basic {
    displayName = "[SM] Bolter Stalker, Phobos Atrox Pattern (AOD2-LBP)";
    modes[] = {"Bolter_No_Fire", "Bolter_Single_Slow", "Bolter_Single_Slow_Extended", "Bolter_Single_Rapid"};
    #include "..\HPP_FireModes\Bolter_Phobos_Atrox\Bolter_No_Fire.hpp"
    #include "..\HPP_FireModes\Bolter_Phobos_Atrox\Bolter_Single_Slow.hpp"
    #include "..\HPP_FireModes\Bolter_Phobos_Atrox\Bolter_Single_Slow_Extended.hpp"
    #include "..\HPP_FireModes\Bolter_Phobos_Atrox\Bolter_Single_Rapid.hpp"
  };
  class AoD_Pcombi_Basic {
    displayName = "[SM] Bolter Combi, Phobos Pattern (AOD2-LBP)";
    modes[] = {"Bolter_No_Fire","Bolter_Auto_AI_Short_Burst","Bolter_Auto_AI_Long_Burst","Bolter_Auto"};
    #include "..\HPP_FireModes\Bolter_Phobos_Combi_Bolter\Bolter_No_Fire.hpp"
    #include "..\HPP_FireModes\Bolter_Phobos_Combi_Bolter\Bolter_Auto_AI_Short_Burst.hpp"
    #include "..\HPP_FireModes\Bolter_Phobos_Combi_Bolter\Bolter_Auto_AI_Long_Burst.hpp"
    #include "..\HPP_FireModes\Bolter_Phobos_Combi_Bolter\Bolter_Auto.hpp"
  };
  class AoD_Umbra_Boltgun_Basic: AoD_Tigrus_Boltgun_Basic {
    displayName = "[SM] Bolter, Umbra Pattern (AOD2-LBP)";
    magazines[] = {"AoD_Umbra_Bolt_Mag","AoD_Umbra_DF_Bolt_Mag","AoD_Umbra_KR_Bolt_Mag"};
    modes[] = { "Bolter_No_Fire", "Bolter_Single_Slow", "Bolter_Single_Rapid", "Bolter_Auto_AI_Short_Burst", "Bolter_Auto_AI_Long_Burst", "Bolter_Auto"};
    #include "..\HPP_FireModes\Bolter_Umbra\Bolter_No_Fire.hpp"
    #include "..\HPP_FireModes\Bolter_Umbra\Bolter_Single_Slow.hpp"
    #include "..\HPP_FireModes\Bolter_Umbra\Bolter_Single_Rapid.hpp"
    #include "..\HPP_FireModes\Bolter_Umbra\Bolter_Auto_AI_Short_Burst.hpp"
    #include "..\HPP_FireModes\Bolter_Umbra\Bolter_Auto_AI_Long_Burst.hpp"
    #include "..\HPP_FireModes\Bolter_Umbra\Bolter_Auto.hpp"
  };
  class AoD_Heavy_Boltgun_Basic: AoD_Tigrus_Boltgun_Basic {
    displayName = "[SM] Bolter Heavy, Mars Dosiel Pattern (AOD2-LBP)";
    modes[] = {"Bolter_No_Fire","Bolter_Auto_AI_Short_Burst","Bolter_Auto_AI_Long_Burst","Bolter_Auto"};
    #include "..\HPP_FireModes\Bolter_Heavy_Fast\Bolter_No_Fire.hpp"
    #include "..\HPP_FireModes\Bolter_Heavy_Fast\Bolter_Auto_AI_Short_Burst.hpp"
    #include "..\HPP_FireModes\Bolter_Heavy_Fast\Bolter_Auto_AI_Long_Burst.hpp"
    #include "..\HPP_FireModes\Bolter_Heavy_Fast\Bolter_Auto.hpp"
  };
  class AoD_Meltagun_Basic: Rifle_Base_F {
    displayName = "[SM] Melta, Primus Pattern (AOD2-LBP)";
    modes[] = {"Meltagun_No_Fire","Meltagun_Single"};
    #include "..\HPP_FireModes\Meltagun\Meltagun_No_Fire.hpp"
    #include "..\HPP_FireModes\Meltagun\Meltagun_Single.hpp"
  };
  class AoD_Lascutter_Basic: AoD_Meltagun_Basic {
    displayName = "[SM] Lascutter, Ultima Pattern (AOD2-LBP)";
    modes[] = {"Lascutter_No_Fire","Lascutter_Single"};
    #include "..\HPP_FireModes\Lascutter\Lascutter_No_Fire.hpp"
    #include "..\HPP_FireModes\Lascutter\Lascutter_Single.hpp"
  };
  class AoD_Ryza_Plasma_Basic: AoD_Tigrus_Boltgun_Basic {
    displayName = "[SM] Plasma Gun, Ryza Thunderbolt Pattern (AOD2-LBP)";
    modes[] = {"Plasma_Gun_No_Fire","Plasma_Gun_Single_Rapid"};
    #include "..\HPP_FireModes\Plasma_Gun\Plasma_Gun_No_Fire.hpp"
    #include "..\HPP_FireModes\Plasma_Gun\Plasma_Gun_Single_Rapid.hpp"
  };
  class AoD_Volkite_Charger: AoD_Tigrus_Boltgun_Basic {
    displayName = "[SM] Volkite, Charger Pattern (AOD2-LBP)";
    modes[] = { "Volkite_No_Fire", "Volkite_Single_Slow", "Volkite_Single_Rapid", "Volkite_Auto_AI_Short_Burst", "Volkite_Auto_AI_Long_Burst", "Volkite_Auto"};
    #include "..\HPP_FireModes\Volkite_Charger\Volkite_No_Fire.hpp"
    #include "..\HPP_FireModes\Volkite_Charger\Volkite_Single_Slow.hpp"
    #include "..\HPP_FireModes\Volkite_Charger\Volkite_Single_Rapid.hpp"
    #include "..\HPP_FireModes\Volkite_Charger\Volkite_Auto_AI_Short_Burst.hpp"
    #include "..\HPP_FireModes\Volkite_Charger\Volkite_Auto_AI_Long_Burst.hpp"
    #include "..\HPP_FireModes\Volkite_Charger\Volkite_Auto.hpp"
  };
  class AoD_Volkite_Caliver: AoD_Volkite_Charger {
    displayName = "[SM] Volkite, Caliver Pattern (AOD2-LBP)";
    modes[] = { "Volkite_No_Fire", "Volkite_Single_Slow", "Volkite_Single_Rapid", "Volkite_Auto_AI_Short_Burst", "Volkite_Auto_AI_Long_Burst", "Volkite_Auto"};
    #include "..\HPP_FireModes\Volkite_Caliver\Volkite_No_Fire.hpp"
    #include "..\HPP_FireModes\Volkite_Caliver\Volkite_Single_Slow.hpp"
    #include "..\HPP_FireModes\Volkite_Caliver\Volkite_Single_Rapid.hpp"
    #include "..\HPP_FireModes\Volkite_Caliver\Volkite_Auto_AI_Short_Burst.hpp"
    #include "..\HPP_FireModes\Volkite_Caliver\Volkite_Auto_AI_Long_Burst.hpp"
    #include "..\HPP_FireModes\Volkite_Caliver\Volkite_Auto.hpp"
  };
  class AoD_LasCannon_Basic: AoD_Tigrus_Boltgun_Basic {
    displayName = "[SM] Lascannon, Ryza Pattern (AOD2-LBP)";
    modes[] = {"Lascannon_No_Fire","Lascannon_Single_Rapid"};
    #include "..\HPP_FireModes\Lascannon\Lascannon_No_Fire.hpp"
    #include "..\HPP_FireModes\Lascannon\Lascannon_Single_Rapid.hpp"
  };
  class AoD_LasCannon_NoShoulder: AoD_LasCannon_Basic {
    displayName = "[SM] Lascannon, Ryza Pattern (AOD2-LBP)";
    modes[] = {"Lascannon_No_Fire","Lascannon_Single_Rapid"};
    #include "..\HPP_FireModes\Lascannon\Lascannon_No_Fire.hpp"
    #include "..\HPP_FireModes\Lascannon\Lascannon_Single_Rapid.hpp"
  };
  class AoD_Autocannon_Basic: AoD_Tigrus_Boltgun_Basic {
    displayName = "[SM] Autocannon, Kalibrax Pattern (AOD2-LBP)";
    modes[] = {"Autocannon_No_Fire","Autocannon_Auto_AI_Short_Burst","Autocannon_Auto_AI_Long_Burst","Autocannon_Auto"};
    #include "..\HPP_FireModes\Autocannon\Autocannon_No_Fire.hpp"
    #include "..\HPP_FireModes\Autocannon\Autocannon_Auto_AI_Short_Burst.hpp"
    #include "..\HPP_FireModes\Autocannon\Autocannon_Auto_AI_Long_Burst.hpp"
    #include "..\HPP_FireModes\Autocannon\Autocannon_Auto.hpp"
  };
  class AoD_Plasma_Cannon_Basic: AoD_Meltagun_Basic {
    displayName = "[SM] Plasma Cannon, Dosiel Pattern (AOD2-LBP)";
    modes[] = {"Plasma_Cannon_No_Fire","Plasma_Cannon_Single_Rapid"};
    #include "..\HPP_FireModes\Plasma_Cannon\Plasma_Cannon_No_Fire.hpp"
    #include "..\HPP_FireModes\Plasma_Cannon\Plasma_Cannon_Single_Rapid.hpp"
  };
  class AoD_Plasma_Cannon_Under: AoD_Plasma_Cannon_Basic {
    displayName = "[SM] Plasma Cannon, Mars Pattern (AOD2-LBP)";
    modes[] = {"Plasma_Cannon_No_Fire","Plasma_Cannon_Single_Rapid"};
    #include "..\HPP_FireModes\Plasma_Cannon\Plasma_Cannon_No_Fire.hpp"
    #include "..\HPP_FireModes\Plasma_Cannon\Plasma_Cannon_Single_Rapid.hpp"
  };
  class AoD_Multi_Melta_Basic: AoD_Meltagun_Basic {
    displayName = "[SM] Melta Multi, Mediant Pattern (AOD2-LBP)";
    modes[] = {"Multi_Melta_No_Fire","Multi_Melta_Single"};
    #include "..\HPP_FireModes\Multi_Melta\Multi_Melta_No_Fire.hpp"
    #include "..\HPP_FireModes\Multi_Melta\Multi_Melta_Single.hpp"
  };
  class AoD_Rotor_Cannon_Basic: AoD_Tigrus_Boltgun_Basic {
    displayName = "[SM] Rotor Cannon, Proteus Pattern (AOD2-LBP)";
    modes[] = {"Rotor_Cannon_No_Fire","Rotor_Cannon_Auto_AI_Short_Burst","Rotor_Cannon_Auto_AI_Long_Burst","Rotor_Cannon_Auto"};
    #include "..\HPP_FireModes\Rotor_Cannon\Rotor_Cannon_No_Fire.hpp"
    #include "..\HPP_FireModes\Rotor_Cannon\Rotor_Cannon_Auto_AI_Short_Burst.hpp"
    #include "..\HPP_FireModes\Rotor_Cannon\Rotor_Cannon_Auto_AI_Long_Burst.hpp"
    #include "..\HPP_FireModes\Rotor_Cannon\Rotor_Cannon_Auto.hpp"
  };
  // class AoD_Volkite_Culverin: AoD_Volkite_Charger {
  //   displayName = "[SM] Volkite, Culverin Pattern (AOD2-LBP)";
  // };
  class AoD_Missile_Launcher_Under: AoD_Tigrus_Boltgun_Basic {
    displayName = "[SM] Missile Launcher, Proteus-II Pattern (AOD2-LBP)";
    modes[] = {"Proteus_Missile_No_Fire", "Proteus_Missile_Single_Slow", "Proteus_Missile_Single_Slow_Extended", "Proteus_Missile_Single_Rapid"};
    #include "..\HPP_FireModes\Proteus_Missile_Launcher\Proteus_Missile_No_Fire.hpp"
    #include "..\HPP_FireModes\Proteus_Missile_Launcher\Proteus_Missile_Single_Slow.hpp"
    #include "..\HPP_FireModes\Proteus_Missile_Launcher\Proteus_Missile_Single_Slow_Extended.hpp"
    #include "..\HPP_FireModes\Proteus_Missile_Launcher\Proteus_Missile_Single_Rapid.hpp"
  };
  class AoD_Missile_Launcher_Shoulder: AoD_Tigrus_Boltgun_Basic {
    displayName = "[SM] Missile Launcher, Proteus-II Pattern (AOD2-LBP)";
    modes[] = {"Proteus_Missile_No_Fire", "Proteus_Missile_Single_Slow", "Proteus_Missile_Single_Slow_Extended", "Proteus_Missile_Single_Rapid"};
    #include "..\HPP_FireModes\Proteus_Missile_Launcher\Proteus_Missile_No_Fire.hpp"
    #include "..\HPP_FireModes\Proteus_Missile_Launcher\Proteus_Missile_Single_Slow.hpp"
    #include "..\HPP_FireModes\Proteus_Missile_Launcher\Proteus_Missile_Single_Slow_Extended.hpp"
    #include "..\HPP_FireModes\Proteus_Missile_Launcher\Proteus_Missile_Single_Rapid.hpp"
  };
  class AoD_Tigrus_Seek_Plasma: AoD_Tigrus_Boltgun_Basic {
    displayName = "[SM] Bolter Combi, Tigrus Pattern (AOD2-LBP)";
    modes[] = { "Bolter_No_Fire", "Bolter_Single_Slow", "Bolter_Single_Rapid", "Bolter_Auto_AI_Short_Burst", "Bolter_Auto_AI_Long_Burst", "Bolter_Auto"};
    #include "..\HPP_FireModes\Bolter_Tigrus\Bolter_No_Fire.hpp"
    #include "..\HPP_FireModes\Bolter_Tigrus\Bolter_Single_Slow.hpp"
    #include "..\HPP_FireModes\Bolter_Tigrus\Bolter_Single_Rapid.hpp"
    #include "..\HPP_FireModes\Bolter_Tigrus\Bolter_Auto_AI_Short_Burst.hpp"
    #include "..\HPP_FireModes\Bolter_Tigrus\Bolter_Auto_AI_Long_Burst.hpp"
    #include "..\HPP_FireModes\Bolter_Tigrus\Bolter_Auto.hpp"
    class AoD_Tigrus_Seek_Plasma_Under: AoD_Ryza_Plasma_Basic {
      modes[] = {"Plasma_Gun_No_Fire","Plasma_Gun_Single_Rapid"};
      #include "..\HPP_FireModes\Plasma_Gun\Plasma_Gun_No_Fire.hpp"
      #include "..\HPP_FireModes\Plasma_Gun\Plasma_Gun_Single_Rapid.hpp"
    };
  };
  class AoD_Tigrus_Seek_Melta: AoD_Tigrus_Boltgun_Basic {
    displayName = "[SM] Bolter Combi, Tigrus Pattern (AOD2-LBP)";
    modes[] = { "Bolter_No_Fire", "Bolter_Single_Slow", "Bolter_Single_Rapid", "Bolter_Auto_AI_Short_Burst", "Bolter_Auto_AI_Long_Burst", "Bolter_Auto"};
    #include "..\HPP_FireModes\Bolter_Tigrus\Bolter_No_Fire.hpp"
    #include "..\HPP_FireModes\Bolter_Tigrus\Bolter_Single_Slow.hpp"
    #include "..\HPP_FireModes\Bolter_Tigrus\Bolter_Single_Rapid.hpp"
    #include "..\HPP_FireModes\Bolter_Tigrus\Bolter_Auto_AI_Short_Burst.hpp"
    #include "..\HPP_FireModes\Bolter_Tigrus\Bolter_Auto_AI_Long_Burst.hpp"
    #include "..\HPP_FireModes\Bolter_Tigrus\Bolter_Auto.hpp"
    class AoD_Tigrus_Seek_Melta_Under: AoD_Meltagun_Basic {
      modes[] = {"Meltagun_No_Fire","Meltagun_Single"};
      #include "..\HPP_FireModes\Meltagun\Meltagun_No_Fire.hpp"
      #include "..\HPP_FireModes\Meltagun\Meltagun_Single.hpp"
    };
  };
  class AoD_Tigrus_Shield_Basic: AoD_Tigrus_Boltgun_Basic {
    displayName = "[SM] Bolter, Tigrus Pattern (AOD2-LBP)";
    modes[] = {"Bolter_No_Fire","Bolter_Auto_AI_Short_Burst","Bolter_Auto_AI_Long_Burst","Bolter_Auto"};
    #include "..\HPP_FireModes\Bolter_Tigrus_Shield\Bolter_No_Fire.hpp"
    #include "..\HPP_FireModes\Bolter_Tigrus_Shield\Bolter_Auto_AI_Short_Burst.hpp"
    #include "..\HPP_FireModes\Bolter_Tigrus_Shield\Bolter_Auto_AI_Long_Burst.hpp"
    #include "..\HPP_FireModes\Bolter_Tigrus_Shield\Bolter_Auto.hpp"
  };
  class AoD_Phobos_Shield_Basic: AoD_Phobos_Boltgun_Basic {
    displayName = "[SM] Bolter, Phobos Pattern (AOD2-LBP)";
    modes[] = {"Bolter_No_Fire","Bolter_Auto_AI_Short_Burst","Bolter_Auto_AI_Long_Burst","Bolter_Auto"};
    #include "..\HPP_FireModes\Bolter_Phobos_Shield\Bolter_No_Fire.hpp"
    #include "..\HPP_FireModes\Bolter_Phobos_Shield\Bolter_Auto_AI_Short_Burst.hpp"
    #include "..\HPP_FireModes\Bolter_Phobos_Shield\Bolter_Auto_AI_Long_Burst.hpp"
    #include "..\HPP_FireModes\Bolter_Phobos_Shield\Bolter_Auto.hpp"
  };
  class AoD_Lascutter_Shield_Basic: AoD_Lascutter_Basic {
    displayName = "[SM] Lascutter, Ultima Pattern (AOD2-LBP)";
    modes[] = {"Lascutter_No_Fire","Lascutter_Single"};
    #include "..\HPP_FireModes\Lascutter\Lascutter_No_Fire.hpp"
    #include "..\HPP_FireModes\Lascutter\Lascutter_Single.hpp"
  };
};