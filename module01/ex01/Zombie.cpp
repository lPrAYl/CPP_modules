#include "Zombie.hpp"

int	Zombie::index(1);

Zombie::Zombie(std::string name) {
    std::cout << "Zombie " << name << " rebelled!" << std::endl;
}

Zombie::Zombie() {
}

Zombie::~Zombie() {
    std::cout << "Zombie " << name << " left us forever..." << std::endl;
}

void	Zombie::setName(std::string name) {
	this->name = name + '_' + std::to_string(index);
	index++;
}

void    Zombie::announce() {
    std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
