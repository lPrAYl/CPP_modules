#include "Fixed.hpp"

const int	Fixed::fractionalBits = 8;

/*	Operation overload <<			*/
std::ostream& operator<< (std::ostream& os, const Fixed& raw) {
	os << raw.toFloat();
	return os;
}

/*		Default constructor			*/
Fixed::Fixed() : fixedPoint(0) {
}

/*	Overload constructors			*/
Fixed::Fixed(const int	raw) {
	fixedPoint = raw << fractionalBits;
}

Fixed::Fixed(const float	raw) {
	fixedPoint = roundf(raw * (1 << fractionalBits));
}

/*		Copy constructor			*/
Fixed::Fixed(const Fixed& other) {
	fixedPoint = other.getRawBits();

}

/*		Destructor					*/
Fixed::~Fixed() {
}

/*		Operations overloads		*/
Fixed const&	Fixed::operator=(const Fixed& other) {
	this->fixedPoint = other.getRawBits();
	return *this;
}

Fixed	Fixed::operator+(const Fixed& other) {
	Fixed	result;
	result.fixedPoint = this->fixedPoint + other.fixedPoint;
	return result;
}

Fixed	Fixed::operator-(const Fixed& other) const {
	Fixed	result;
	result.fixedPoint = this->fixedPoint - other.fixedPoint;
	return result;
}

Fixed	Fixed::operator*(const Fixed &other) const {
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
	this->fixedPoint++;
	return result;
}

Fixed&	Fixed::operator++() {
	this->fixedPoint++;
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
	this->fixedPoint = raw;
}

int		Fixed::getRawBits() const {
	return this->fixedPoint;
}

float	Fixed::toFloat() const {
	return static_cast<float>(this->fixedPoint) / (1 << fractionalBits);
}

int		Fixed::toInt() const {
	return this->fixedPoint >> fractionalBits;
}
