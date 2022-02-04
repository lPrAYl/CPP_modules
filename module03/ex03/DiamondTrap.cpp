#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	this->_name = "NoName";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::ClapTrap::_attackDamage;
	ClapTrap::_name = _name + "_clap_trap";
	std::cout << CYAN << "DiamondTrap default constructor called" << RESET;
	std::cout << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) {
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	ClapTrap::_name = name + "_clap_trap";
	std::cout << CYAN << "DiamondTrap constructor with name called" << RESET;
	std::cout << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << CYAN << "DiamondTrap destructor called" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& other) {
	*this = other;
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap const&	DiamondTrap::operator=(DiamondTrap const& other) {
	if (this != &other) {
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

void	DiamondTrap::attack(std::string const& target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI() {
	std::cout << CYAN << "I am " << DiamondTrap::_name << " and my ClapTraps's name is ";
	std::cout << ClapTrap::_name << RESET << std::endl;
}
