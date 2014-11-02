/* ADVANCED USERS */

// DECLARE SCOPE FOR LOCAL VARIABLES
private ["_vehArray", "_listBox", "_ctrlArray", "_cfg", "_sidePlayer", "_sel", "_className", "_displayname", "_sideVehicle", "_vehClass", "_picture", "_scope", "_index"];

// LOCAL VARIABLE DEFINES
_vehArray = _this select 0;
_listBox = _this select 1;
_ctrlArray = _this select 2;
_cfg = ( configFile >> "cfgVehicles" );
_sidePlayer = getNumber ( _cfg >> ( typeOf player ) >> "side" );
lbClear _listBox;

// ITERATE THROUGH CFGVEHICLES		
for "_i" from 0 to ( count ( _cfg ) - 1 ) do {
    _sel = ( _cfg select _i );
	
	// IF THE SELECTION IS A CLASS THEN DEFINE SOME MORE LOCAL VARIABLES
	if (isClass _sel) then {	
		_className = ( configName _sel );
		_displayName = getText ( _sel >> "displayName" );
		_sideVehicle = getNumber ( _sel >> "side" );
		_vehClass = getText ( _sel >> "vehicleClass" );
		_picture = getText ( _sel >> "picture" );
		_scope = getNumber ( _sel >> "scope" );
		
		// IF THE VEHICLE IS USEABLE, AND IS IN THE ALLOWED SIDES ARRAY AND IS IN THE PARTICULAR VEHICLE TYPE ARRAY. IE; ["AIR"] OR ["CAR"] ETC, THEN ADD IT TO THE LB
		if ( ( _scope >= 2 ) && { ( _sideVehicle in VSYS_SIDES ) && { ( _vehClass in _vehArray ) } } ) then {
			_index = lbAdd [ _listBox, _displayName ];
			lbSetPicture [ _listBox, _index, _picture ];
			lbSetData [ _listBox, _index, _classname ];
			lbSetToolTip [ _listBox, _index, _displayName ];
        };
	};
};

// CREATE MACRO
#define UIctrl(ctrl) ((findDisplay IDD_DISPLAY_MAIN) displayCtrl ctrl)

// SET THE ACTIVE TEXT CONTROL'S COLORS
{
	if ( _forEachIndex == 0 ) then {
		UIctrl(_x) ctrlSetTextColor [ (profilenamespace getvariable ['GUI_BCG_RGB_R',0.69]), (profilenamespace getvariable ['GUI_BCG_RGB_G',0.75]), (profilenamespace getvariable ['GUI_BCG_RGB_B',0.5]), 0.85 ];	
	} else {
		UIctrl(_x) ctrlSetTextColor [ 1, 1, 1, 1 ];
	};	
} forEach _ctrlArray;

