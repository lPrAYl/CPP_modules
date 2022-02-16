#include "Creature.hpp"

Creature::Creature(std::string name, char symbol, int hitPoint, int attackDamage, int gold):
	_name(name), _symbol(symbol), _hitPoint(hitPoint), _attackDamage(attackDamage), _gold(gold) {
}

Creature::~Creature() {
}

std::string&	Creature::getName() { return _name; }

char	Creature::getSymbol() const { return _symbol; }

int	Creature::getHealth() const{ return _hitPoint; }

int	Creature::getAttackDamage() const { return _attackDamage; }

int	Creature::getGold() const { return _gold; }

void	Creature::reduceHealth(int damage) { _hitPoint -= damage; }

bool 	Creature::isDead() { return _hitPoint <= 0; }

void 	Creature::addGold(int add) { _gold += add; }
