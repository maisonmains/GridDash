#pragma once
#include "Graphics.h"

class Proggress
{
public:
	Proggress( int p_x, int p_y )
		:x( p_x ), y( p_y )
	{

	}
	void Proggress::proggbar( Graphics& gfx )
	{	
		gfx.DrawBox( x, y, dims*score, dims, c );
	}

	void increaseScore()
	{
		score++;
	}

	int getScore() const
	{
		return score;
	}
private:
	int x;
	int y;
	int score = 0;
	static constexpr Color c = Colors::Red;
	int dims = 10;
};