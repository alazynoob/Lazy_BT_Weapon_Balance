class TIOW_SoB_Bolter_1
{
    options[] = { "Color", "Faction" }; // Always computed, do not edit
    label = "";
    class Color
    {
        label = "Color";
        alwaysSelectable = 1;
        values[] = { "Black", "Red", "White" }; // Always computed, do not edit
    };
    class Faction
    {
        alwaysSelectable = 1;
        values[] = { "Guard", "SoB" }; // Always computed, do not edit
    };
};
