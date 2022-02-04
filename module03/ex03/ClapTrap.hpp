#pragma once

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

# include <iostream>
# include <string>

# define GREEN	"\x1B[0;92m"
# define YELLOW	"\x1B[0;93m"
# define BLUE	"\x1B[0;94m"
# define PINK	"\x1B[0;95m"
# define CYAN	"\x1B[0;96m"
# define RESET	"\033[0m"

class	ClapTrap {
protected:
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
