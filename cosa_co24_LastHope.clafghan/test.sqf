//nic = [getpos player, "TMR_BigFrag", 500, 15, 1, 1] execVM "\mcc_sandbox_mod\mcc\general_scripts\artillery\artillery_fire.sqf";

_bomb = "HelicopterExploSmall" createVehicle [getpos player select 0, getpos player select 1, (getPos player select 2) + 1];
_bomb setPos [getpos player select 0, getpos player select 1, (getPos player select 2) + 1];
_bomb setDamage 1;