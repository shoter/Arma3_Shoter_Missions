private [ "_ship", "_ammo1", "_ammo2", "_i" ];

_ship = _this select 0;
_ammo1 = _this select 1;
_ammo2 = _this select 2;

deleteVehicle _ammo1;
deleteVehicle _ammo2;

_blocks = nearestObjects [ getpos _ship, ["Land_HBarrier_5_F"] , 50];
{
deleteVehicle _x;
} forEach _blocks;

while { (direction _ship < 179) OR (direction _ship > 181) } do {

if (direction _ship > 180 ) then { _ship setdir ( (direction _ship) - 0.5) ; };
if (direction _ship < 180 ) then { _ship setdir ( (direction _ship) + 0.5) ; }; 
if ( (direction _ship - 180) > -10 AND (direction _ship - 180) < 10 ) then
{
_ship setdir 180;
};
//player sidechat format ["%1", direction _ship ];
sleep 0.001;
};
//player sidechat "POZA PETLA";
_i = 0;
while { _i < 1000000 } do 
{
_ship setPosASL  [ getPosASL _ship select 0, (getPosASL _ship select 1) - 0.3, getPosASL _ship select 2] ;
_i = _i + 1;
sleep 0.01;
//player sidechat format ["x - %1,      y - %2,      z - %3" , getPosASL _ship select 0,  getPosASL _ship select 1,getPosASL _ship select 2];
};

