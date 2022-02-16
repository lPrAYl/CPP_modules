#include "Character.hpp"

Character::Character(): _name("Mr.Freeman"), _inventory() {}

Character::Character(std::string name): _name(name), _inventory() {}

Character::~Character() {
	for (int i = 0; i < 4; ++i) {
		if (_inventory[i])
			delete _inventory[i];
	}
}

Character::Character(const Character &other): _name(other._name), _inventory() {
	for (int i = 0; i < 4; ++i)
		_inventory[i] = other._inventory[i]->clone();
}

Character const& Character::operator=(const Character &other) {
	if (this == &other)
		return *this;
	_name = other._name;
	for (int i = 0; i < 4; ++i) {
		if (_inventory[i])
			delete _inventory[i];
		_inventory[i] = other._inventory[i]->clone();
	}
	return *this;
}

void	Character::equip(AMateria *m) {
	if (!m)
		return ;
	for (int i = 0; i < 4; ++i) {
		if (!_inventory[i]) {
			_inventory[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx) {
	if (idx < 0 || idx > 3)
		return ;
	_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target) {
	if (idx < 0 || idx > 3 || !_inventory[idx])
		return ;
	_inventory[idx]->use(target);
}

std::string	const& Character::getName() const {
	return _name;
}
