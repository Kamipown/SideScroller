#include "class_events.hpp"

c_events::c_events(void)
{

}

c_events::~c_events(void)
{

}

void	c_events::get_inputs(s_inputs *inputs)
{
	this->clear_inputs(inputs);
	while (SDL_PollEvent(&this->event))
	{
		if (this->event.type == SDL_QUIT)
			inputs->exit = true;
	}
}

void	c_events::clear_inputs(s_inputs *inputs)
{
	inputs->exit = false;
}
