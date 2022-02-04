#pragma once

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:
	ScavTrap();
	~ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& other);

	void	attack(std::string const& target);
	void	guardGate();

	ScavTrap const& operator=(ScavTrap const& other);
};

#endif
