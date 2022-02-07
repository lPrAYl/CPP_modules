#pragma once

#ifndef CAT_HPP
#define CAT_HPP

# include "Animal.hpp"

class	Cat: public Animal {
public:
	Cat();
	Cat(Cat const& other);
	~Cat();

	void	makeSound() const;

	Cat const&	operator=(Cat const& other);
};

#endif //CAT_HPP
