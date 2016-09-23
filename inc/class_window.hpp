#pragma once

#include "game.hpp"

class c_window
{
private:
	SDL_Window	*window;

public:
	c_window(void);
	~c_window(void);

	SDL_Window	*get_window(void) { return (this->window); };
	
};
