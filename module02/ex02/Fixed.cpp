#include "Fixed.hpp"

const int	Fixed::fractionalBits = 8;

/*	Operation overload <<			*/
std::ostream& operator<< (std::ostream& os, const Fixed& raw) {
	os << raw.toFloat();
	return os;
}

/*		Default constructor			*/
Fixed::Fixed() : fixedPoint(0) {
	std::cout << "Default constructor called" << std::endl;
}

/*	Overload constructors			*/
Fixed::Fixed(const int	raw) {
	std::cout << "Int constructor called" << std::endl;
	fixedPoint = raw << fractionalBits;
}

Fixed::Fixed(const float	raw) {
	std::cout << "Float constructor called" << std::endl;
	fixedPoint = roundf(raw * (1 << fractionalBits));
}

/*		Copy constructor			*/
Fixed::Fixed(const Fixed& other) {
	std::cout << "Copy constructor called" << std::endl;
	fixedPoint = other.getRawBits();

}

/*		Destructor					*/
Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

/*		Operations overloads		*/
Fixed&	Fixed::operator=(const Fixed& other) {
	this->fixedPoint = other.getRawBits();
	return *this;
}

Fixed	Fixed::operator+(const Fixed& other) {
	Fixed	result;
	result.fixedPoint = this->fixedPoint + other.fixedPoint;
	return result;
}

Fixed	Fixed::operator-(const Fixed& other) {
	Fixed	result;
	result.fixedPoint = this->fixedPoint - other.fixedPoint;
	return result;
}

Fixed	Fixed::operator*(const Fixed &other) {
	Fixed	result;
	result.fixedPoint = (this->fixedPoint * other.fixedPoint) / (1 << fractionalBits);
	return result;
}

Fixed	Fixed::operator/(const Fixed &other) {
	Fixed	result;
	result.fixedPoint = (fixedPoint / other.fixedPoint) * (1 << fractionalBits);
	return result;
}
 
Fixed	Fixed::operator++(int) {
	Fixed	result(*this);
	this->fixedPoint += 1 << fractionalBits;
	return result;
}

Fixed&	Fixed::operator++() {
	this->fixedPoint += 1 << fractionalBits;
	return *this;
}

Fixed	Fixed::operator--(int) {
	Fixed	result(*this);
	this->fixedPoint--;
	return result;
}

Fixed&	Fixed::operator--() {
	this->fixedPoint--;
	return *this;
}

bool	Fixed::operator==(const Fixed& other) const {
	return this->fixedPoint == other.fixedPoint;
}
bool	Fixed::operator!=(const Fixed& other) const {
	return this->fixedPoint != other.fixedPoint;
}
bool	Fixed::operator<(const Fixed& other) const {
	return this->fixedPoint < other.fixedPoint;
}
bool	Fixed::operator>(const Fixed& other) const {
	return this->fixedPoint > other.fixedPoint;
}
bool	Fixed::operator<=(const Fixed& other) const {
	return this->fixedPoint <= other.fixedPoint;
}
bool	Fixed::operator>=(const Fixed& other) const {
	return this->fixedPoint >= other.fixedPoint;
}

/*	static member functions overloads	*/
Fixed&	Fixed::min(Fixed& obj1, Fixed& obj2) {
	return obj1 < obj2 ? obj1 : obj2;
}

Fixed&	Fixed::max(Fixed& obj1, Fixed& obj2) {
	return obj1 > obj2 ? obj1 : obj2;
}

const Fixed&	Fixed::min(const Fixed& obj1, const Fixed& obj2) {
	return obj1 < obj2 ? obj1 : obj2;
}

const Fixed&	Fixed::max(const Fixed& obj1, const Fixed& obj2) {
	return obj1 > obj2 ? obj1 : obj2;
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
