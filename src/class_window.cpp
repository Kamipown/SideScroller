#include "class_window.hpp"

c_window::c_window(void)
{
	if (!(this->window = SDL_CreateWindow(WINDOW_TITLE, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, 0)))
		error(-1, SDL_GetError());
}

c_window::~c_window(void)
{
	SDL_DestroyWindow(this->window);
}
