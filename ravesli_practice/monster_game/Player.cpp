#include "Player.hpp"

Player::Player(std::string name): Creature(name, '@', 10, 1, 0), _level(1) {
}

Player::~Player() {
}

void	Player::levelUp() {
	++_level;
	++_attackDamage;
}

int	Player::getLevel() { return _level; }

bool Player::hasWon() { return _level >= 20; }
