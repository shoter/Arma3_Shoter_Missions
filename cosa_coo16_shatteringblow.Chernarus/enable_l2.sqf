private [ "_soldiers" ];

_soldiers = [ l2_0, l2_1, l2_2, l2_3, l2_4, l2_5, l2_6, l2_7, l2_8, l2_9, l2_10, l2_11, l2_12, l2_13 ,l2_14, l2_15, l2_16];

{
_x addPrimaryWeaponItem "acc_flashlight"; _x unassignItem "NVGoggles"; _x removeItem "NVGoggles"; _x enablegunlights "forceOn"
} forEach _soldiers;