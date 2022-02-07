#include "Dog.hpp"

Dog::Dog(): Animal("Dog") {
	std::cout << YELLOW << "[Dog]" << RESET << " constructor called" << std::endl;
}

Dog::~Dog() {
	std::cout << YELLOW << "[Dog]" << RESET << " destructor called" << std::endl;
}

void	Dog::makeSound() const {
	std::cout << YELLOW << "[" << _type << "]" << RESET << " Wouf! Wouf!" << std::endl;
}
