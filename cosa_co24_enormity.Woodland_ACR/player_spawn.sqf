waitUntil { sleep 1; (isNil "SPAWN_PREPARED") isEqualTo false };
waitUntil { sleep 1; SPAWN_PREPARED isEqualTo true };

sleep 10;


_spawns = [spawn1, spawn2, spawn3, spawn4, spawn5, spawn6, spawn7, spawn8, spawn9, spawn10, spawn11, spawn12, spawn13, spawn14, spawn15, spawn16, spawn17, spawn18, spawn19, spawn20]; 

_found = false;

while{ _found isEqualTo false } do {
	{
	_var = _x getVariable ["player_spawn", 0];
	_ready = _x getVariable ["ready", false];
	//player globalChat format ["Sprawdzam %1, _var = %2, _ready = %3", _x, _var, _ready];
	if(_ready isEqualTo true) then
	{
	_found = true;
	};
	if(_var isEqualTo player AND _ready isEqualTo false) then
	{
		_found = true;
		_x setVariable [ "ready", true, true ];
		player setPos getPos _x;
	};
	
	}	foreach _spawns;
	sleep 1;
};

hint  (parseText "Wczytuje grafike <br/> <img size=0 image='angel.jpg' /><img size=0 image='angel2.jpg' /><img size=0 image='armyplan2.jpg' />");
sleep 5;
Soldier SwitchMove "Crew";
hostage switchmove 'AmovPercMstpSnonWnonDnon_AmovPercMstpSsurWnonDnon';
sleep 5;

	titlecut ["Koniec oczekiwania :)","BLACK IN",5];
