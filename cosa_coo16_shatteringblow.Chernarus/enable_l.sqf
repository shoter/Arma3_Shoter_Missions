private [ "_soldiers" ];

_soldiers = [ l1_0, l1_1, l1_2, l1_3, l1_4, l1_5, l1_6, l1_7, l1_8 ];

{
_x addPrimaryWeaponItem "acc_flashlight"; _x unassignItem "NVGoggles"; _x removeItem "NVGoggles"; _x enablegunlights "forceOn"
} forEach _soldiers;