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

	/*	Operation overload =	*/
	Fixed& operator=(const Fixed& other);
};

std::ostream& operator<< (std::ostream& os, const Fixed& raw);

#endif
