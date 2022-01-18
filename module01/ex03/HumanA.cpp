#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _weapon(weapon) {
	this->name = name;
}

HumanA::~HumanA() {
}

void	HumanA::attack() {
	std::cout << this->name << " attacks with his " << _weapon.getType();
	std::cout << std::endl;
}
