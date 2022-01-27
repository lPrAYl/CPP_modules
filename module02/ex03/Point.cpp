#include "Point.hpp"

Point::Point() : x(0), y(0) {
}

Point::~Point(){
}

Point::Point(const float x, const float y) : x(x), y(y) {
}

Point::Point(const Point& other) : x(other.x), y(other.y) {
}

Point const&	Point::operator=(const Point& other) const {
	Point	point(other);
	return *this;
}

Fixed	Point::getX() const {
	return this->x;
}

Fixed	Point::getY() const {
	return this->y;
}
