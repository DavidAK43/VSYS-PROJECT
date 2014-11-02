
** USERS MAY EDIT THE FN_VARSINIT.SQF TO DICTATE CREATION TIME AND THE TYPES OF VEHICLES THE VSYS WILL RENDER **

======================
[B]Author: [/B]
======================
- Iceman77

======================
[B]Description: [/B]
======================
- A clean cut UI that allows you to create vehicles
- Users can adjust vehicle type creation time
- Users can adjust which side's vehicles will be displayed. e.g.; The player's side only. Or west, or east, or independent, or... any combination of sides.
- Option to create manned vehicles
- Option to create vehicles already flying 
- Option to move the player into the first available position upon creation ( driver, crew, cargo etc etc) 

======================
[B]Version: [/B]
======================
- 1.3a

======================
[B]INSTALLATION :[/B]
======================
- Merge the contents of the vSys mission folder into yours.
- Changes can be made in the fn_varsInit.sqf to customize VSYS to the users needs

======================
[B]CHANGELOG:[/B]
======================
[B][I]v1.0a[/I][/B]
- release

[B][I]v1.1a[/I][/B]
- Fixed scrollBar error. listScrollBar is now being used rather than the apparently depreciated scrollBar.
- Added action via cfgFunctions rather than through init.sqf. Less for the mission editor to do.

[B][I]v1.2a[/I][/B]
- Re-wrote the entire system.
- No more parachute.
- Users can set vehicle creation time for specific types easily. From instant* (2sec) to whatever delay the user desires ( fn_varsInit.sqf ).
- Added the option to create the vehicle with a crew.
- The previous vehicle doesn't have to be destroyed before you can request a new one.

[B][I]v1.3a [/I][/B]
- Users can now define which side's vehicles can be displayed (fn_varInit.sqf).
- Changed the position (method) for vehicle spawn. Now relative to the object the action is assigned to rather than the player.
- Localized text for all languages via stringtable.xml.
- Added comments to everything so advanced users can easily navigate the blocks of code in any .sqf file
- Added the missing VSYS_DELAY_SUPPORT variable to fn_varsInit.sqf.
- Added "flying" option (check box) to spawn the aircraft flying. Auto defaults to ground spawn if tried with ground vehicles.
- Added "GetIn" option ( Check Box ) to allow the player to automatically be moved into the vehicle's first available position, upon creation ( if possible ).
- Optimized code a bit ( mainly readability ) with control macros
- Text should now be scaling dynamically ( ?? )
- Tweaked UI colors ( mainly opacity )

======================
[B]CREDITS:[/B]
======================
[B][I]Translators ( stringtable.xml ):[/I][/B]
-Mariodu62
-Syncie
-Lepletier
-Schatten
-[CSLA]LUKI
-Rydygier
-AWC_Chief_Wiggum
-Rapax