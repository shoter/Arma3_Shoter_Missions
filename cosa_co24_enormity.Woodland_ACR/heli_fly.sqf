HeliEnd flyinheight 150;
HeliEnd move ( getPos heliDestination );

_height = 150;
while { _height < 1000 } do
{
_height = _height + 10;
HeliEnd flyinheight _height;
sleep 2;
}
