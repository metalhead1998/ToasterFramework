#include "gamestates.h"
#include "loadmedia.h"

std::string gameName = "Game";

int screenWidth  = 640;
int screenHeight = 640;

bool GameStates::isRunning()
{
	return true;
}

bool GameStates::initialize()
{
	if(SDL_Init(SDL_INIT_EVERYTHING) < 0)
	{
		prinf("SDL could not initialize! SDL error: %s/n", SDL_GetError());
		
		return false;
	}
	else
	{
		window = SDL_CreateWindow(gameName,
									SDL_WINDOWPOS_UNDEFINED, 
									SDL_WINDOWPOS_UNDEFINED,
									screenWidth, screenHeight, 
									SDL_WINDOW_SHOWN);
		if(window == NULL)
		{
			printf("SDL could not create window! SDL error: %s/n", SDL_GetError());
			
			return false;
		}
		else
		{
			display = SDL_GetWindowSurface(window);
			
			SDL_FillRect(display, NULL, SDL_MapRGB(display->format, 0, 0, 255));
		}
	}
	
	return true;
}

void GameStates::handleEvent(SDL_Event* event)
{
	if(event->type == SDL_QUIT)
	{
		isRunning == false;
	}
}

void GameStates::handleInput()
{
	
}

void GameStates::update(Time deltaTime)
{
	SDL_UpdateWindowSurface(window);
}

void GameStates::fixedUpdate(Time deltaTime)
{
	
}

void GameStates::render()
{
	
}

void GameStates::cleanUp()
{
	SDL_DestroyRenderer(render);
	SDL_DestroyWindow(window);
	SDL_Quit();
}
