#pragma once

#ifndef DOG_HPP
#define DOG_HPP

# include "Animal.hpp"

class	Dog: public Animal {
public:
	Dog();
	Dog(Dog const& other);
	~Dog();

	void	makeSound() const;

	Dog const&	operator=(Dog const& other);
};

#endif //DOG_HPP
