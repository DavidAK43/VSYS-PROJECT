#define CT_STATIC           0
#define CT_BUTTON           1
#define CT_STRUCTURED_TEXT  13
#define CT_LINEBREAK        98
#define CT_LISTBOX          5
#define CT_Slider           43
#define CT_ACTIVETEXT		11
#define CT_PROGRESSBAR 8

#define LB_TEXTURES       0x10
#define SL_HORZ           0x400 
#define SL_VERT           0
#define ST_LEFT           0x00
#define ST_RIGHT          0x01
#define ST_CENTER         0x02
#define ST_DOWN           0x04
#define ST_UP             0x08
#define ST_PICTURE        0x30
#define ST_SINGLE         0
#define ST_KEEPASPECT     0x30 + 0x800

#define Color75 "(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",0.75
#define Color50 "(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",0.50
#define Color25 "(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",0.25

class rscProgress 
{ 
	type = CT_PROGRESSBAR; 
	style = ST_SINGLE; 
	colorFrame[] = {color75}; 
	colorBar[] = {color50};
	texture = "#(argb,8,8,3)color(1,1,1,1)";
	shadow = 0;
	x = 0;
    y = 0;
    w = 0;
    h = 0;
}; 

class rscActiveText 
{
    idc = -1;
	type = CT_ACTIVETEXT;
	style = ST_KEEPASPECT ;
	x = 0;
	y = 0;
	h = 0.035;
	w = 0.035;
	font = "PuristaMedium";
	shadow = 2;
	text = "";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 35) * 1)";
	color[] = {1,1,1,1};
	colorText[] = {1,1,1,1};
	colorActive[] = {Color75};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1};
    soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1};
    soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
    soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};
};

class IGUIBack
{
     access = 0;
     background = 1;
     type = CT_STATIC;
     style = 0;
     idc = -1;
     colorBackground[] = {0,0,0,0.5};
     colorShadow[] = {0,0,0,0.5};
     colorText[] = {1,1,1,0.5};
     text = "";
     fixedWidth = 0;
     x = 0;
     y = 0;
     h = 0;
     w = 0;
     shadow = 1;
     font = "puristaMedium";
     SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
     moving = 1;
};

class RscButton
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 1;
	text = "";
	colorText[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.25};
	colorBackground[] = {Color75};
	colorBackgroundDisabled[] = {1,0,0,0.5};
	colorBackgroundActive[] = 
	{
		"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.49])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.55])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.25])",
		"(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.75])"
	};
	colorFocused[] = 
	{
		"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",
		"(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.85])"
	};
	colorShadow[] = {0,0,0,0};
	colorBorder[] = {0,0,0,0};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1};
	soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};
	style = 2;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	shadow = 2;
	font = "PuristaMedium";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85)";
	offsetX = 0;
	offsetY = 0;
	offsetPressedX = 0;
	offsetPressedY = 0;
	borderSize = 0;
};


class RscText
{

	type = CT_STATIC;
	style = ST_CENTER;
	moving = 1;
	idc = -1;
	deletable = 0;
	fade = 0;
	access = 0;
	text = "";
	fixedWidth = 0;
	font = "PuristaMedium";
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85)";
	linespacing = 1;
	
	x = 0;
	y = 0;
	h = 0;
	w = 0;
	
	shadow = 1;
	colorBackground[] = {1,1,1,0};
	colorText[] = {1,1,1,1};
	colorShadow[] = {0,0,0,0.5};
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
};

class RscListBox
{
	 type = CT_LISTBOX;
     style = LB_TEXTURES;
	 idc=-1;
	 moving = 1;
	 font = "puristaMedium";
	 sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.675)";
	 rowHeight=0.04;
     lineSpacing = 1;
	 idcRight = -1;
	 idcLeft = -1;
	 drawSideArrows = 1;
     columns[] = {0.937500,0.968750,1.000000,0.7};
     colorText[] = {1,1,1,0.7};
	 colorScrollBar[] = {Color75};
	 colorSelect[] = {0.937500,0.968750,1.000000,0.7};
	 colorSelect2[] = {0.937500,0.968750,1.000000,0.7};
	 colorSelectBackground[] = {Color75};
	 colorSelectBackground2[] = {Color75};
	 colorBackground[] = {Color50};
	 maxHistoryDelay = 1.0;
	 soundSelect[] = {"",0.1,1};
	 period = 1;
	 autoScrollSpeed = -1;
	 autoScrollDelay = 5;
	 autoScrollRewind = 0;
	 arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
	 arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
	 shadow = 0;
     colorDisabled[] = {1, 1, 1, 0.6};
        
       
	class listScrollBar
	{
		color[] = {Color75};
		colorActive[] = {Color75};
	    colorDisabled[] = {1, 1, 1, 1};
		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
        arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
        border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
        thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
        soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1};
		shadow = 1;
		width = 0.021;
	};	
};

class RscCheckBox
{
	idc = -1;
	type = 77;
	style = 0;
	checked = 0;
	x = "0.375 * safezoneW + safezoneX";
	y = "0.36 * safezoneH + safezoneY";
	w = "0.025 * safezoneW";
	h = "0.04 * safezoneH";
	color[] = 
	{
		1,
		1,
		1,
		0.7
	};
	colorFocused[] = 
	{
		1,
		1,
		1,
		1
	};
	colorHover[] = 
	{
		1,
		1,
		1,
		1
	};
	colorPressed[] = 
	{
		1,
		1,
		1,
		1
	};
	colorDisabled[] = 
	{
		1,
		1,
		1,
		0.2
	};
	colorBackground[] = 
	{
		0,
		0,
		0,
		0
	};
	colorBackgroundFocused[] = 
	{
		0,
		0,
		0,
		0
	};
	colorBackgroundHover[] = 
	{
		0,
		0,
		0,
		0
	};
	colorBackgroundPressed[] = 
	{
		0,
		0,
		0,
		0
	};
	colorBackgroundDisabled[] = 
	{
		0,
		0,
		0,
		0
	};
	textureChecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureUnchecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureFocusedChecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureFocusedUnchecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureHoverChecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureHoverUnchecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	texturePressedChecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	texturePressedUnchecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureDisabledChecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureDisabledUnchecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	tooltipColorText[] = 
	{
		1,
		1,
		1,
		1
	};
	tooltipColorBox[] = 
	{
		1,
		1,
		1,
		1
	};
	tooltipColorShade[] = 
	{
		0,
		0,
		0,
		0.65
	};
	soundEnter[] = 
	{
		"",
		0.1,
		1
	};
	soundPush[] = 
	{
		"",
		0.1,
		1
	};
	soundClick[] = 
	{
		"",
		0.1,
		1
	};
	soundEscape[] = 
	{
		"",
		0.1,
		1
	};
};

#include "dialog.hpp"

