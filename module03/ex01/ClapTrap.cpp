#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): 	_name("NoName"),
						_hitPoints(10),
						_energyPoints(10),
						_attackDamage(0) {
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name):
						_name(name),
						_hitPoints(10),
						_energyPoints(10),
						_attackDamage(0) {
	std::cout << "ClapTrap constructor with name called" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage):
						_name(name),
						_hitPoints(hitPoints),
						_energyPoints(energyPoints),
						_attackDamage(attackDamage) {
	std::cout << "ClapTrap constructor with parameters called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& other) {
	*this = other;
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor for " << _name << " called" << std::endl;
}

ClapTrap const& ClapTrap::operator=(ClapTrap const& other) {
	if (this != &other) {
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

void	ClapTrap::attack(std::string const& target) {
	if (_energyPoints > 0 && _hitPoints > 0) {
		std::cout << "ClapTrap " << _name << " attack " << target << ", causing ";
		std::cout << _attackDamage << " of damage!" << std::endl;
		_energyPoints--;
	}
	else if (!_energyPoints && _hitPoints > 0)
		std::cout << "Not enough energyPoints to attack" << std::endl;
	else
		std::cout << "Not enough  hitPoints to attack" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << _name << " takes " << amount << " of damage!";
	std::cout << std::endl;
	_hitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (_energyPoints > 0 && _hitPoints > 0) {
		if (_hitPoints + amount > 10)
			amount = 10 - _hitPoints;
		_hitPoints += amount;
		std::cout << "ClapTrap " << _name << " repaired " << amount;
		std::cout << " of damage!" << std::endl;
		_energyPoints--;
	}
	else if (!_energyPoints && _hitPoints > 0)
		std::cout << "Not enough energyPoints to repair" << std::endl;
	else
		std::cout << "Not enough  hitPoints to repair" << std::endl;
}
