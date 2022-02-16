#include "AMateria.hpp"

AMateria::AMateria(): _type("No type") {}

AMateria::AMateria(std::string const& type): _type(type) {}

AMateria::~AMateria() {}

AMateria::AMateria(AMateria const& other): _type(other._type) {}

AMateria const& AMateria::operator=(const AMateria& other) {
	if (this == &other)
		return *this;
	_type = other._type;
	return *this;
}

std::string const& AMateria::getType() const {
	return _type;
}
