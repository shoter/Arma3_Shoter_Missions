private [ "_veh" ];
_veh = _this select 0;

while { damage _veh < 1 } do {

_veh setFuel 1;
sleep 100;
};