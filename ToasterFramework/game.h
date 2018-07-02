#ifdef  GAME_H
#define GAME_H

//SDL headers
#include <SDL2/SDL.h>

//Custom headers
#include "gamestates.h"

class Game
{
	public:
			Game	();
			int Run ();
};

#endif
