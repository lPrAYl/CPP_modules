#pragma once

#ifndef MONSTER_HPP
#define MONSTER_HPP

# include "Creature.hpp"

class	Monster: public Creature {
public:
	enum Type {
		DRAGON,
		ORC,
		SLIME,
		MAX_TYPES
	};

	struct MonsterData {
		char const*	name;
		char 		symbol;
		int 		health;
		int 		damage;
		int 		gold;
	};

	Monster(Type type): Creature(monsterData[type].name,
										  monsterData[type].symbol,
										  monsterData[type].health,
										  monsterData[type].damage,
										  monsterData[type].gold) {
	}

	static MonsterData	monsterData[MAX_TYPES];

	static Monster	getRandomMonster();
};

#endif //MONSTER_HPP
