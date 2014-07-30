#include "defines.def";
private [ "_ied", "_difficulty" ];

_ied = _this select 0;
_difficulty = _this select 1;

_ied setVariable [ "ShoterIed_difficulty", _difficulty, false ];
_ied setVariable [ "ShoterIed_Difuser", objNull , true];
_ied setVariable [ "ShoterIed_Difused", false , true];
_ied setVariable [ "ShoterIed_Detonated", false , true];

_actionText = COLOR_GREEN("defuse");

switch ( toLower _difficulty ) do
	{
		case "medium" : { _actionText = COLOR_YELLOW("defuse"); };
		case "hard"   : { _actionText = COLOR_RED("defuse"); };
	};

_condition = format ["
_difuser = _target getVariable ""ShoterIed_Difuser"";
_difused = _target getVariable ""ShoterIed_Difused"";
_detonated = _target getVariable ""ShoterIed_Detonated"";
(player distance _target < 4) AND (((_difuser isEqualTo objNull) AND (_difused isEqualTo false) AND ( _detonated isEqualTo false)) OR %1 )", DEBUG];	
	
_ied addAction [ _actionText, { [_this select 0] call ShoterIed_InitMinefield }, "", 5, true, true, "", _condition  ];