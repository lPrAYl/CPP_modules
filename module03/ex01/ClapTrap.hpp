#pragma once

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

# include <iostream>
# include <string>

class	ClapTrap {
public:
	std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;

	ClapTrap(std::string, int hitPoints, int enegyPoints, int attackDamage);

public:
	ClapTrap();
	virtual ~ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const& other);

	virtual void	attack(std::string const& target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

	ClapTrap const& operator=(ClapTrap const& other);
};

#endif
