#pragma once

#include "game.hpp"
#include "class_window.hpp"
#include "class_events.hpp"

class c_engine
{
private:
	c_window	*window;
	c_events	*events;

	s_inputs	*inputs;

	bool		running;

public:
	c_engine(void);
	~c_engine(void);

	void	start(void);
	void	loop(void);
	void	frame(void);
	
};
