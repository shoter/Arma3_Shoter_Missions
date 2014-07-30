while { ( (alive HeliEnd) && !(unitReady HeliEnd) ) } do
{
       sleep 1;
};

if (alive HeliEnd) then
{
       HeliEnd land "GET IN";
};

sleep (120 + (random 10));
JEDZ_HELI = true;
publicVariable "JEDZ_HELI";

