if(isNil "VAS_init_complete") exitWith {hint "VAS never initialized.\n\nThis means CfgFunctions.hpp was never called via Description.ext";};
if(!VAS_init_complete && !vas_disableSafetyCheck) exitWith {if((time - VAS_init_timeOnStart) > 25) then {[] call VAS_fnc_mainInit;}; hint "VAS hasn't finished loading yet."};
createDialog "VAS_Diag";
disableSerialization;

ctrlShow [2507,false];
ctrlShow [2508,false];
ctrlShow [2509,false];

VASCAM = "camera" camCreate getPos player;
player switchMove "amovpercmstpslowwrfldnon";
VASCAM camSetFov 0.7;
VASCAM setDir ((getDir player) + 180);
VASCAM camPrepareFOV 0.7;
VASCAM camSetDive -0.5;
VASCAM attachTo [player, [0,3,1.6]];
VASCAM cameraEffect ["INTERNAL", "FRONT"];
VASCAM camSetTarget player;
VASCAM camCommit 0;
showCinemaBorder false;
waitUntil{!dialog};
detach VASCAM;
VASCAM cameraEffect ["TERMINATE", "BACK"];
VASCAM camCommit 0;
camDestroy VASCAM;