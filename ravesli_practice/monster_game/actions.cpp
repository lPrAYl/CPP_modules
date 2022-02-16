#include "Creature.hpp"
#include "Monster.hpp"
#include "Player.hpp"

void	attackPlayer(Monster& m, Player& p) {
	if (m.isDead())
		return ;
	p.reduceHealth(m.getAttackDamage());
	std::cout << "The " << m.getName() << " hit you for " << m.getAttackDamage();
	std::cout << " damage." << std::endl;
}

void	attackMonster(Player& p, Monster& m) {
	if (p.isDead())
		return ;

	std::cout << "You hit the " << m.getName() << " for " << p.getAttackDamage();
	std::cout << " damage." << std::endl;

	m.reduceHealth(p.getAttackDamage());

	if (m.isDead()) {
		std::cout << "You killed the " << m.getName() << "." << std::endl;
		p.levelUp();
		std::cout << "You are now level " << p.getLevel() << "." << std::endl;
		std::cout << "You found " << m.getGold() << " gold." << std::endl;
		p.addGold(m.getGold());
	}
}

void	fightMonster(Player& p) {
	Monster m = Monster::getRandomMonster();
	std::cout << "You have encountered a " << m.getName() << " (";
	std::cout << m.getSymbol() << ")." << std::endl;

	while (!m.isDead() && !p.isDead()) {
		std::cout << "(R)un or (F)ight: ";
		char input;
		std::cin >> input;
		if (input == 'R' || input == 'r') {
			if (getRandomNumber(1, 2) == 1) {
				std::cout << "You successfully fled." << std::endl;
				return ;
			}
			else {
				std::cout << "You failed to flee." << std::endl;
				attackPlayer(m, p);
				continue ;
			}
		}

		if (input == 'F' || input == 'f') {
			attackMonster(p, m);
			attackPlayer(m, p);
		}
	}
}
