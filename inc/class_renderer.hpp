#pragma once

#include "game.hpp"

class c_renderer
{
private:
	SDL_Renderer	*renderer;

public:
	c_renderer(SDL_Window *window);
	~c_renderer(void);
	
};
