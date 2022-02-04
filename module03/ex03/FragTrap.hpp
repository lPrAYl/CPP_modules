#pragma once

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const& other);
	~FragTrap();

	void	highFiveGuys();

	FragTrap const& operator=(FragTrap const& other);
};

#endif
