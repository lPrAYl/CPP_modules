#include "Animal.hpp"

Animal::Animal() {
	std::cout << GREEN << "[Animal]" << RESET << " constructor called" << std::endl;
}

Animal::Animal(std::string type): _type(type) {
	std::cout << GREEN << "[Animal]" << RESET << " constructor with type called";
	std::cout << std::endl;
}

Animal::Animal(Animal const& other) {
	*this = other;
	std::cout << GREEN << "[Animal]" << RESET << " copy constructor called";
}

Animal const&	Animal::operator=(Animal const& other) {
	if (this != &other)
		this->_type = other._type;
	return *this;
}

Animal::~Animal() {
	std::cout << GREEN << "[Animal]" << RESET << " destructor called" << std::endl;
}

void Animal::makeSound() const {
	std::cout << GREEN << "[Animal]" << RESET << " make sound..." << std::endl;
}

std::string const& Animal::getType() const {
	return this->_type;
}
