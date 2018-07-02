#ifdef  GAMESTATES_H
#define GAMESTATES_H

//SDL headers
#include <SDL2/SDL.h>

//Custom headers
#include "loadmedia.h"

//Get input from the user
class GameStates
{
	private:
	
			bool isRunning;
			
			SDL_Surface* display;
			
			SDL_Window*  window;
	public:
			void initialize         ()						override;
			void handleEvent		(SDL_Event* event) 		override;
			void handleInput		()  					override;
			void update				(Time deltaTime)  		override;
			void fixedUpdate		(Time deltaTime)  		override;
			void render				()   					override;
			void cleanUp			()						override;
}

#endif
