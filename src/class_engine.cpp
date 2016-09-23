#include "class_engine.hpp"

c_engine::c_engine(void)
{
	if (SDL_Init(SDL_INIT_VIDEO) != 0)
		error(-1, SDL_GetError());
	if (!(this->window = new c_window()))
		error(-1, "Unable to create window object.");
	if (!(this->renderer = new c_renderer(this->window->get_window())))
		error(-1, "Unable to create renderer object.");
	if (!(this->inputs = new s_inputs()))
		error(-1, "Unable to create inputs structure.");
	IMG_Init(IMG_INIT_PNG);
}

c_engine::~c_engine(void)
{
	delete this->window;
	delete this->inputs;
	SDL_Quit();
}

void	c_engine::start(void)
{
	this->running = true;
	this->loop();
}

void	c_engine::loop(void)
{
	while (this->running)
	{
		this->events->get_inputs(this->inputs);
		if (this->inputs->exit)
			return ;
		this->frame();
	}
}

void	c_engine::frame(void)
{
	static int	n;

	std::cout << "Frame " << n++ << std::endl;
}
