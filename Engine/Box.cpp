#include "Box.h"

void Box::shiftBox( int p_x, int p_y )
{
	x = p_x;
	y = p_y;
}
void Box::DrawBox( Graphics& gfx )
{	
	gfx.DrawBox( x, y, dims, dims, c );
}
void Box::updateColor()
{
	if ( colorPlus )
	{
		if ( c.GetG() >= 253 )
		{
			colorPlus = false;
		}
		else
		{
			c = Color( c.GetR() + 4, c.GetG() + 2, c.GetB() + 4 );
		}
	}
	else
	{
		if ( c.GetG() <= 127 )
		{
			colorPlus = true;
		}
		else
		{
			c = Color( c.GetR() - 4, c.GetG() - 2, c.GetB() - 4 );
		}
	}
}
void Box::isColliding( const Tron& tron )
{
	int x0 = x;
	int right0 = x + dims;
	int y0 = y;
	int bottom0 = y + dims;

	int x1 = tron.getX();
	int right1 = tron.getX() + tron.getWidth();
	int y1 = tron.getY();
	int bottom1 = tron.getY() + tron.getHeight();

	if (
		x0 <= right1 &&
		right0 >= x1 &&
		y0 <= bottom1 &&
		bottom0 >= y1
		)
	{
		derezzed = true;
	}


}
bool Box::Derezzed()
{	
	if ( derezzed )
	{
		derezzed = false;
		return true;
	}
}