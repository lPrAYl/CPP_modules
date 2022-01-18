#include "Zombie.hpp"

int	main() {
	Zombie	*heapZombie = newZombie("\33[32;1mheapZombie\33[0m");
	randomChump("\33[33;1mstackZombie\33[0m");
	heapZombie->announce();
	delete heapZombie;
	return 0;
}
