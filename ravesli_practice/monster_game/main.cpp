#include "Player.hpp"
#include "Monster.hpp"

void	fightMonster(Player& p);

int	main() {
	srand(static_cast<unsigned int>(time(0)));
	rand();

	std::cout << "Enter your name: ";
	std::string	playerName;
	std::cin >> playerName;

	Player	p(playerName);
	std::cout << "Welcome, " << p.getName() << std::endl;

	while (!p.isDead() && !p.hasWon())
		fightMonster(p);

//	srand(static_cast<unsigned int>(time(0)));
//	rand();
//
//	for (int i = 0; i < 10; ++i) {
//		Monster m = Monster::getRandomMonster();
//		std::cout << "A " << m.getName() << " (" << m.getSymbol() << ") was created.";
//		std::cout << std::endl;
//	}

//	Monster	m(Monster::ORC);
//	std::cout << "A " << m.getName() << " (" << m.getSymbol() << ") was created.";
//	std::cout << std::endl;

//	std::cout << "Enter your name: ";
//	std::string	playerName;
//	std::cin >> playerName;
//
//	Player	p(playerName);
//	std::cout << "Welcome, " << p.getName() << "." << std::endl;
//	std::cout << "You have " << p.getHealth() << " health and are carrying ";
//	std::cout << p.getGold() << " gold." << std::endl;

//	Creature	o("orc", 'o', 4, 2, 10);
//	o.addGold(5);
//	o.reduceHealth(1);
//	std::cout << "The " << o.getName() << " has " << o.getHealth();
//	std::cout << " health and is carrying " << o.getGold() << " gold.";

	return 0;
}
