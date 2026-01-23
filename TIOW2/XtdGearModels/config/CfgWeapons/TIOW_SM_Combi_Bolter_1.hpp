class TIOW_SM_Combi_Bolter_1
{
    options[] = { "Combi", "Color" }; // Always computed, do not edit
    label = "";
    class Combi {
        label = "Combi";
        alwaysSelectable = 1;
        values[] = { "Bolter" };
    };
    class Color
    {
        label = "Color";
        alwaysSelectable = 0;
        values[] = { "Black", "Red", "White" }; // Always computed, do not edit
    };
};
