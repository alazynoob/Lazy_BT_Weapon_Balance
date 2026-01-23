class TIOW_GodwynBoltgun
{
    options[] = {"Faction", "Chaos_Camo", "Imperium_Camo"}; // Always computed, do not edit
    label = "";
    class Chaos_Camo
    {
        label = "Chaos Camo";
        alwaysSelectable = 0;
        values[] = { "Black", "Gray", "Iron", "Red", "Slaanesh" }; // Always computed, do not edit
    };
    class Faction
    {
        label = "Faction";
        alwaysSelectable = 1;
        values[] = { "Chaos", "Imperium" }; // Always computed, do not edit
    };
    class Imperium_Camo
    {
        label = "Imperium Camo";
        alwaysSelectable = 0;
        values[] = {"B Aquila", "Black", "Checker", "Hazard", "R Aquila", "Red", "White" }; // Always computed, do not edit
    };
};
