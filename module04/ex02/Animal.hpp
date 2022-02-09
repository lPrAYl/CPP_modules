#pragma once

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <iostream>
# include <string>
# include "colors.hpp"

class	Animal {
protected:
	std::string	_type;

public:
	Animal();
	Animal(std::string type);
	virtual ~Animal();
	Animal(Animal const& other);

	virtual std::string const&	getType() const;
	virtual void 				makeSound() const = 0;

	Animal const& operator=(Animal const& other);

	static int	number;
};

#endif //ANIMAL_HPP
