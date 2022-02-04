#include "ClapTrap.hpp"

int	main() {
	ClapTrap	Giglet("Bimbo");

	Giglet.attack("Human");
	Giglet.takeDamage(9);
	Giglet.beRepaired(5);
	Giglet.takeDamage(9);
	Giglet.beRepaired(5);

	return 0;
}
