#include "Animal.hpp"

int	Animal::number = 0;

Animal::Animal() {
	std::cout << GREEN << "[Animal_" << number << "]" << RESET;
	std::cout << " constructor called" << std::endl;
	number++;
}

Animal::Animal(std::string type): _type(type) {
	std::cout << GREEN << "[Animal_" << number << "]" << RESET;
	std::cout << " constructor with type called" << std::endl;
	number++;
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
	number--;
	std::cout << GREEN << "[Animal_" << number << "]" << RESET;
	std::cout << " destructor called" << std::endl;
}

std::string const& Animal::getType() const {
	return this->_type;
}
