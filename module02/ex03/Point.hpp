#pragma once

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
private:
	Fixed const	x;
	Fixed const	y;
public:
	Point();
	~Point();
	Point(const Point& other);
	Point(const float x, const float y);
	Point(const Fixed x, const Fixed y);

	Point const&	operator=(const Point& other) const;
	bool	operator==(const Point& other) const;

	Fixed	getX() const;
	Fixed	getY() const;
};

bool	bsp(Point const A, Point const B, Point const C, Point const point);

#endif
