#include "Zombie.hpp"

int	main() {
	Zombie	*hordeZombie = zombieHorde(HORDE_SIZE,"\33[32;1mZombie\33[0m");

	for (int i = 0; i < HORDE_SIZE; i++) {
		hordeZombie[i].announce();
	}
	delete[] hordeZombie;
	hordeZombie = NULL;
	return 0;
}
