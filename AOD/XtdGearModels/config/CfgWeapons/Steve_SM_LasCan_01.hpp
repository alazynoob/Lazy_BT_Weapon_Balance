class Steve_SM_LasCan_01
{
    options[] = { "Style","Pos","Color" }; // Always computed, do not edit
    label = "";
    class Style {
        label = "Style";
        alwaysSelectable = 1;
        values[] = {"Old", "New"};
    };
    class Pos {
        label = "Position";
        alwaysSelectable = 1;
        values[] = {"Shoulder", "Hip"};
    };
    class Color
    {
        label = "Color";
        alwaysSelectable = 0;
        values[] = { "Black", "Red", "Stripes", "White" }; // Always computed, do not edit
    };
};