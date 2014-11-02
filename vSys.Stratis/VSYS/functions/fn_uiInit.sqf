/* ADVANCED USERS */

// CREATE THE DIALOG
createDialog "VSYS_DIALOG";

// WAIT UNTIL IT HAS BEEN INITIALIZED
waitUntil { !( isNull ( findDisplay IDD_DISPLAY_MAIN ) ) };

// POPULATE THE MAIN LIST BOX WITH AIR VEHICLES
[["Air"], IDC_LISTBOX_MAIN, [ IDC_ACTIVET_AIR, IDC_ACTIVET_ARMOR, IDC_ACTIVET_CAR, IDC_ACTIVET_SUPPORT ] ] call VSYS_fnc_lbPop;	

// STORE THE OBJECT THAT THE ACTION IS ON, INTO A GLOBAL VARIABLE
VSYSACTIONTARGET = ( _this select 0 );

// IF THERE'S NOT A BUILD IN PROGRESS THEN ...
if ( player getVariable [ "cancelCreate", true ] ) then {
	ctrlEnable [ IDC_BTN_CANCEL, false ];
	ctrlEnable [ IDC_BTN_CREATE, true ];
} else {
	ctrlEnable [ IDC_BTN_CANCEL, true ];
	ctrlEnable [ IDC_BTN_CREATE, false ];
};

// SET THE LISTBOXES CURRENT SELECTION
lbSetCurSel [ IDC_LISTBOX_MAIN, 0 ];


 
	
