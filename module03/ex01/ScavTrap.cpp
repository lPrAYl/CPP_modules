#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("NoName", 100, 50, 20) {
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name, 100, 50, 20) {
	std::cout << "ScavTrap constructor with name called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) {
	*this = other;
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

void	ScavTrap::attack(std::string const& target) {
	if (_energyPoints > 0 && _hitPoints > 0) {
		std::cout << "ScavTrap " << _name << " attack " << target << ", causing ";
		std::cout << _attackDamage << " of damage!" << std::endl;
		_energyPoints--;
	}
	else if (!_energyPoints && _hitPoints > 0)
		std::cout << "Not enough energyPoints to attack" << std::endl;
	else
		std::cout << "Not enough  hitPoints to attack" << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap has entered in Gate keeper mode" << std::endl;
}

ScavTrap const&	ScavTrap::operator=(ScavTrap const& other) {
	if (this != &other) {
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}
