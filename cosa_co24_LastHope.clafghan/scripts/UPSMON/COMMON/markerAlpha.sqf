/* =============================================
	!R
	Hide area markers.
	
	create Game Logic Object
	put in initialization field:
	
		nul = call compile preprocessFile "scripts\UPSMON\COMMON\markerAlpha.sqf";

	all markers area must be named area0, area1...area13
		
================================================= */

{ _x setmarkeralpha 0; } foreach ["area0", "area1", "area2","area3","area4","area5","area6","area7","area8","area9","area10","area11","area12","area13"];
{ _x setmarkeralpha 0; } foreach ["zone0", "zone1", "zone2", "zone3", "zone4", "zone5", "zone6", "zone7", "zone8", "zone9", "zone10", "zone11", "zone12", "zone13", "zone14", "zone15", "zone16", "zone17", "zone18", "zone19", "zone20", "zone21", "zone22", "zone23", "zone24", "zone25", "zone26", "zone27", "zone28", "zone29", "zone30", "zone31", "zone32", "zone33", "zone34", "zone35", "zone36", "zone37", "zone38", "zone39"]; 