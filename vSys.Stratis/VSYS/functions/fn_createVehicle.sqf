/* ADVANCED USERS */

// CREATE GENERIC MACRO
#define UIctrl(ctrl) ((findDisplay IDD_DISPLAY_MAIN) displayCtrl ctrl)

// DECLARE PRIVATE VARIABLE'S SCOPE
private [ "_listBox", "_className", "_displayName", "_vehClass", "_position", "_checked", "_delay", "_veh", "_flyingChecked", "_CREWChecked" ];

// SET CANCELCREATE VARIABLE TO FALSE
player setVariable [ "cancelCreate", false ];

// IF CREATING IS ALLOWED THEN ...
if ( player getVariable [ "createEnabled", True ] ) then { 

	// DEFINE LOCAL VARIABLES
	_listBox = _this select 0;
	_className = lbData [ _listBox, ( lbCurSel _listBox ) ]; 
	_displayName = lbText [ _listBox, ( lbCurSel _listBox ) ];
	_vehClass = getText ( configFile >> "cfgVehicles" >> _className >> "vehicleClass" );
	_position = ( VSYSACTIONTARGET modelToWorld [ (random 25 - random 25), (random 25 - random 25), 0 ] );
	
	// FIND THE TYPE OF VEHICLE WE'RE CREATING AND SET THE DELAY
	switch ( _vehClass ) do { 
		case "Air":{ _delay = VSYS_DELAY_AIR; };
		case "Armored":{ _delay = VSYS_DELAY_ARMORED; };
		case "Car":{ _delay = VSYS_DELAY_CAR; };
		case "Support":{ _delay = VSYS_DELAY_SUPPORT; };
		default { _delay = VSYS_DELAY_DEFAULT; };	
	};
    
	// ENABLE THE CANCEL BUTTON, DISABLE THE CREATE BUTTON AND SET CREATENABLED VARIABLE TO FALSE
	ctrlEnable [ IDC_BTN_CANCEL, true ];
	ctrlEnable [ IDC_BTN_CREATE, false ];
	player setVariable [ "createEnabled", false ];
	player sideChat format [ localize "STR_VSYS_REQUESTED", _displayName, _delay ];
	
	// FROM 0 TO THE DELAY SET THE PROGRESS BAR'S POSITION AND WATCH FOR CANCELATION
	for "_i" from 0 to _delay do {
		sleep 1;
		UIctrl(IDC_PROGRESS_MAIN) progressSetPosition ( _i / _delay );
		UIctrl(IDC_TEXT_PROGRESS) ctrlSetText format ["%1...", _displayName];
		
		// IF THE PROCESS HAS BEEN CANCELED THEN ENABLE THE CREATE BUTTON AND DISABLE THE CANCEL BUTTON. SET CREATEENABLED VARIABLE TO TRUE, PROGRESS POSITION BACK TO 0, AND PROGRESS TEXT TO EMPTY 
		if ( player getVariable [ "cancelCreate", true ] ) exitWith {
			ctrlEnable [ IDC_BTN_CANCEL, false ];
			ctrlEnable [ IDC_BTN_CREATE, true ];
			player setVariable [ "createEnabled", true ];
			player sideChat format [ localize "STR_VSYS_CANCELED", _displayname ];
			UIctrl(IDC_PROGRESS_MAIN) progressSetPosition 0;
			UIctrl(IDC_TEXT_PROGRESS) ctrlSetText "";
		};
	};

	// IF WE HAVEN'T CANCELED THE PROCESS BY THE TIME THE SCRIPT GETS HERE, THEN CREATE THE VEHICLE AND CHECK IF CHECKBOX'S HAVE BEEN CHECKED.
	if ( !( player getVariable "cancelCreate" ) ) then {
	
		// STORE CHECK BOX BOOLS
		_flyingChecked = cbChecked UIctrl(IDC_CB_FLYING);
		_crewChecked = cbChecked UIctrl(IDC_CB_CREW);
		_getInChecked = cbChecked UIctrl(IDC_CB_GETIN);
		
		if ( _flyingChecked && { ( _vehClass == "Air" ) } ) then {
			_veh = createVehicle [ _className, _position, [], 0, "FLY" ];
		} else {
			_veh = createVehicle [ _className, _position, [], 0, "NONE" ];
		};
		
		if ( _crewChecked ) then {
			createVehicleCrew _veh;
			{
				[_x] joinSilent ( group player );
			} forEach ( crew _veh );
		};
		
		if ( _getInChecked ) then {
			player moveInAny _veh;
			closeDialog 0;
		};
		
		// IF THE DIALOG IS STILL OPEN, THEN SET THE PROGRESS BAR'S POSITION TO 0,THE PROGRESS TEXT TO EMPTY.ENABLE THE CREATE BUTTON AND DISABLE THE CANCEL BUTTON. SET VARIABLES.
		if ( !( isNull ( findDisplay IDD_DISPLAY_MAIN ) ) ) then {
			UIctrl(IDC_PROGRESS_MAIN) progressSetPosition 0;
			UIctrl(IDC_TEXT_PROGRESS) ctrlSetText "";
			ctrlEnable [ IDC_BTN_CANCEL, false ];
			ctrlEnable [ IDC_BTN_CREATE, true ];
			player setVariable [ "createEnabled", true ];
			player setVariable [ "cancelCreate", true ];
			player sideChat format [ localize "STR_VSYS_BUILT", _displayName ];
		};
    };
}; 

