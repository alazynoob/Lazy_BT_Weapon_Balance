class STEVE_PhobosBoltgun_1
{
    options[] = { "Style","Shield","Color" }; // Always computed, do not edit
    label = "";
    class Style {
        label = "Style";
        alwaysSelectable = 1;
        values[] = {"Old", "New"};
    };
    class Shield {
        label = "Shield";
        alwaysSelectable = 1;
        values[] = {"Yes", "No"};
    };
    class Color
    {
        label = "Color";
        alwaysSelectable = 0;
        values[] = { "Black", "Red", "Stripes", "White" }; // Always computed, do not edit
    };
};