/*
	Author: Shoter

	Description:
	Initialize minesweeper GUI

	Parameter(s):
		0 : OBJECT - IED object

	Returns: N/A
*/
disableserialization;
#include "defines.def";
private [ "_ied, _difficulty" ];
_ied = _this select 0;

if( (_ied getVariable ["ShoterIed_Difuser",objNull]) isEqualTo objNull OR DEBUG) then
{
	
	player setVariable ["ShoterIed_disarmingObj", _ied, false];
	_ied setVariable ["ShoterIed_Difuser", player, true];
	_difficulty = _ied getVariable ["ShoterIed_difficulty", "easy"];

	_ok = CreateDialog "ShoterIed_Minesweeper";

	_gui = uiNamespace getVariable "ShoterIed_Minesweeper";

	_mines = 8;
	_time = 60;

	switch ( toLower _difficulty ) do
	{
		case "medium" : { _mines = 10; _time = 100; };
		case "hard"   : { _mines = 12; _time = 160; };
	};

	CtrlSetText [ TIMER_ID, format ["%1", _time ] ]; 
	ctrlSetText [ MINECOUNT_ID, format ["%1", _mines ] ];

	_ied setVariable [ "ShoterIed_Timer", _time, false ];
	_ied setVariable [ "ShoterIed_left", 81 - _mines, false ];

	if( _ok ) then
	{

	for [ {_X = 1}, {_X < 10}, {_X = _X + 1} ] do
	{
		for [ {_Y = 1}, {_Y < 10}, {_Y = _Y + 1} ] do
		{
			diag_log format ["Index %1_%2", _X, _Y ];
			_field = [_X, _Y] call ShoterIed_GetField;
			diag_log format ["field %1", _field ];
			//ctrlSetText [ ctrlIDC _field, PATH_IMG + (format ["%1",(floor (1 + random 8))]) + ".paa"];		
			_field ctrlSetEventHandler ["MouseButtonDown", format ["nic = _this spawn ShoterIed_TileClick"]];
			_ied setVariable ["ShoterIed_Value" + format ["%1%2", _X, _Y],  "E", false];
		};
	};
		for [ {_B = 0}, {_B < _mines}, {true} ] do
		{
			player globalchat format ["%1 , %2" , _B, _mines ];
			_X = floor (random 10);
			_Y = floor (random 10);
			_field = [_X, _Y] call ShoterIed_GetField;
			if( (_ied getVariable "ShoterIed_Value" + format ["%1%2", _X, _Y]) isEqualTo "E" ) then {
				_ied setVariable ["ShoterIed_Value" + format ["%1%2", _X, _Y], "B"];
				_B = _B + 1;
				//ctrlSetText [ ctrlIDC _field, PATH_IMG + (format ["tileflag",(floor (8))]) + ".paa"];	
			};
		};

		for [ {_X = 1}, {_X < 10}, {_X = _X + 1} ] do
		{
			for [ {_Y = 1}, {_Y < 10}, {_Y = _Y + 1} ] do
			{
				diag_log format ["Index %1_%2", _X, _Y ];
				_field = [_X, _Y] call ShoterIed_GetField;
				diag_log format ["field %1", _field ];
				_count = [_ied, _X, _Y] call ShoterIed_BombCount;
				if(_count != 0) then
				{
					//ctrlSetText [ ctrlIDC _field, PATH_IMG + format["%1",_count] + ".paa"];	
					_ied setVariable ["ShoterIed_Value" + format ["%1%2", _X, _Y], _count];
				};
			};
		};
		_tests = 0;
		for [ {_U = 0}, {_U < 3}, {_tests = _tests + 1} ] do
		{
			_X = floor (random 10);
			_Y = floor (random 10);
			_field = [_X, _Y] call ShoterIed_GetField;
			if( ((ctrlText (_X*10+_Y)) isEqualTo PATH_IMG+"tile.paa") AND ((_ied getVariable "ShoterIed_Value" + format ["%1%2", _X, _Y]) isEqualTo "E") ) then {
				[_ied, _X, _Y] call ShoterIed_Uncover;
				_U = _U + 1;
				//ctrlSetText [ ctrlIDC _field, PATH_IMG + (format ["tileflag",(floor (8))]) + ".paa"];	
			};
			if( _tests isEqualTo 20) exitWith {true};
		};


	};
	
	nic = [_ied] spawn ShoterIed_Tick;
} else 
{
	//someone is disarming the bomb.
};


