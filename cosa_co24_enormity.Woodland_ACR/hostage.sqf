_caller = _this select 1;
_index = _this select 2; 

NIC = [ {hostage setcaptive false;  hostage allowFleeing 1; hostage enableAI 'MOVE'; hostage switchmove '';} , "BIS_fnc_spawn" ] spawn BIS_fnc_MP;

[hostage] join _caller;