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

	Point&	operator=(const Point& other);
	bool	operator==(const Point& other) const;

	Fixed	getX() const;
	Fixed	getY() const;
};

std::ostream&	operator<<(std::ostream& os, const Point& point);
bool	bsp(Point const A, Point const B, Point const C, Point const point);

#endif
