#pragma once
#include "Graphics.h"
#include "Tron.h"
#include "Colors.h"

class Box
{
public:
	Box( int p_x, int p_y )
		: x( p_x ), y( p_y )
	{

	}
	void shiftBox( int p_x, int p_y );
	void DrawBox( Graphics& gfx );
	void isColliding( const Tron& tron );
	void updateColor();
	bool Derezzed();

private:
	int x;
	int y;

	int dims = 16;
	
	Color c = {0, 127, 0};

	bool colorPlus = true;
	bool initialized = false;
	bool derezzed = false;
};