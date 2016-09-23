#include "class_renderer.hpp"

c_renderer::c_renderer(SDL_Window *window)
{
	if (!(this->renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED)))
		error(-1, SDL_GetError());
}

c_renderer::~c_renderer(void)
{
	SDL_DestroyRenderer(this->renderer);
}
