#include "defines.def"
/*
	Author: Shoter

	Description:
	The script is not doing 1 tick, it is constantly ticking :).
	It's a mysterious ticking machine XD. What is that voice?

	Parameter(s):
		/klj./jk.,

	Returns: N/A
*/
private [ "_ied", "_timer" ];
_ied = _this select 0;
_timer = _ied getVariable "ShoterIed_Timer";
_startTime = time;
while { true } do 
{
_delta = time - _startTime;
_curTime = _timer - _delta;
ctrlSetText [ TIMER_ID, format ["%1", floor _curTime] ];
if(_curTime < 0) then
	{
		[_ied] call ShoterIed_Detonate;
	};
sleep 0.3;
if(!dialog) exitWIth { [_ied] call ShoterIed_Detonate;true };

};
