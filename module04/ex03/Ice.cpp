#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {}

Ice::~Ice() {}

Ice::Ice(const Ice &other): AMateria(other._type) {}

Ice const& Ice::operator=(const Ice &other) {
	if (this == &other)
		return *this;
	_type = other._type;
	return *this;
}

AMateria* Ice::clone() const {
	AMateria* clone = new Ice(*this);
	return clone;
}

void	Ice::use(ICharacter &target) {
	std::cout << BLUE << "* shoots an ice bolt at " << target.getName() << " *";
	std::cout << RESET << std::endl;
}
