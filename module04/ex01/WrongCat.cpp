#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat") {
	std::cout << PINK << "[WrongCat]" << RESET << " constructor called" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << PINK << "[WrongCat]" << RESET << " destructor called" << std::endl;
}

void	WrongCat::makeSound() const {
	std::cout << PINK << "[" << _type + "]" << RESET << " Af! Af!" << std::endl;
}
