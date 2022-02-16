#pragma once

#ifndef PLAYER_HPP
#define PLAYER_HPP

# include "Creature.hpp"

class	Player: public Creature {
private:
	int	_level;

public:
	Player(std::string name);
	~Player();

	void	levelUp();
	int 	getLevel();
	bool	hasWon();
};

#endif //PLAYER_HPP
