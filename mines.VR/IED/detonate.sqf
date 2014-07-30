

_ied = _this select 0;
_dif = _ied getVariable "ShoterIed_difficulty";
_shell = "";

if( (_ied getVariable "ShoterIed_Detonated" isEqualTo false) AND ( _ied getVariable "ShoterIed_Difused" isEqualTo false) ) then
{
	switch ( toLower _dif ) do
	{
		case "easy" : { _shell = "HelicopterExploSmall"; };
		case "medium" : { _shell = "HelicopterExploSmall"; };
		case "hard"   : { _shell = "HelicopterExploSmall"; };
		default  { _shell  = "HelicopterExploSmall"; };
	};

	_shell createVehicle [ getpos _ied select 0, getpos _ied select 1, 1];

	_ied setVariable [ "ShoterIed_Detonated", true , true];

	closeDialog 123;
};