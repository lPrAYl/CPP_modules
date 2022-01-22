#include "Fixed.hpp"

const int	Fixed::fractionalBits = 8;

/*		Default constructor			*/
Fixed::Fixed() {
	this->fixedPoint = 0;
	std::cout << "Default constructor called" << std::endl;
}

/*		Copy constructor			*/
Fixed::Fixed(const Fixed& other) {
	std::cout << "Copy constructor called" << std::endl;
	this->fixedPoint = other.getRawBits();

}

/*		Destructor					*/
Fixed::~Fixed() {
	std::cout << "Destuctor called" << std::endl;
}

/*		Operation overload =		*/
Fixed&	Fixed::operator=(const Fixed& other) {
	std::cout << "Assignation operator called" << std::endl;
	this->fixedPoint = other.getRawBits();
	return *this;
}

/*		Methods						*/
void	Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->fixedPoint = raw;
}

int		Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixedPoint;
}
