#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _weapon(nullptr) {
	this->name = name;
}

HumanB::~HumanB() {
}

void	HumanB::setWeapon(Weapon& weapon) {
	_weapon = &weapon;
}

void	HumanB::attack(void) {
	if (_weapon)
		std::cout << this->name << " attack with his " << _weapon->getType();
	else
		std::cout << this->name << " attack with his hands";
	std::cout << std::endl;
}
