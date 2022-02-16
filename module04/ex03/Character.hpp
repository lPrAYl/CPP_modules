#pragma once

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include "ICharacter.hpp"


class Character: public ICharacter {
private:
	std::string	_name;
	AMateria*	_inventory[4];

public:
	Character();
	Character(std::string name);
	~Character();

	Character(Character const& other);
	Character const& operator=(Character const& other);

	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

	std::string const& getName() const;
};

#endif //CHARACTER_HPP
