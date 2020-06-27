#pragma once
#include "Graphics.h"

class Sprites
{
public:
	void DrawTitleScreen(int x, int  y, Graphics& gfx);
	void DrawGameOver(int x, int y, Graphics& gfx);
	void DrawTron( int p_x, int p_y, Graphics& gfx);

};