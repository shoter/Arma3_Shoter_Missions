#include "defines.def"
class ShoterIed_Minesweeper
{
    idd = 123;
    movingenable = true;
    onLoad = "uiNamespace setVariable [""ShoterIed_Minesweeper"", _this select 0];";
    
    class Controls
    {
		
		////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by Shoter, v1.063, #Hyrido)
////////////////////////////////////////////////////////
	class hShoterIed_Background: RscBackground
	{
		idc = 1801;
		x = 0.347044 * safezoneW + safezoneX;
		y = 0.225442 * safezoneH + safezoneY;
		w = 0.277047 * safezoneW;
		h = 0.465949 * safezoneH;
	};
	
	class hShoterIed_Frame: RscFrame
	{
		idc = 1800;
		x = 0.347044 * safezoneW + safezoneX;
		y = 0.225442 * safezoneH + safezoneY;
		w = 0.277047 * safezoneW;
		h = 0.465949 * safezoneH;
	};
	
	class hShoterIed_timer: RscSweeperText
	{
		idc = TIMER_ID;
		text = "999"; //--- ToDo: Localize;
		x = 0.354186 * safezoneW + safezoneX;
		y = 0.234026 * safezoneH + safezoneY;
		w = 0.0437442 * safezoneW;
		h = 0.0559943 * safezoneH;
	};
	class hShoterIed_timerPicture: RscPicture
	{
		idc = 1200;
		text = "IED\img\clock.paa";
		x = 0.39793 * safezoneW + safezoneX;
		y = 0.234027 * safezoneH + safezoneY;
		w = 0.0364535 * safezoneW;
		h = 0.0559943 * safezoneH;
	};
	class hShoterIed_bombsLeft: RscSweeperText
	{
		idc = MINECOUNT_ID;
		text = "999"; //--- ToDo: Localize;
		x = 0.529163 * safezoneW + safezoneX;
		y = 0.234027 * safezoneH + safezoneY;
		w = 0.0437442 * safezoneW;
		h = 0.0559943 * safezoneH;
	};
	class hShoterIed_bombsLeftPicture: RscPicture
	{
		idc = 1201;
		text = "IED\img\mine.paa";
		x = 0.572907 * safezoneW + safezoneX;
		y = 0.234027 * safezoneH + safezoneY;
		w = 0.0364535 * safezoneW;
		h = 0.0559943 * safezoneH;
	};
	
	class hShoterIed_1_1: RscMineTile
	{
		idc = 11;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.354186 * safezoneW + safezoneX;
		y = 0.30402 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_2_1: RscMineTile
	{
		idc = 21;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.383349 * safezoneW + safezoneX;
		y = 0.30402 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_3_1: RscMineTile
	{
		idc = 31;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.412512 * safezoneW + safezoneX;
		y = 0.30402 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_4_1: RscMineTile
	{
		idc = 41;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.441674 * safezoneW + safezoneX;
		y = 0.30402 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_5_1: RscMineTile
	{
		idc = 51;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.470837 * safezoneW + safezoneX;
		y = 0.30402 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_6_1: RscMineTile
	{
		idc = 61;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.5 * safezoneW + safezoneX;
		y = 0.30402 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_7_1: RscMineTile
	{
		idc = 71;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.529163 * safezoneW + safezoneX;
		y = 0.30402 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_8_1: RscMineTile
	{
		idc = 81;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.558326 * safezoneW + safezoneX;
		y = 0.30402 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_9_1: RscMineTile
	{
		idc = 91;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.587488 * safezoneW + safezoneX;
		y = 0.30402 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_7_2: RscMineTile
	{
		idc = 72;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.529163 * safezoneW + safezoneX;
		y = 0.346016 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_7_3: RscMineTile
	{
		idc = 73;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.529163 * safezoneW + safezoneX;
		y = 0.388011 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_7_4: RscMineTile
	{
		idc = 74;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.529163 * safezoneW + safezoneX;
		y = 0.430007 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_7_5: RscMineTile
	{
		idc = 75;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.529163 * safezoneW + safezoneX;
		y = 0.472003 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_7_6: RscMineTile
	{
		idc = 76;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.529163 * safezoneW + safezoneX;
		y = 0.513999 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_7_7: RscMineTile
	{
		idc = 77;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.529163 * safezoneW + safezoneX;
		y = 0.555994 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_7_8: RscMineTile
	{
		idc = 78;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.529163 * safezoneW + safezoneX;
		y = 0.59799 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_7_9: RscMineTile
	{
		idc = 79;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.529163 * safezoneW + safezoneX;
		y = 0.639986 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_8_2: RscMineTile
	{
		idc = 82;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.558326 * safezoneW + safezoneX;
		y = 0.346016 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_8_3: RscMineTile
	{
		idc = 83;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.558326 * safezoneW + safezoneX;
		y = 0.388011 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_8_4: RscMineTile
	{
		idc = 84;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.558326 * safezoneW + safezoneX;
		y = 0.430007 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_8_5: RscMineTile
	{
		idc = 85;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.558326 * safezoneW + safezoneX;
		y = 0.472003 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_8_6: RscMineTile
	{
		idc = 86;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.558326 * safezoneW + safezoneX;
		y = 0.513999 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_8_7: RscMineTile
	{
		idc = 87;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.558326 * safezoneW + safezoneX;
		y = 0.555994 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_8_8: RscMineTile
	{
		idc = 88;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.558326 * safezoneW + safezoneX;
		y = 0.59799 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_8_9: RscMineTile
	{
		idc = 89;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.558326 * safezoneW + safezoneX;
		y = 0.639986 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_9_2: RscMineTile
	{
		idc = 92;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.587488 * safezoneW + safezoneX;
		y = 0.346016 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_9_3: RscMineTile
	{
		idc = 93;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.587488 * safezoneW + safezoneX;
		y = 0.388011 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_9_4: RscMineTile
	{
		idc = 94;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.587488 * safezoneW + safezoneX;
		y = 0.430007 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_9_5: RscMineTile
	{
		idc = 95;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.587488 * safezoneW + safezoneX;
		y = 0.472003 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_9_6: RscMineTile
	{
		idc = 96;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.587488 * safezoneW + safezoneX;
		y = 0.513999 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_9_7: RscMineTile
	{
		idc = 97;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.587488 * safezoneW + safezoneX;
		y = 0.555994 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_9_8: RscMineTile
	{
		idc = 98;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.587488 * safezoneW + safezoneX;
		y = 0.59799 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_9_9: RscMineTile
	{
		idc = 99;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.587488 * safezoneW + safezoneX;
		y = 0.639986 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_5_2: RscMineTile
	{
		idc = 52;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.470837 * safezoneW + safezoneX;
		y = 0.346016 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_5_3: RscMineTile
	{
		idc = 53;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.470837 * safezoneW + safezoneX;
		y = 0.388011 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_5_4: RscMineTile
	{
		idc = 54;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.470837 * safezoneW + safezoneX;
		y = 0.430007 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_5_5: RscMineTile
	{
		idc = 55;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.470837 * safezoneW + safezoneX;
		y = 0.472003 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_5_6: RscMineTile
	{
		idc = 56;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.470837 * safezoneW + safezoneX;
		y = 0.513999 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_5_7: RscMineTile
	{
		idc = 57;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.470837 * safezoneW + safezoneX;
		y = 0.555994 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_5_8: RscMineTile
	{
		idc = 58;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.470837 * safezoneW + safezoneX;
		y = 0.59799 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_5_9: RscMineTile
	{
		idc = 59;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.470837 * safezoneW + safezoneX;
		y = 0.639986 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_6_2: RscMineTile
	{
		idc = 62;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.5 * safezoneW + safezoneX;
		y = 0.346016 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_6_3: RscMineTile
	{
		idc = 63;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.5 * safezoneW + safezoneX;
		y = 0.388011 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_6_4: RscMineTile
	{
		idc = 64;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.5 * safezoneW + safezoneX;
		y = 0.430007 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_6_5: RscMineTile
	{
		idc = 65;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.5 * safezoneW + safezoneX;
		y = 0.472003 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_6_6: RscMineTile
	{
		idc = 66;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.5 * safezoneW + safezoneX;
		y = 0.513999 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_6_7: RscMineTile
	{
		idc = 67;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.5 * safezoneW + safezoneX;
		y = 0.555994 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_6_8: RscMineTile
	{
		idc = 68;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.5 * safezoneW + safezoneX;
		y = 0.59799 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_6_9: RscMineTile
	{
		idc = 69;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.5 * safezoneW + safezoneX;
		y = 0.639986 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_4_2: RscMineTile
	{
		idc = 42;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.441674 * safezoneW + safezoneX;
		y = 0.346016 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_4_3: RscMineTile
	{
		idc = 43;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.441674 * safezoneW + safezoneX;
		y = 0.388011 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_4_4: RscMineTile
	{
		idc = 44;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.441674 * safezoneW + safezoneX;
		y = 0.430007 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_4_5: RscMineTile
	{
		idc = 45;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.441674 * safezoneW + safezoneX;
		y = 0.472003 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_4_6: RscMineTile
	{
		idc = 46;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.441674 * safezoneW + safezoneX;
		y = 0.513999 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_4_7: RscMineTile
	{
		idc = 47;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.441674 * safezoneW + safezoneX;
		y = 0.555994 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_4_8: RscMineTile
	{
		idc = 48;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.441674 * safezoneW + safezoneX;
		y = 0.59799 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_4_9: RscMineTile
	{
		idc = 49;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.441674 * safezoneW + safezoneX;
		y = 0.639986 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_3_2: RscMineTile
	{
		idc = 32;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.412512 * safezoneW + safezoneX;
		y = 0.346016 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_3_3: RscMineTile
	{
		idc = 33;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.412512 * safezoneW + safezoneX;
		y = 0.388011 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_3_4: RscMineTile
	{
		idc = 34;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.412512 * safezoneW + safezoneX;
		y = 0.430007 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_3_5: RscMineTile
	{
		idc = 35;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.412512 * safezoneW + safezoneX;
		y = 0.472003 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_3_6: RscMineTile
	{
		idc = 36;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.412512 * safezoneW + safezoneX;
		y = 0.513999 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_3_7: RscMineTile
	{
		idc = 37;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.412512 * safezoneW + safezoneX;
		y = 0.555994 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_3_8: RscMineTile
	{
		idc = 38;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.412512 * safezoneW + safezoneX;
		y = 0.59799 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_3_9: RscMineTile
	{
		idc = 39;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.412512 * safezoneW + safezoneX;
		y = 0.639986 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_2_2: RscMineTile
	{
		idc = 22;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.383349 * safezoneW + safezoneX;
		y = 0.346016 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_2_3: RscMineTile
	{
		idc = 23;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.383349 * safezoneW + safezoneX;
		y = 0.388011 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_2_4: RscMineTile
	{
		idc = 24;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.383349 * safezoneW + safezoneX;
		y = 0.430007 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_2_5: RscMineTile
	{
		idc = 25;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.383349 * safezoneW + safezoneX;
		y = 0.472003 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_2_6: RscMineTile
	{
		idc = 26;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.383349 * safezoneW + safezoneX;
		y = 0.513999 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_2_7: RscMineTile
	{
		idc = 27;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.383349 * safezoneW + safezoneX;
		y = 0.555994 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_2_8: RscMineTile
	{
		idc = 28;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.383349 * safezoneW + safezoneX;
		y = 0.59799 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_2_9: RscMineTile
	{
		idc = 29;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.383349 * safezoneW + safezoneX;
		y = 0.639986 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_1_2: RscMineTile
	{
		idc = 12;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.354186 * safezoneW + safezoneX;
		y = 0.346016 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_1_3: RscMineTile
	{
		idc = 13;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.354186 * safezoneW + safezoneX;
		y = 0.388011 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_1_4: RscMineTile
	{
		idc = 14;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.354186 * safezoneW + safezoneX;
		y = 0.430007 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_1_5: RscMineTile
	{
		idc = 15;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.354186 * safezoneW + safezoneX;
		y = 0.472003 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_1_6: RscMineTile
	{
		idc = 16;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.354186 * safezoneW + safezoneX;
		y = 0.513999 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_1_7: RscMineTile
	{
		idc = 17;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.354186 * safezoneW + safezoneX;
		y = 0.555994 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_1_8: RscMineTile
	{
		idc = 18;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.354186 * safezoneW + safezoneX;
		y = 0.59799 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	class hShoterIed_1_9: RscMineTile
	{
		idc = 19;
		text = "IED\img\tile.paa"; //--- ToDo: Localize;
		x = 0.354186 * safezoneW + safezoneX;
		y = 0.639986 * safezoneH + safezoneY;
		w = 0.0291628 * safezoneW;
		h = 0.0419957 * safezoneH;
	};
	
	
	////////////////////////////////////////////////////////
	// GUI EDITOR OUTPUT END
	////////////////////////////////////////////////////////




    };



};
