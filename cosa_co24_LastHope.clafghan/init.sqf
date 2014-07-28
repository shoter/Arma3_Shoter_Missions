call compile preprocessFileLineNumbers "scripts\Init_UPSMON.sqf";
nic = [] call compile preprocessFileLineNumbers "init_biometric.sqf";

dupek setvariable ["cse_biometricScannerInfo",["arats ajowt","","Podejrzany o pomoc AL Kaidzie","Aresztowac przy kontakcie",""], false];

