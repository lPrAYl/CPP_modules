#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << RED << "[WrongAnimal]" << RESET << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): _type(type) {
	std::cout << RED << "[WrongAnimal]" << RESET << " constructor with type called";
	std::cout << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& other) {
	*this = other;
	std::cout << RED << "[WrongAnimal]" << RESET << " copy constructor called";
}

WrongAnimal const&	WrongAnimal::operator=(WrongAnimal const& other) {
	if (this != &other)
		this->_type = other._type;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << RED << "[WrongAnimal]" << RESET << " destructor called" << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << RED << "[WrongAnimal]" << RESET << " make sound..." << std::endl;
}

std::string const& WrongAnimal::getType() const {
	return this->_type;
}
