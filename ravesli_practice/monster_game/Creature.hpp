#pragma once

#ifndef CREATURE_HPP
#define CREATURE_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>

class	Creature {
protected:
	std::string	_name;
	char 		_symbol;
	int 		_hitPoint;
	int 		_attackDamage;
	int 		_gold;

public:
	Creature();
	Creature(std::string, char, int, int, int);
	~Creature();

	std::string&	getName();
	char 			getSymbol() const;
	int				getHealth() const;
	int 			getAttackDamage() const;
	int 			getGold() const;

	void	reduceHealth(int);
	bool 	isDead();
	void 	addGold(int);
};

int		getRandomNumber(int min, int max);

#endif //CREATURE_HPP
