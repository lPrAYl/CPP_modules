#include "ScavTrap.hpp"

int	main() {
	ScavTrap	garbage("Trash");

	garbage.attack("Human");
	garbage.takeDamage(60);
	garbage.beRepaired(80);
	garbage.guardGate();
}
