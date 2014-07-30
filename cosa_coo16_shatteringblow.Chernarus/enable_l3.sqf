private [ "_soldiers" ];

_soldiers = [ l3_0, l3_1, l3_2, l3_3, l3_4, l3_5, l3_6];

{
_x addPrimaryWeaponItem "acc_flashlight"; _x unassignItem "NVGoggles"; _x removeItem "NVGoggles"; _x enablegunlights "forceOn";
} forEach _soldiers;