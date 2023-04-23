
class RscActiveText {
    font = "Monocraft";
};
class RscText {
    font = "Monocraft";
    sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)"; // default if * 1
};
class RscButton {
    font = "Monocraft";
};
class RscShortcutButton {
    font = "Monocraft";
    fontSecondary = "Monocraft";
};
class RscButtonMenu: RscShortcutButton {
    class Attributes {
        font = "Monocraft";
    };
};
class RscEdit {
    font = "Monocraft";
};
class RscTextCheckBox {
    font = "Monocraft";
    sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.6)"; // default is 0.8
};
class RscStructuredText {
    class Attributes {
        font = "Monocraft";
    };
};
class RscTitle: RscText {
    font = "Monocraft";
};
class RscListBox {
    font = "Monocraft";
};
class RscListNBox {
    font = "Monocraft";
};
class RscTitlesText {
    fontBasic = "Monocraft";
    fontDown = "Monocraft";
};

class RscToolbox {
    font = "Monocraft";
};
class RscToolboxButton: RscToolbox {
    font = "Monocraft";
};
class RscTree {
    font = "Monocraft";
};
// TODO RscHTML

class RscControlsGroupNoScrollbars;
class RscMainMenuSpotlight: RscControlsGroupNoScrollbars {
    class Controls {
        class Text: RscStructuredText {
            class Attributes {
                font = "Monocraft";
            };
        };
    };
};
