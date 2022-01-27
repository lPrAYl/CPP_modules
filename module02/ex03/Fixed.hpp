#pragma once

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					fixedPoint;
	static const int	fractionalBits;
public:
	/*	Default constructor		*/
	Fixed();
	/*	Overload consrtuctor	*/
	Fixed(const int raw);
	Fixed(const float raw);
	/*	Copy constructor		*/
	Fixed(const Fixed& other);
	/*	Destructor				*/
	~Fixed();

	/*	Methods					*/
	int		getRawBits() const;
	void	setRawBits(int const raw);

	float	toFloat() const;
	int		toInt() const;

	/*	Operations overloads		*/
	Fixed const& operator=(const Fixed& other);
	Fixed operator+(const Fixed& other);
	Fixed operator+();
	Fixed operator-(const Fixed& other) const;
	Fixed operator-();
	Fixed operator*(const Fixed& other) const;
	Fixed operator/(const Fixed& other);

	Fixed operator++(int);
	Fixed& operator++();
	Fixed operator--(int);
	Fixed& operator--();

	bool	operator<(const Fixed& other) const;
	bool	operator>(const Fixed& other) const;
	bool	operator==(const Fixed& other) const;
	bool	operator!=(const Fixed& other) const;
	bool	operator<=(const Fixed& other) const;
	bool	operator>=(const Fixed& other) const;

	/*	static member functions overloads	*/
	static Fixed&		max(Fixed& obj1, Fixed& obj2);
	static Fixed&		min(Fixed& obj1, Fixed& obj2);
	static const Fixed&	max(const Fixed& obj1, const Fixed& obj2);
	static const Fixed&	min(const Fixed& obj1, const Fixed& obj2);
};

std::ostream& operator<< (std::ostream& os, const Fixed& raw);

#endif
