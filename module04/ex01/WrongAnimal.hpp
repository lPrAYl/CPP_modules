#pragma once

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

# include <iostream>
# include <string>
# include "colors.hpp"

class	WrongAnimal {
protected:
	std::string	_type;

public:
	WrongAnimal();
	WrongAnimal(std::string name);
	WrongAnimal(WrongAnimal const&);
	~WrongAnimal();

	WrongAnimal const& operator=(WrongAnimal const&);

	void 				makeSound() const;
	std::string const&	getType() const;
};

#endif //WRONGANIMAL_HPP
