#include "Fixed.hpp"

const int	Fixed::fractionalBits = 8;

/*	Operation overload <<			*/
std::ostream& operator<< (std::ostream& os, const Fixed& raw) {
	os << raw.toFloat();
	return os;
}

/*		Default constructor			*/
Fixed::Fixed() {
	this->fixedPoint = 0;
	std::cout << "Default constructor called" << std::endl;
}

/*	Overload constructors			*/
Fixed::Fixed(const int	raw) {
	std::cout << "Int constructor called" << std::endl;
	this->fixedPoint = raw << fractionalBits;
}

Fixed::Fixed(const float	raw) {
	std::cout << "Float constructor called" << std::endl;
	this->fixedPoint = roundf(raw * (1 << fractionalBits));
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

float	Fixed::toFloat() const {
	return static_cast<float>(this->fixedPoint) / (1 << fractionalBits);
}

int		Fixed::toInt() const {
	return this->fixedPoint >> fractionalBits;
}
