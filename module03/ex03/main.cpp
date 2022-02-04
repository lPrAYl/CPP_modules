#include "DiamondTrap.hpp"

int	main() {
	DiamondTrap	diamond("Diamond");

	diamond.attack("Human");
	diamond.takeDamage(8);
	diamond.beRepaired(10);
	diamond.highFiveGuys();
	diamond.whoAmI();

	return 0;
}
