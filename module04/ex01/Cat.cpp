#include "Cat.hpp"

Cat::Cat(): Animal("Cat"), _brain(new Brain) {
	std::cout << BLUE << "[Cat]" << RESET << " constructor called" << std::endl;
}

Cat::~Cat() {
	delete _brain;
	std::cout << BLUE << "[Cat]" << RESET << " destructor called" << std::endl;
}

Cat::Cat(Cat const& other): Animal(other._type),
							_brain(new Brain(*other._brain)) {
	std::cout << BLUE << "[Cat]" << RESET << " copy constructor called" << std::endl;
}

Cat const&	Cat::operator=(Cat const& other) {
	if (this != &other) {
		if (_brain)
			delete _brain;
		_brain = new Brain(*other._brain);
		this->_type = other._type;
	}
	return *this;
}

void	Cat::makeSound() const {
	std::cout << BLUE << "[" << _type << "]" << RESET << " Meow! Meow!" << std::endl;
}
