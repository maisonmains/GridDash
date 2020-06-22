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
	gfx.PutPixel(2 + x, 0 + y, 74, 74, 74);
	gfx.PutPixel(3 + x, 0 + y, 74, 74, 74);
	gfx.PutPixel(4 + x, 0 + y, 74, 74, 74);
	gfx.PutPixel(5 + x, 0 + y, 74, 74, 74);
	gfx.PutPixel(6 + x, 0 + y, 74, 74, 74);
	gfx.PutPixel(7 + x, 0 + y, 74, 74, 74);
	gfx.PutPixel(8 + x, 0 + y, 74, 74, 74);
	gfx.PutPixel(9 + x, 0 + y, 74, 74, 74);
	gfx.PutPixel(10 + x, 0 + y, 74, 74, 74);
	gfx.PutPixel(11 + x, 0 + y, 74, 74, 74);
	gfx.PutPixel(2 + x, 1 + y, 74, 74, 74);
	gfx.PutPixel(3 + x, 1 + y, 74, 74, 74);
	gfx.PutPixel(4 + x, 1 + y, 74, 74, 74);
	gfx.PutPixel(5 + x, 1 + y, 74, 74, 74);
	gfx.PutPixel(6 + x, 1 + y, 74, 74, 74);
	gfx.PutPixel(7 + x, 1 + y, 74, 74, 74);
	gfx.PutPixel(8 + x, 1 + y, 74, 74, 74);
	gfx.PutPixel(9 + x, 1 + y, 74, 74, 74);
	gfx.PutPixel(10 + x, 1 + y, 74, 74, 74);
	gfx.PutPixel(11 + x, 1 + y, 74, 74, 74);
	gfx.PutPixel(0 + x, 2 + y, 74, 74, 74);
	gfx.PutPixel(1 + x, 2 + y, 74, 74, 74);
	gfx.PutPixel(2 + x, 2 + y, 74, 74, 74);
	gfx.PutPixel(3 + x, 2 + y, 74, 74, 74);
	gfx.PutPixel(4 + x, 2 + y, 74, 74, 74);
	gfx.PutPixel(5 + x, 2 + y, 74, 74, 74);
	gfx.PutPixel(6 + x, 2 + y, 74, 74, 74);
	gfx.PutPixel(7 + x, 2 + y, 74, 74, 74);
	gfx.PutPixel(8 + x, 2 + y, 74, 74, 74);
	gfx.PutPixel(9 + x, 2 + y, 74, 74, 74);
	gfx.PutPixel(10 + x, 2 + y, 74, 74, 74);
	gfx.PutPixel(11 + x, 2 + y, 74, 74, 74);
	gfx.PutPixel(12 + x, 2 + y, 74, 74, 74);
	gfx.PutPixel(13 + x, 2 + y, 74, 74, 74);
	gfx.PutPixel(0 + x, 3 + y, 74, 74, 74);
	gfx.PutPixel(1 + x, 3 + y, 74, 74, 74);
	gfx.PutPixel(2 + x, 3 + y, 74, 74, 74);
	gfx.PutPixel(3 + x, 3 + y, 74, 74, 74);
	gfx.PutPixel(4 + x, 3 + y, 74, 74, 74);
	gfx.PutPixel(5 + x, 3 + y, 74, 74, 74);
	gfx.PutPixel(6 + x, 3 + y, 74, 74, 74);
	gfx.PutPixel(7 + x, 3 + y, 74, 74, 74);
	gfx.PutPixel(8 + x, 3 + y, 74, 74, 74);
	gfx.PutPixel(9 + x, 3 + y, 74, 74, 74);
	gfx.PutPixel(10 + x, 3 + y, 74, 74, 74);
	gfx.PutPixel(11 + x, 3 + y, 74, 74, 74);
	gfx.PutPixel(12 + x, 3 + y, 74, 74, 74);
	gfx.PutPixel(13 + x, 3 + y, 74, 74, 74);
	gfx.PutPixel(0 + x, 4 + y, 177, 177, 177);
	gfx.PutPixel(1 + x, 4 + y, 177, 177, 177);
	gfx.PutPixel(2 + x, 4 + y, 177, 177, 177);
	gfx.PutPixel(3 + x, 4 + y, 177, 177, 177);
	gfx.PutPixel(4 + x, 4 + y, 177, 177, 177);
	gfx.PutPixel(5 + x, 4 + y, 177, 177, 177);
	gfx.PutPixel(6 + x, 4 + y, 105, 105, 105);
	gfx.PutPixel(7 + x, 4 + y, 105, 105, 105);
	gfx.PutPixel(8 + x, 4 + y, 105, 105, 105);
	gfx.PutPixel(9 + x, 4 + y, 105, 105, 105);
	gfx.PutPixel(10 + x, 4 + y, 74, 74, 74);
	gfx.PutPixel(11 + x, 4 + y, 74, 74, 74);
	gfx.PutPixel(12 + x, 4 + y, 105, 105, 105);
	gfx.PutPixel(13 + x, 4 + y, 105, 105, 105);
	gfx.PutPixel(14 + x, 4 + y, 74, 74, 74);
	gfx.PutPixel(15 + x, 4 + y, 74, 74, 74);
	gfx.PutPixel(0 + x, 5 + y, 177, 177, 177);
	gfx.PutPixel(1 + x, 5 + y, 177, 177, 177);
	gfx.PutPixel(2 + x, 5 + y, 177, 177, 177);
	gfx.PutPixel(3 + x, 5 + y, 177, 177, 177);
	gfx.PutPixel(4 + x, 5 + y, 177, 177, 177);
	gfx.PutPixel(5 + x, 5 + y, 177, 177, 177);
	gfx.PutPixel(6 + x, 5 + y, 105, 105, 105);
	gfx.PutPixel(7 + x, 5 + y, 105, 105, 105);
	gfx.PutPixel(8 + x, 5 + y, 105, 105, 105);
	gfx.PutPixel(9 + x, 5 + y, 105, 105, 105);
	gfx.PutPixel(10 + x, 5 + y, 74, 74, 74);
	gfx.PutPixel(11 + x, 5 + y, 74, 74, 74);
	gfx.PutPixel(12 + x, 5 + y, 105, 105, 105);
	gfx.PutPixel(13 + x, 5 + y, 105, 105, 105);
	gfx.PutPixel(14 + x, 5 + y, 74, 74, 74);
	gfx.PutPixel(15 + x, 5 + y, 74, 74, 74);
	gfx.PutPixel(0 + x, 6 + y, 147, 201, 255);
	gfx.PutPixel(1 + x, 6 + y, 147, 201, 255);
	gfx.PutPixel(2 + x, 6 + y, 147, 201, 255);
	gfx.PutPixel(3 + x, 6 + y, 147, 201, 255);
	gfx.PutPixel(4 + x, 6 + y, 147, 201, 255);
	gfx.PutPixel(5 + x, 6 + y, 147, 201, 255);
	gfx.PutPixel(6 + x, 6 + y, 147, 201, 255);
	gfx.PutPixel(7 + x, 6 + y, 147, 201, 255);
	gfx.PutPixel(8 + x, 6 + y, 147, 201, 255);
	gfx.PutPixel(9 + x, 6 + y, 147, 201, 255);
	gfx.PutPixel(10 + x, 6 + y, 105, 105, 105);
	gfx.PutPixel(11 + x, 6 + y, 105, 105, 105);
	gfx.PutPixel(12 + x, 6 + y, 13, 13, 13);
	gfx.PutPixel(13 + x, 6 + y, 13, 13, 13);
	gfx.PutPixel(14 + x, 6 + y, 74, 74, 74);
	gfx.PutPixel(15 + x, 6 + y, 74, 74, 74);
	gfx.PutPixel(0 + x, 7 + y, 147, 201, 255);
	gfx.PutPixel(1 + x, 7 + y, 147, 201, 255);
	gfx.PutPixel(2 + x, 7 + y, 147, 201, 255);
	gfx.PutPixel(3 + x, 7 + y, 147, 201, 255);
	gfx.PutPixel(4 + x, 7 + y, 147, 201, 255);
	gfx.PutPixel(5 + x, 7 + y, 147, 201, 255);
	gfx.PutPixel(6 + x, 7 + y, 147, 201, 255);
	gfx.PutPixel(7 + x, 7 + y, 147, 201, 255);
	gfx.PutPixel(8 + x, 7 + y, 147, 201, 255);
	gfx.PutPixel(9 + x, 7 + y, 147, 201, 255);
	gfx.PutPixel(10 + x, 7 + y, 105, 105, 105);
	gfx.PutPixel(11 + x, 7 + y, 105, 105, 105);
	gfx.PutPixel(12 + x, 7 + y, 13, 13, 13);
	gfx.PutPixel(13 + x, 7 + y, 13, 13, 13);
	gfx.PutPixel(14 + x, 7 + y, 74, 74, 74);
	gfx.PutPixel(15 + x, 7 + y, 74, 74, 74);
	gfx.PutPixel(10 + x, 8 + y, 105, 105, 105);
	gfx.PutPixel(11 + x, 8 + y, 105, 105, 105);
	gfx.PutPixel(12 + x, 8 + y, 13, 13, 13);
	gfx.PutPixel(13 + x, 8 + y, 13, 13, 13);
	gfx.PutPixel(14 + x, 8 + y, 74, 74, 74);
	gfx.PutPixel(15 + x, 8 + y, 74, 74, 74);
	gfx.PutPixel(10 + x, 9 + y, 105, 105, 105);
	gfx.PutPixel(11 + x, 9 + y, 105, 105, 105);
	gfx.PutPixel(12 + x, 9 + y, 13, 13, 13);
	gfx.PutPixel(13 + x, 9 + y, 13, 13, 13);
	gfx.PutPixel(14 + x, 9 + y, 74, 74, 74);
	gfx.PutPixel(15 + x, 9 + y, 74, 74, 74);
	gfx.PutPixel(0 + x, 10 + y, 177, 177, 177);
	gfx.PutPixel(1 + x, 10 + y, 177, 177, 177);
	gfx.PutPixel(2 + x, 10 + y, 177, 177, 177);
	gfx.PutPixel(3 + x, 10 + y, 177, 177, 177);
	gfx.PutPixel(4 + x, 10 + y, 177, 177, 177);
	gfx.PutPixel(5 + x, 10 + y, 177, 177, 177);
	gfx.PutPixel(6 + x, 10 + y, 105, 105, 105);
	gfx.PutPixel(7 + x, 10 + y, 105, 105, 105);
	gfx.PutPixel(8 + x, 10 + y, 105, 105, 105);
	gfx.PutPixel(9 + x, 10 + y, 105, 105, 105);
	gfx.PutPixel(10 + x, 10 + y, 13, 13, 13);
	gfx.PutPixel(11 + x, 10 + y, 13, 13, 13);
	gfx.PutPixel(12 + x, 10 + y, 105, 105, 105);
	gfx.PutPixel(13 + x, 10 + y, 105, 105, 105);
	gfx.PutPixel(14 + x, 10 + y, 74, 74, 74);
	gfx.PutPixel(15 + x, 10 + y, 74, 74, 74);
	gfx.PutPixel(0 + x, 11 + y, 177, 177, 177);
	gfx.PutPixel(1 + x, 11 + y, 177, 177, 177);
	gfx.PutPixel(2 + x, 11 + y, 177, 177, 177);
	gfx.PutPixel(3 + x, 11 + y, 177, 177, 177);
	gfx.PutPixel(4 + x, 11 + y, 177, 177, 177);
	gfx.PutPixel(5 + x, 11 + y, 177, 177, 177);
	gfx.PutPixel(6 + x, 11 + y, 105, 105, 105);
	gfx.PutPixel(7 + x, 11 + y, 105, 105, 105);
	gfx.PutPixel(8 + x, 11 + y, 105, 105, 105);
	gfx.PutPixel(9 + x, 11 + y, 105, 105, 105);
	gfx.PutPixel(10 + x, 11 + y, 13, 13, 13);
	gfx.PutPixel(11 + x, 11 + y, 13, 13, 13);
	gfx.PutPixel(12 + x, 11 + y, 105, 105, 105);
	gfx.PutPixel(13 + x, 11 + y, 105, 105, 105);
	gfx.PutPixel(14 + x, 11 + y, 74, 74, 74);
	gfx.PutPixel(15 + x, 11 + y, 74, 74, 74);
	gfx.PutPixel(6 + x, 12 + y, 105, 105, 105);
	gfx.PutPixel(7 + x, 12 + y, 105, 105, 105);
	gfx.PutPixel(6 + x, 13 + y, 105, 105, 105);
	gfx.PutPixel(7 + x, 13 + y, 105, 105, 105);
	gfx.PutPixel(2 + x, 14 + y, 105, 105, 105);
	gfx.PutPixel(3 + x, 14 + y, 105, 105, 105);
	gfx.PutPixel(4 + x, 14 + y, 105, 105, 105);
	gfx.PutPixel(5 + x, 14 + y, 105, 105, 105);
	gfx.PutPixel(6 + x, 14 + y, 74, 74, 74);
	gfx.PutPixel(7 + x, 14 + y, 74, 74, 74);
	gfx.PutPixel(2 + x, 15 + y, 105, 105, 105);
	gfx.PutPixel(3 + x, 15 + y, 105, 105, 105);
	gfx.PutPixel(4 + x, 15 + y, 105, 105, 105);
	gfx.PutPixel(5 + x, 15 + y, 105, 105, 105);
	gfx.PutPixel(6 + x, 15 + y, 74, 74, 74);
	gfx.PutPixel(7 + x, 15 + y, 74, 74, 74);
	gfx.PutPixel(12 + x, 16 + y, 147, 201, 255);
	gfx.PutPixel(13 + x, 16 + y, 147, 201, 255);
	gfx.PutPixel(12 + x, 17 + y, 147, 201, 255);
	gfx.PutPixel(13 + x, 17 + y, 147, 201, 255);

}

