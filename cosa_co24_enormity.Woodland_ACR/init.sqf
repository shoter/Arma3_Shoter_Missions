call compile preprocessFileLineNumbers "scripts\Init_UPSMON.sqf";
SPAWN_PREPARED = false;
HELI_LANDED = false;
HELI_LANDED2 = false;
JEDZ_TRUCK = false;
JEDZ_HELI = false;

TRUCK_SPAWN = false;
HELI_SPAWN = false;

oficer addAction ["<t color='#0000FF'>Wybierz helikopter</t>", {HELI_SPAWN = true; publicVariable "HELI_SPAWN";} , "", 0, false, true, "", "(HELI_SPAWN isEqualTo false) AND (TRUCK_SPAWN isEqualTo false)" ];
oficer addAction ["<t color='#00FF00'>Wybierz ciężarówke</t>", {TRUCK_SPAWN = true; publicVariable "TRUCK_SPAWN";} , "", 0, false, true, "", "(TRUCK_SPAWN isEqualTo false) AND (HELI_SPAWN isEqualTo false)" ];


MAC_fnc_switchMove = {
    private["_object","_anim"];
    _object = _this select 0;
    _anim = _this select 1;

    _object switchMove _anim;
};

if (isServer || (not isDedicated)) then
{
//creating chair :D
[[Soldier, "Crew"], "MAC_fnc_switchMove"] spawn BIS_fnc_MP;
Soldier setPos (getPos chair); 
Soldier setDir ((getDir chair) - 180); 
Soldier disableAI "TARGET";
Soldier disableAI "AUTOTARGET";
Soldier disableAI "MOVE";
Soldier disableAI "ANIM";
//server scripts;
nic = [] execVM "prepare_spawn.sqf";

//prepare hostage
removeallweapons hostage; 
dostop hostage; 
hostage allowFleeing 0;
hostage disableAI "MOVE"; 
removeallweapons hostage;
hostage setcaptive true;
hostage switchmove 'AmovPercMstpSnonWnonDnon_AmovPercMstpSsurWnonDnon';

//give flashlights to all bad people
{
   if((side _x) == East ) then
   {
		_x addPrimaryWeaponItem "acc_flashlight"; _x unassignItem "NVGoggles"; _x removeItem "NVGoggles"; _x enablegunlights "forceOn";
   };
} forEach allUnits;


};
if( (not isServer) || (not isDedicated) ) then
{
//client scripts;
	titleCut ["Oczekiwanie. Nie dotykaj klawiszy/myszki", "BLACK FADED", 999];

nic = [] execVM "player_spawn.sqf";
Soldier SwitchMove "Crew";
hostage switchmove 'AmovPercMstpSnonWnonDnon_AmovPercMstpSsurWnonDnon';
//prepare hostage
hostage addAction ["Zabezpiecz zakladnika", "hostage.sqf",[],6,false,true];
};