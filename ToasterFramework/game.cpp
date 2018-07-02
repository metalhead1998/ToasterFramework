#include <iostream>

//Custom headers
#include "game.h"
#include "gamestates.h"

Game::Game()
{
	display = NULL;
	
	isRunning = true;
}

Game::run()
{
	if(initialize() == false)
	{
		return -1;
	}
	
	SDL_Event event;
	
	while(isRunning)
	{
		while(SDL_PollEvent(&event))
		{
			handleEvent(&event);
		}
		
		render();
		update();
	}
	
	cleanUp();
	
	return 0;
}
