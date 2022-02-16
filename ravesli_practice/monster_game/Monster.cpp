#include "Monster.hpp"

int	getRandomNumber(int min, int max) {
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

Monster::MonsterData	Monster::monsterData[Monster::MAX_TYPES] = {
		{ "dragon", 'D', 20, 4, 100 },
		{ "orc", 'o', 4, 2, 25 },
		{ "slime", 's', 1, 1, 10}
};

Monster	Monster::getRandomMonster() {
	int num = getRandomNumber(0, MAX_TYPES - 1);
	return Monster(static_cast<Type>(num));
}
