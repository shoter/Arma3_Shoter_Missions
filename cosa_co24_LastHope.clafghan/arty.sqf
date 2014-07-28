if (isServer) then
{
	_shell = "G_40mm_HEDP";

	_units = [];
	_players = [];
	if (count playableUnits > 0) then {_units = playableUnits} else {_units = [player]};
	{if(isPlayer _x)then{_players = _players + [_x]}} forEach _units;


	for [ {_i = 0}, {_i < 25}, {_i = _i + 1} ] do
	{
	nic = [getpos (_players select floor ( random (count _players))), _shell, 100, 1, 1, 4] execVM "\mcc_sandbox_mod\mcc\general_scripts\artillery\artillery_fire.sqf";
	sleep (2 + (random 10));
	if( BOMBING_RUN isEqualTo false ) exitWIth { hint "Koniec bombing runu"; };
	};
};