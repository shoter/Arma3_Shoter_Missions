if ((not isServer) || (not isDedicated)) then
{
	titleCut ["Wsiadles na poklad ciezarowki wraz z druzyna i \nwyruszyles na misje", "BLACK FADED", 999];
	sleep 3;
	
	_count = 0;
	{_count = _count + 1;} foreach crew truck_start;
	
	if(_count < 13) then
	{
	 player moveInCargo truck_start;
	} else
	{
	 player moveInCargo truck_start2;
	};
	sleep 5;
	titlecut ["Powodzenia!","BLACK IN",5];
};