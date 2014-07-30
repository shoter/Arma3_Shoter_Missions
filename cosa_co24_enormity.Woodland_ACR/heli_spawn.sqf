if ((not isServer) || (not isDedicated)) then
{
	titleCut ["Wsiadles na poklad helikoptera wraz z druzyna i \nwyruszyles na misje", "BLACK FADED", 999];
	sleep 3;
	player moveInCargo heli_start;
	sleep 5;
	titlecut ["Powodzenia!","BLACK IN",5];
};