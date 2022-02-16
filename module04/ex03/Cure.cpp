#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {}

Cure::~Cure() {}

Cure::Cure(Cure const& other): AMateria(other._type) {}

Cure const& Cure::operator=(const Cure &other) {
	if (this == &other)
		return *this;
	_type = other._type;
	return *this;
}

AMateria* Cure::clone() const {
	AMateria* clone = new Cure(*this);
	return clone;
}

void Cure::use(ICharacter &target) {
	std::cout << GREEN << "* heals " << target.getName() << "'s wounds *";
	std::cout << RESET << std::endl;
}
