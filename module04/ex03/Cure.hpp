#pragma once

#ifndef CURE_HPP
#define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria {
public:
	Cure();
	~Cure();

	Cure(Cure const& other);
	Cure const& operator=(Cure const& other);

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif //CURE_HPP
