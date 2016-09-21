#pragma once

#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>
#include <iostream>
#include <cstdlib>

#define WINDOW_TITLE "Salut"

struct		s_inputs
{
	bool	exit;
};

void	error(const int n, const char *error);