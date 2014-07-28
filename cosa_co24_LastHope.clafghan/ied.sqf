
if (isServer) then
{
	_obj = _this select 0;
	_ammoType = _this select 1;
	_proximity = _this select 2;
	_height = 1;
	if(count _this > 3)
		then { _height = _this select 3; };

	_detonate = false;
	while { _detonate isEqualTo false } do
	{
		_nearObjects = (getPos _obj) nearObjects _proximity;
		if(west countside _nearObjects > 0) then { _detonate = true; };
		sleep 0.5;
	};
	player globalchat "boom";
	sleep 0.5;
	_bomb = _ammoType createVehicle [getpos _obj select 0, getpos _obj select 1, (getPos _obj select 2) + _height];
	_bomb setPos [getpos _obj select 0, getpos _obj select 1, (getPos _obj select 2) + _height];
	_bomb setDamage 1;
	if(count _this isEqualTo 5) then
	{
		nic = [] execVM (_this select 4);
	};
};