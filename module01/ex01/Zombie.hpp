#pragma once

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

# define HORDE_SIZE 10

class Zombie {
private:
	std::string	name;

public:
	static int	index;
	void		announce();
	void		setName(std::string name);

	Zombie(std::string name);
	Zombie();
	~Zombie();
};

Zombie*	zombieHorde(int N, std::string name);

#endif
