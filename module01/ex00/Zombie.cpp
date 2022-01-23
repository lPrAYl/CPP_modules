#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	std::cout << "Zombie " << name << " rebelled!" << std::endl;
	this->name = name;
}

Zombie::~Zombie() {
	std::cout << "Zombie " << name << " left us forever..." << std::endl;
}

void	Zombie::announce() {
	std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
