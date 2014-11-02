#include "macros.hpp"

class VSYS_DIALOG 
{
    idd = IDD_DISPLAY_MAIN;
	
	controls[]=
	{
		VSYS_BG_MAIN,
		VSYS_TEXT_HEADER,
		VSYS_TEXT_PBAR,
		VSYS_TEXT_CREW,
		VSYS_TEXT_FLYING,
		VSYS_TEXT_GETIN,
		VSYS_ACTIVET_AIR,
		VSYS_ACTIVET_ARMOR,
		VSYS_ACTIVET_CARS,
		VSYS_ACTIVET_SUPPORT,
		VSYS_ACTIVET_X,
		VSYS_BUTTON_CREATE,
		VSYS_BUTTON_CANCEL,
		VSYS_LISTBOX_MAIN,
		VSYS_PROGRESS_MAIN,
		VSYS_CB_CREW,
		VSYS_CB_FLYING,
		VSYS_CB_GETIN
	};
	
	//BACKGROUNDS
	class VSYS_BG_MAIN: IGUIBack
	{
		idc = -1;
		x = 0.339583 * safezoneW + safezoneX;
		y = 0.29 * safezoneH + safezoneY;
		w = 0.335417 * safezoneW;
		h = 0.42 * safezoneH;
	};
	
	//TEXTS
	class VSYS_TEXT_HEADER: RscText
	{
		idc = -1;
		text = $STR_VSYS_HEADER; 
		colorBackGround[] = {Color75};
		x = 0.339583 * safezoneW + safezoneX;
		y = 0.2592 * safezoneH + safezoneY;
		w = 0.335417 * safezoneW;
		h = 0.028 * safezoneH;
	};
	class VSYS_TEXT_PBAR: RscText
	{
		idc = IDC_TEXT_PROGRESS;
		text = ""; 
		style = ST_LEFT;
		SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.5)";
		x = 0.35 * safezoneW + safezoneX;
		y = 0.66 * safezoneH + safezoneY;
		w = 0.1 * safezoneW;
		h = 0.02 * safezoneH;
	};
	class VSYS_TEXT_CREW: RscText
	{
		idc = -1;
		text = $STR_VSYS_ENABLECREW; 
		style = ST_LEFT;
		SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.65)";
		x = 0.45 * safezoneW + safezoneX;
		y = 0.6775 * safezoneH + safezoneY;
		w = 0.065 * safezoneW;
		h = 0.025 * safezoneH;
	};
	class VSYS_TEXT_FLYING: RscText
	{
		idc = -1;
		text = $STR_VSYS_FLYING; 
		style = ST_LEFT;
		SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.65)";
		x = 0.45 * safezoneW + safezoneX;
		y = 0.656 * safezoneH + safezoneY;
		w = 0.065 * safezoneW;
		h = 0.025 * safezoneH;
	};
	class VSYS_TEXT_GETIN: RscText
	{
		idc = -1;
		text = $STR_VSYS_GETIN; 
		style = ST_LEFT;
		SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.65)";
		x = 0.45 * safezoneW + safezoneX;
		y = 0.6335 * safezoneH + safezoneY;
		w = 0.065 * safezoneW;
		h = 0.025 * safezoneH;
	};
	
	//ACTIVE TEXT
	class VSYS_ACTIVET_AIR: rscActiveText
	{
		idc = IDC_ACTIVET_AIR;
		text = "\A3\air_f_beta\Heli_Transport_01\Data\UI\Heli_Transport_01_base_CA.paa";
		x = 0.3575 * safezoneW + safezoneX;
		y = 0.31 * safezoneH + safezoneY;
		w = 0.03 * safezoneW;
		h = 0.03 * safezoneH;
		action = "[['Air'], IDC_LISTBOX_MAIN, [ IDC_ACTIVET_AIR, IDC_ACTIVET_ARMOR, IDC_ACTIVET_CAR, IDC_ACTIVET_SUPPORT ] ] call VSYS_fnc_lbPop;";
	};
	class VSYS_ACTIVET_ARMOR: rscActiveText
	{
		idc = IDC_ACTIVET_ARMOR;
		text = "\A3\armor_f_gamma\MBT_01\Data\UI\Slammer_M2A1_Base_ca.paa";
		x = 0.4475 * safezoneW + safezoneX;
		y = 0.31 * safezoneH + safezoneY;
		w = 0.03 * safezoneW;
		h = 0.03 * safezoneH;
		action = "[['Armored'], IDC_LISTBOX_MAIN, [ IDC_ACTIVET_ARMOR, IDC_ACTIVET_AIR, IDC_ACTIVET_CAR, IDC_ACTIVET_SUPPORT ] ] call VSYS_fnc_lbPop;";
	};
	class VSYS_ACTIVET_CARS: rscActiveText
	{
		idc = IDC_ACTIVET_CAR;
		text = "\A3\Soft_F\MRAP_01\Data\UI\MRAP_01_Base_ca.paa";
		x = 0.5375 * safezoneW + safezoneX;
		y = 0.31 * safezoneH + safezoneY;
		w = 0.03 * safezoneW;
		h = 0.03 * safezoneH;
		action = "[['Car'], IDC_LISTBOX_MAIN, [ IDC_ACTIVET_CAR, IDC_ACTIVET_ARMOR, IDC_ACTIVET_AIR, IDC_ACTIVET_SUPPORT ] ] call VSYS_fnc_lbPop;";
	};
	class VSYS_ACTIVET_SUPPORT: rscActiveText
	{
		idc = IDC_ACTIVET_SUPPORT;
		text = "\a3\soft_f_gamma\Truck_01\Data\UI\Truck_01_box_F_CA.paa";
		x = 0.6275 * safezoneW + safezoneX;
		y = 0.31 * safezoneH + safezoneY;
		w = 0.03 * safezoneW;
		h = 0.03 * safezoneH;
		action = "[['Support'], IDC_LISTBOX_MAIN, [ IDC_ACTIVET_SUPPORT, IDC_ACTIVET_ARMOR, IDC_ACTIVET_CAR, IDC_ACTIVET_AIR ] ] call VSYS_fnc_lbPop;";
	};
	class VSYS_ACTIVET_X: rscActiveText
	{
		idc = -1;
		text = "X"; 
		style = 0;
		colorText[] = {1,1,1,0.75};
		x = 0.65 * safezoneW + safezoneX;
		y = 0.2592 * safezoneH + safezoneY;
		w = 0.028 * safezoneW;
		h = 0.028 * safezoneH;
		action = "closeDialog 0";
	};	
	
	//BUTTONS
	class VSYS_BUTTON_CREATE: RscButton
	{
		idc = IDC_BTN_CREATE;
		text = $STR_VSYS_CREATE;
		x = 0.609375 * safezoneW + safezoneX;
		y = 0.6596 * safezoneH + safezoneY;
		w = 0.0510417 * safezoneW;
		h = 0.042 * safezoneH;
		action = "_nul = [ IDC_LISTBOX_MAIN ] spawn VSYS_fnc_createVehicle;";
	};

	class VSYS_BUTTON_CANCEL: RscButton
	{
		idc = IDC_BTN_CANCEL;
		text = $STR_VSYS_CANCEL;
		x = 0.55 * safezoneW + safezoneX;
		y = 0.6596 * safezoneH + safezoneY;
		w = 0.0510417 * safezoneW;
		h = 0.042 * safezoneH;
		action = "player setVariable ['cancelCreate', true]";
	};
	
	//LISTBOXES
	class VSYS_LISTBOX_MAIN: RscListbox
	{
		idc = IDC_LISTBOX_MAIN;
		x = 0.354167 * safezoneW + safezoneX;
		y = 0.36 * safezoneH + safezoneY;
		w = 0.30625 * safezoneW;
		h = 0.27 * safezoneH;
	};
	
	//PROGRESS BARS
	class VSYS_PROGRESS_MAIN: rscProgress 
	{ 
		idc = IDC_PROGRESS_MAIN; 
		x = 0.3515 * safezoneW + safezoneX;
		y = 0.685 * safezoneH + safezoneY;
		w = 0.075 * safezoneW;
		h = 0.015 * safezoneH;
	}; 	

	//CHECK BOXES
	class VSYS_CB_CREW: RscCheckbox
	{
		idc = IDC_CB_CREW;
		x = 0.515 * safezoneW + safezoneX;
		y = 0.680 * safezoneH + safezoneY;
		w = 0.015 * safezoneW;
		h = 0.025 * safezoneH;
		tooltip = $STR_VSYS_TOOLTIP_CREW;
	};
	class VSYS_CB_FLYING: RscCheckbox
	{
		idc = IDC_CB_FLYING;
		x = 0.515 * safezoneW + safezoneX;
		y = 0.6575 * safezoneH + safezoneY;
		w = 0.015 * safezoneW;
		h = 0.025 * safezoneH;
		tooltip = $STR_VSYS_TOOLTIP_FLYING;
	};
	class VSYS_CB_GETIN: RscCheckbox
	{
		idc = IDC_CB_GETIN;
		x = 0.515 * safezoneW + safezoneX;
		y = 0.635 * safezoneH + safezoneY;
		w = 0.015 * safezoneW;
		h = 0.025 * safezoneH;
		tooltip = $STR_VSYS_TOOLTIP_GETIN;
	};




};



	
	

