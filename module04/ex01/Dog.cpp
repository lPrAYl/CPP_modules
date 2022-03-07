#include "Dog.hpp"

Dog::Dog(): Animal("Dog"), _brain(new Brain) {
	std::cout << YELLOW << "[Dog]" << RESET << " constructor called" << std::endl;
}

Dog::~Dog() {
	delete _brain;
	std::cout << YELLOW << "[Dog]" << RESET << " destructor called" << std::endl;
}

Dog::Dog(Dog const& other): Animal(other._type),
							_brain(new Brain(*other._brain)) {
	std::cout << GREEN << "[Dog]" << RESET << " copy constructor called" << std::endl;
}

Dog const&	Dog::operator=(Dog const& other) {
	if (this != &other) {
		if (_brain)
			delete _brain;
		_brain = new Brain(*other._brain);
		this->_type = other._type;
	}
	return *this;
}

void	Dog::makeSound() const {
	std::cout << YELLOW << "[" << _type << "]" << RESET << " Wouf! Wouf!" << std::endl;
}
