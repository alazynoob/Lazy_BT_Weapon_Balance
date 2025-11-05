class cfgMagazines {
  class CA_Magazine;

  //Tigrus Boltgun Mags
  class AoD_Tigrus_Bolt_Mag: CA_Magazine
  {
    displayName = "[BTBP] Tigrus Boltgun Magazine 50 Rnd.";
    #include "..\HPP_Magazine\Tigrus_Magazine.hpp"
    ammo = "BT_Lazy_Tigrus_Bolt_Round_Base";    
  };
  class AoD_Tigrus_DF_Mag: AoD_Tigrus_Bolt_Mag
  {
    displayName = "[BTBP] Tigrus Boltgun Dragonfire 50 Rnd.";
    #include "..\HPP_Magazine\Tigrus_Magazine.hpp"
    ammo = "BT_Lazy_Tigrus_Bolt_Round_Dragonfire";    
  };
  class AoD_Tigrus_KR_Mag: AoD_Tigrus_Bolt_Mag
  {
    displayName = "[BTBP] Tigrus Boltgun Kraken 50 Rnd.";
    #include "..\HPP_Magazine\Tigrus_Magazine.hpp"
    ammo = "BT_Lazy_Tigrus_Bolt_Round_Kraken";    
  };

  //Tigrus Exitus Boltgun Mags
  class AoD_Exitus_Bolt_Mag: AoD_Tigrus_Bolt_Mag
  {
    displayName = "[BTBP] Tigrus Exitus Magazine 20 Rnd.";
    #include "..\HPP_Magazine\Tigrus_Exitus_Magazine.hpp"
    ammo = "BT_Lazy_Tigrus_Exitus_Bolt_Round_Base"; 
  };
  class AoD_Exitus_DF_Mag: AoD_Exitus_Bolt_Mag
  {
    displayName = "[BTBP] Tigrus Exitus Dragonfire 20 Rnd.";
    #include "..\HPP_Magazine\Tigrus_Exitus_Magazine.hpp"
    ammo = "BT_Lazy_Tigrus_Exitus_Bolt_Round_Dragonfire";   
  };
  class AoD_Exitus_KR_Mag: AoD_Exitus_Bolt_Mag
  {
    displayName = "[BTBP] Tigrus Exitus Kraken 20 Rnd.";
    #include "..\HPP_Magazine\Tigrus_Exitus_Magazine.hpp"
    ammo = "BT_Lazy_Tigrus_Exitus_Bolt_Round_Kraken"; 
  };


  //Tigrus Combi Boltgun Mags
  class AoD_Tcombi_Bolt_Mag: AoD_Tigrus_Bolt_Mag
  {
    displayName = "[BTBP] Tigrus Combi-Bolter Magazine 100 Rnd.";
    #include "..\HPP_Magazine\Tigrus_Combi_Magazine.hpp"
    ammo = "BT_Lazy_Tigrus_Bolt_Round_Base";  
  };
  class AoD_Tcombi_DF_Mag: AoD_Tcombi_Bolt_Mag
  {
    displayName = "[BTBP] Tigrus Combi-Bolter Dragonfire 100 Rnd.";
    #include "..\HPP_Magazine\Tigrus_Combi_Magazine.hpp"
    ammo = "BT_Lazy_Tigrus_Bolt_Round_Dragonfire";  
  };
  class AoD_Tcombi_KR_Mag: AoD_Tcombi_Bolt_Mag
  {
    displayName = "[BTBP] Tigrus Combi-Bolter Kraken 100 Rnd.";
    #include "..\HPP_Magazine\Tigrus_Combi_Magazine.hpp"
    ammo = "BT_Lazy_Tigrus_Bolt_Round_Kraken";  
  };

  //Phobos Boltgun Mags
  class AoD_Phobos_Bolt_Mag: AoD_Tigrus_Bolt_Mag
  {
    displayName = "[BTBP] Phobos Boltgun Magazine 30 Rnd.";
    #include "..\HPP_Magazine\Phobos_Magazine.hpp"
    ammo = "BT_Lazy_Phobos_Bolt_Round_Base";  
  };
  class AoD_Phobos_DF_Mag: AoD_Phobos_Bolt_Mag
  {
    displayName = "[BTBP] Phobos Boltgun Dragonfire 30 Rnd.";
    #include "..\HPP_Magazine\Phobos_Magazine.hpp"
    ammo = "BT_Lazy_Phobos_Bolt_Round_Dragonfire";  
  };
  class AoD_Phobos_KR_Mag: AoD_Phobos_Bolt_Mag
  {
    displayName = "[BTBP] Phobos Boltgun Kraken 30 Rnd.";
    #include "..\HPP_Magazine\Phobos_Magazine.hpp"
    ammo = "BT_Lazy_Phobos_Bolt_Round_Kraken";  
  };

  //Phobos Atrox Mags
  class AoD_Atrox_Bolt_Mag: AoD_Tigrus_Bolt_Mag
  {
    displayName = "[BTBP] Phobos Atrox Magazine 15 Rnd.";
    #include "..\HPP_Magazine\Phobos_Atrox_Magazine.hpp"
    ammo = "BT_Lazy_Phobos_Atrox_Bolt_Round_Base";  
  };
  class AoD_Atrox_DF_Mag: AoD_Atrox_Bolt_Mag
  {
    displayName = "[BTBP] Phobos Atrox Dragonfire 15 Rnd.";
    #include "..\HPP_Magazine\Phobos_Atrox_Magazine.hpp"
    ammo = "BT_Lazy_Phobos_Atrox_Bolt_Round_Dragonfire";  
  };
  class AoD_Atrox_KR_Mag: AoD_Atrox_Bolt_Mag
  {
    displayName = "[BTBP] Phobos Atrox Kraken 15 Rnd.";
    #include "..\HPP_Magazine\Phobos_Atrox_Magazine.hpp"
    ammo = "BT_Lazy_Phobos_Atrox_Bolt_Round_Kraken";  
  };

  //Phobos Combi Bolter
  class AoD_Pcombi_Bolt_Mag: AoD_Tigrus_Bolt_Mag
  {
    displayName = "[BTBP] Phobos Combi-Bolter Magazine 60 Rnd.";
    #include "..\HPP_Magazine\Phobos_Combi_Magazine.hpp"
    ammo = "BT_Lazy_Phobos_Bolt_Round_Base";  
  };
  class AoD_Pcombi_DF_Mag: AoD_Pcombi_Bolt_Mag
  {
    displayName = "[BTBP] Phobos Combi-Bolter Dragonfire 60 Rnd.";
    #include "..\HPP_Magazine\Phobos_Combi_Magazine.hpp"
    ammo = "BT_Lazy_Phobos_Bolt_Round_Dragonfire";  
  };
  class AoD_Pcombi_KR_Mag: AoD_Pcombi_Bolt_Mag
  {
    displayName = "[BTBP] Phobos Combi-Bolter Kraken 60 Rnd.";
    #include "..\HPP_Magazine\Phobos_Combi_Magazine.hpp"
    ammo = "BT_Lazy_Phobos_Bolt_Round_Kraken";  
  };

  //Umbra Boltgun Mags
  class AoD_Umbra_Bolt_Mag: AoD_Tigrus_Bolt_Mag
  {
    displayName = "[BTBP] Umbra Magazine 75 Rnd.";
    #include "..\HPP_Magazine\Umbra_Magazine.hpp"
    ammo = "BT_Lazy_Umbra_Bolt_Round_Base"; 
  };
  class AoD_Umbra_DF_Bolt_Mag: AoD_Umbra_Bolt_Mag
  {
    displayName = "[BTBP] Umbra Dragonfire 75 Rnd.";
    #include "..\HPP_Magazine\Umbra_Magazine.hpp"
    ammo = "BT_Lazy_Umbra_Bolt_Round_Dragonfire"; 
  };
  class AoD_Umbra_KR_Bolt_Mag: AoD_Umbra_Bolt_Mag
  {
    displayName = "[BTBP] Umbra Kraken 75 Rnd.";
    #include "..\HPP_Magazine\Umbra_Magazine.hpp"
    ammo = "BT_Lazy_Umbra_Bolt_Round_Kraken"; 
  };


  //Heavy Bolter Mags
  class AoD_Heavy_Boltgun_Mag: AoD_Tigrus_Bolt_Mag
  {
    displayName = "[BTBP] Heavy Bolter Magazine 85 rnd Rnd.";
    #include "..\HPP_Magazine\Heavy_Boltgun_Magazine.hpp"
    ammo = "BT_Lazy_Heavy_Bolt_Round_Base"; 
  };
  class AoD_Heavy_Boltgun_DF_Mag: AoD_Heavy_Boltgun_Mag
  {
    displayName = "[BTBP] Heavy Bolter Dragonfire 85 Rnd.";
    #include "..\HPP_Magazine\Heavy_Boltgun_Magazine.hpp"
    ammo = "BT_Lazy_Heavy_Bolt_Round_Dragonfire"; 
  };
  class AoD_Heavy_Boltgun_KR_Mag: AoD_Heavy_Boltgun_Mag
  {
    displayName = "[BTBP] Heavy Bolter Kraken 85 Rnd.";
    #include "..\HPP_Magazine\Heavy_Boltgun_Magazine.hpp"
    ammo = "BT_Lazy_Heavy_Bolt_Round_Kraken"; 
  };


  //Melta mags
  class AoD_Meltagun_Mag: CA_Magazine
  {
    displayName = "[BTBP] Melta Coolant 10mL.";
    #include "..\HPP_Magazine\Meltagun_Magazine.hpp"
    ammo = "BT_Lazy_Meltagun_Round";  
  };

  //Multi Melta
  class AoD_Multi_Melta_Mag: AoD_Meltagun_Mag
  {
    displayName = "[BTBP] Multi-melta Coolant 20mL.";
    #include "..\HPP_Magazine\Multi_Melta_Magazine.hpp"
    ammo = "BT_Lazy_Multi_Melta_Round"; 
  };

  //Tigrus Underbarrel Melta
  class AoD_Tigrus_Seek_Melta_Under_Mag: AoD_Meltagun_Mag
  {
    displayName = "[BTBP] Melta Coolant 3mL.";
    #include "..\HPP_Magazine\Combi_Meltagun_Magazine.hpp"
    ammo = "BT_Lazy_Meltagun_Round";  
  };

  //Lascutter Mags
  class AoD_Lascutter_Mag: AoD_Meltagun_Mag
  {
    displayName = "[BTBP] Las Coolant 10mL.";
    #include "..\HPP_Magazine\Lascutter_Magazine.hpp"
    ammo = "BT_Lazy_Lascutter_Round"; 
  };

  //Plasma Gun Mags
  class AoD_Ryza_Plasma_Mag: CA_Magazine
  {
    displayName = "[BTBP] Plasma Stabiliser 30mL.";
    #include "..\HPP_Magazine\Plasma_Magazine.hpp"
    ammo = "BT_Lazy_Ryza_Plasma_Round"; 
  };
  class AoD_Tigrus_Seek_Plasma_Under_Mag: AoD_Ryza_Plasma_Mag
  {
    displayName = "[BTBP] Plasma Stabiliser 10mL.";
    #include "..\HPP_Magazine\Combi_Plasma_Magazine.hpp"
    ammo = "BT_Lazy_Ryza_Plasma_Round"; 
  };
  class AoD_Ryza_OC_Mag: AoD_Ryza_Plasma_Mag
  {
    displayName = "[BTBP] Plasma Overcharger 6mL.";
    #include "..\HPP_Magazine\Plasma_Overcharge_Magazine.hpp"
    ammo = "BT_Lazy_Ryza_Plasma_Overhcarge_Round";  
  };
  class AoD_Tigrus_Seek_Plasma_Under_OC_Mag: AoD_Ryza_OC_Mag
  {
    displayName = "[BTBP] Plasma Overcharger 1mL.";
    #include "..\HPP_Magazine\Combi_Plasma_Overcharge_Magazine.hpp"
    ammo = "BT_Lazy_Ryza_Plasma_Overhcarge_Round";  
  };

  //Volkite Mags
  class AoD_Volkite_Charger_Mag: CA_Magazine
  {
    displayName = "[BTBP] Charger Pack 30V.";
    #include "..\HPP_Magazine\Volkite_Charger_Magazine.hpp"
    ammo = "BT_Lazy_Volkite_Charger_Round"; 
  };
  class AoD_Volkite_Caliver_Mag: AoD_Volkite_Charger_Mag
  {
    displayName = "[BTBP] Caliver Pack 60V.";
    #include "..\HPP_Magazine\Volkite_Caliver_Magazine.hpp"
    ammo = "BT_Lazy_Volkite_Caliver_Round"; 
  };
  class AoD_Volkite_Culverin_Mag: AoD_Volkite_Charger_Mag
  {
    displayName = "[BTBP] Culverin Pack 30V.";
    #include "..\HPP_Magazine\Volkite_Culverin_Magazine.hpp"
    ammo = "BT_Lazy_Volkite_Culverin_Round";  
  };


  //Lascannon
  class AoD_LasCannon_Mag: AoD_Volkite_Charger_Mag
  {
    displayName = "[BTBP] Lascannon Pack 30V.";
    #include "..\HPP_Magazine\Lascannon_Magazine.hpp"
    ammo = "BT_Lazy_Lascannon_Round"; 
  };

  //Autocannon HE Mag
  class AoD_Autocannon_Mag: CA_Magazine
  {
    displayName = "[BTBP] Kalibrax Autocannon 16 Rnd.";
    #include "..\HPP_Magazine\Autocannon_Magazine.hpp"
    ammo = "BT_Lazy_Autocannon_Round_HE"; 
  };

  //Plasma Cannon
  class AoD_Plasma_Cannon_Mag: AoD_Ryza_OC_Mag
  {
    displayName = "[BTBP] Plasma Cannon Stabiliser 15mL.";
    #include "..\HPP_Magazine\Plasma_Cannon_Magazine.hpp"
    ammo = "BT_Lazy_Plasma_Cannon_Round"; 
  };

  //Rotor Cannon Mags
  class AoD_Rotor_Cannon_Mag: AoD_Tigrus_Bolt_Mag
  {
    displayName = "[BTBP] Rotor Cannon Drum 500 Rnd.";
    #include "..\HPP_Magazine\Rotor_Cannon_Magazine.hpp"
    ammo = "BT_Lazy_Rotor_Cannon_Round";  
  };

  //Missile Launcher
  class AoD_Missile_Launcher_KR_Mag: AoD_Autocannon_Mag
  {
    displayName = "[BTBP] Proteus Krak Missile 8 Rnd.";
    #include "..\HPP_Magazine\Missile Launcher_Mag.hpp"
    ammo = "BT_Lazy_Missile_Launcher_Krak_Round"; 
  };
  class AoD_Missile_Launcher_FRG_Mag: AoD_Autocannon_Mag
  {
    displayName = "[BTBP] Proteus Frag Missile 8 Rnd.";
    #include "..\HPP_Magazine\Missile Launcher_Mag.hpp"
    ammo = "BT_Lazy_Missile_Launcher_Frag_Round"; 
  };
};