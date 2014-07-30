private ["_i" , "_spawns", "_spawn", "_player", "_players"];
_spawns = [spawn1, spawn2, spawn3, spawn4, spawn5, spawn6, spawn7, spawn8, spawn9, spawn10, spawn11, spawn12, spawn13, spawn14, spawn15, spawn16, spawn17, spawn18, spawn19, spawn20]; 

sleep 5; //wait for players sync

//Thanks to Szymanowski for this script
_units = [];
_players = [];
if (count playableUnits > 0) then {_units = playableUnits} else {_units = [player]};
{if(isPlayer _x)then{_players = _players + [_x]}} forEach _units;
_i = 0;

while {_i < count _players } do {
_spawn = _spawns select _i;
_player = _players select _i;

_spawn setVariable [ "player_spawn", _player, true ];

//player globalchat format ["%1 - %2 [%3]" , _spawn, _player, _i];
sleep 1;

 _i = _i + 1; 
};

SPAWN_PREPARED = true;
publicVariable "SPAWN_PREPARED";