#include "defines.def";
private ["_X", "_Y", "_button", "_ied", "_index", "_mines", "_tile" ];
disableSerialization;

player globalchat format ["this = %1", _this select 1 ];

_tile = _this select 0;
_button = _this select 1;
if(_button isEqualTo 1)then
{
	if( ctrlText (ctrlIdc _tile) isEqualTo PATH_IMG + "tile.paa" ) then
	{
		_mines = parsenumber ctrlText MINECOUNT_ID;
		if(_mines > 0) then
			{
				//ctrlSetText [ MINECOUNT_ID, format ["%1", _mines - 1 ] ];
				ctrlSetText [ ctrlIdc _tile, PATH_IMG + "tileFlag.paa" ];
			};
	} else {
		if( ctrlText (ctrlIdc _tile) isEqualTo PATH_IMG + "tileFlag.paa" ) then
		{
			_mines = parsenumber ctrlText MINECOUNT_ID;
			//ctrlSetText [ MINECOUNT_ID, format ["%1", _mines + 1 ] ];
			ctrlSetText [ ctrlIdc _tile, PATH_IMG + "tile.paa" ];
		};
	};
};

if(_button isEqualTo 0) then
{
	_ied = player getVariable "ShoterIed_disarmingObj";
	_index = ctrlIdc _tile;
	_Y = (_index % 10);
	_X = floor(_index / 10);
	[_ied, _X, _Y] call ShoterIed_Uncover;
};