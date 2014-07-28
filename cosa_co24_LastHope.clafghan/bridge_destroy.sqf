{
if( not((typename _x) isEqualTo "ARRAY") ) then
	{
	_x setDamage 1;
	} else
	{
	_array = _x;
		{
		_x setDamage 1;
		} forEach _array;
	};
	} forEach [ Bridge3, Bridge4  ];

	bridge_wood_25
	252565