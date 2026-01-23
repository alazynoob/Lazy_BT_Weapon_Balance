class STEVE_LascutShield_1
{
    options[] = { "Style","Shield" }; // Always computed, do not edit
    label = "";
    class Style {
        label = "Style";
        alwaysSelectable = 1;
        values[] = {"Old", "New"};
    };
    class Shield
    {
        label = "Shield";
        alwaysSelectable = 0;
        values[] = { "Yes", "No" }; // Always computed, do not edit
    };
};