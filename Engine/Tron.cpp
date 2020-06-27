#include "Tron.h"

void Tron::update( const MainWindow& wnd )
{

	if ( wnd.kbd.KeyIsPressed( VK_UP ) )
	{
		y -= speed;
	}

	if ( wnd.kbd.KeyIsPressed( VK_DOWN ) )
	{
		y += speed;
	}

	if ( wnd.kbd.KeyIsPressed( VK_LEFT ) )
	{
		x -= speed;
	}

	if ( wnd.kbd.KeyIsPressed( VK_RIGHT ) )
	{
		x += speed;
	}
}
void Tron::maintain()
{
	if (x < 0)
	{
		x = 0;
	}

	if ( x + width >= Graphics::ScreenWidth )
	{
		x = screenWidth - width;
	}

	if (y <= 0)
	{
		y = 0;
	}

	if ( y + height >= Graphics::ScreenHeight )
	{
		y = screenHeight - height;
	}
}
void Tron::Draw( Graphics& gfx ) const
{
	Sprites s;
	s.DrawTron( x, y, gfx);

}

