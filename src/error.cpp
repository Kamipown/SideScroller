#include "game.hpp"

void	error(const int n, const char *error)
{
	std::cout << "Exit " << n << ": " << error << std::endl;
	exit(n);
}
