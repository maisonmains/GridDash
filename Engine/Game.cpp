/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "MainWindow.h"
#include "Game.h"


Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd ),
	rng( rd() ),
	xDist( 0, 770 ),
	yDist( 0, 570 ),
	vDist( -2, 2 ),
	tron( xDist(rng), yDist(rng) ),
	box( xDist(rng), yDist(rng) ),
	proggBar( 10, 10 )
{	
	for ( int i = 0; i < size; ++i )
	{
		rinzDivision[i].init( xDist( rng ), yDist( rng ), vDist( rng ), vDist( rng ) );
	}
}

void Game::Go()
{
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{	
	tron.update( wnd );
	tron.maintain();
	box.isColliding( tron );
	box.updateColor();

	if ( startGame && !endGame )
	{ 
		for ( int i = 0; i < size; ++i )
		{
			rinzDivision[i].update();
			if ( rinzDivision[i].isColliding( tron ) || proggBar.getScore() == 20 )
			{
				endGame = true;
			}
		}

		if ( box.Derezzed() )
		{
			proggBar.increaseScore();
			std::mt19937 rng( rd() );
			std::uniform_int_distribution <int> boxRandX( 0, 760 );
			std::uniform_int_distribution<int> boxRandY( 0, 560 );

			box.shiftBox( boxRandX( rng ), boxRandY( rng ) );
		}
	}
	else
	{
		if ( wnd.kbd.KeyIsPressed(VK_RETURN) )
			{
				startGame = true;
			}
	}
}

void Game::ComposeFrame()
{
	proggBar.proggbar( gfx );

	if ( !startGame )
	{
		s.DrawTitleScreen(325, 213, gfx);
	}
	
	if ( startGame && !endGame )
	{
		
		for (int i = 0; i < size; ++i)
		{
			rinzDivision[i].Draw( gfx );
		}
		tron.Draw( gfx );
		box.DrawBox( gfx );
	}
	
	if ( endGame )
	{
		for (int i = 0; i < size; ++i)
		{
			rinzDivision[i].stopMotion();
			rinzDivision[i].Draw( gfx );
		}
		box.DrawBox( gfx );
		s.DrawGameOver( 358, 268, gfx);
	}
}
