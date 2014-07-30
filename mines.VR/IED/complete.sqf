#include "defines.def";

_ied = _this select 0;

_ied setVariable [ "ShoterIed_Difuser", objNull , true];
_ied setVariable [ "ShoterIed_Difused", true , true];
_ied setVariable [ "ShoterIed_Detonated", true , true];

closeDialog 123;