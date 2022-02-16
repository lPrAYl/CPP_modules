#pragma once

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

# include <string>
# include <iostream>
# include "colors.hpp"
# include "ICharacter.hpp"

class ICharacter;

class	AMateria {
protected:
	std::string	_type;

public:
	AMateria();
	AMateria(std::string const& type);
	virtual ~AMateria();

	AMateria(AMateria const& ohter);
	AMateria const& operator=(AMateria const& other);

	std::string const& getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target) = 0;
};

#endif //AMATERIA_HPP
