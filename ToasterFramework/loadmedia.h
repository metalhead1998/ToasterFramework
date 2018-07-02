#ifdef LOADMEDIA_H
#define LOADMEDIA_H

//Standart headers
#include <string>
#include <iostream>

//SDL headers
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>

class LoadMedia
{
	public:
			
			bool loadImage	();
			bool loadSound	();
			bool loadFont	();
}

#endif
