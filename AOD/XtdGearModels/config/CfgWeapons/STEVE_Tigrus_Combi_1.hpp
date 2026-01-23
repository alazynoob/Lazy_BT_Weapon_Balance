class STEVE_Tigrus_Combi_1
{
    options[] = { "Style","Combi","Color"}; // Always computed, do not edit
    label = "";
    class Style {
        label = "Style";
        alwaysSelectable = 1;
        values[] = {"Old", "New"};
    };
    class Combi {
        label = "Combi";
        alwaysSelectable = 0;
        values[] = {"Bolter", "Plasma", "Flamer", "Melta", "Seeker"};
    };
    class Color
    {
        label = "Color";
        alwaysSelectable = 0;
        values[] = { "Black", "Red", "Stripes", "White" }; // Always computed, do not edit
    };
};
