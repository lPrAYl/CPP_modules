#include "Brain.hpp"

Brain::Brain() {
	std::cout << CYAN << "Brain constructor called" << RESET << std::endl;
}

Brain::~Brain() {
	std::cout << CYAN << "Brain destructor called" << RESET << std::endl;
}

Brain::Brain(Brain const& other) {
	std::cout << CYAN << "Brain copy constructor called" << RESET << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = other._ideas[i];
}

std::string const& Brain::getIdea(int i) {
	return _ideas[i];
}

Brain const&	Brain::operator=(const Brain &other) {
	std::cout << CYAN << "Brain operator [=] overload called" << RESET << std::endl;
	if (this != &other) {
		for (int i = 0; i < 100; i++)
			_ideas[i] = other._ideas[i];
	}
	return *this;
}
