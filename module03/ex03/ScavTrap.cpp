#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	this->_name = "NoName";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << YELLOW << "ScavTrap default constructor called" << RESET;
	std::cout << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << YELLOW << "ScavTrap constructor with name called" << RESET;
	std::cout << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << YELLOW << "ScavTrap destructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) {
	*this = other;
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

void	ScavTrap::attack(std::string const& target) {
	if (_energyPoints > 0 && _hitPoints > 0) {
		std::cout << "ScavTrap " << YELLOW << _name << RESET << " attack ";
		std::cout << BLUE << target << RESET << ", causing ";
		std::cout << _attackDamage << " of damage!" << std::endl;
		_energyPoints--;
	}
	else if (!_energyPoints && _hitPoints > 0)
		std::cout << "Not enough energyPoints to attack" << std::endl;
	else
		std::cout << "Not enough hitPoints to attack" << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << YELLOW << "ScavTrap has entered in Gate keeper mode" << RESET;
	std::cout << std::endl;
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
