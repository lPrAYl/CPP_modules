#include "Cat.hpp"

Cat::Cat(): Animal("Cat") {
	std::cout << BLUE << "[Cat]" << RESET << " constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << BLUE << "[Cat]" << RESET << " destructor called" << std::endl;
}

void	Cat::makeSound() const {
	std::cout << BLUE << "[" << _type << "]" << RESET << " Meow! Meow!" << std::endl;
}
