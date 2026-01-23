class AgripinaaAutoIG1
{
    options[] = { "Faction","Style","Color" }; // Always computed, do not edit
    label = "";
    class Faction {
        label = "Faction";
        alwaysSelectable = 1;
        values[] = {"Imperial", "Chaos"};
    };
    class Style {
        label = "Style";
        alwaysSelectable = 1;
        values[] = { "Standard", "GL" }; // Always computed, do not edit
    };
    class Color
    {
        label = "Color";
        alwaysSelectable = 1;
        values[] = { "Black", "Green", "Special" }; // Always computed, do not edit
    };
};
