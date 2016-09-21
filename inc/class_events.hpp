#pragma once

#include "game.hpp"

class c_events
{
private:
	SDL_Event	event;

public:
	c_events(void);
	~c_events(void);

	void	get_inputs(s_inputs	*inputs);
	void	clear_inputs(s_inputs *inputs);

};
