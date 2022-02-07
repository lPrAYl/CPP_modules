#pragma once

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

# include <iostream>
# include <string>

# define RED	"\x1B[0;91m"
# define GREEN	"\x1B[0;92m"
# define YELLOW	"\x1B[0;93m"
# define BLUE	"\x1B[0;94m"
# define PINK	"\x1B[0;95m"
# define CYAN	"\x1B[0;96m"
# define RESET	"\033[0m"

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
