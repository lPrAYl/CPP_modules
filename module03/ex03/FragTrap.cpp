#include "FragTrap.hpp"

FragTrap::FragTrap() {
	this->_name = "NoName";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << PINK << "FragTrap default constructor called" << RESET;
	std::cout << std::endl;
}

FragTrap::FragTrap(std::string name) {
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << PINK << "FragTrap constructor with name called" << RESET;
	std::cout << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << PINK << "FragTrap destructor called" << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) {
	*this = other;
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap const&	FragTrap::operator=(FragTrap const& other) {
	if (this != &other) {
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

void	FragTrap::highFiveGuys() {
	std::cout << PINK << "High five guys!" << RESET << std::endl;
}
