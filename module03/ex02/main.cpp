#include "FragTrap.hpp"

int	main() {
	FragTrap	frag("Slowpoke");

	frag.attack("Human");
	frag.takeDamage(60);
	frag.beRepaired(80);
	frag.highFiveGuys();
}
