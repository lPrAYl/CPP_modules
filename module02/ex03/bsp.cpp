#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed	aX = a.getX();
	Fixed	aY = a.getY();
	Fixed	bX = b.getX();
	Fixed	bY = b.getY();
	Fixed	cX = c.getX();
	Fixed	cY = c.getY();
	Fixed	pX = point.getX();
	Fixed	pY = point.getY();

	Fixed	aZ = (pX - aX) * (bY - aY) - (pY - aY) * (bX - aX);
	Fixed	bZ = (pX - bX) * (cY - bY) - (pY - bY) * (cX - bX);
	Fixed	cZ = (pX - cX) * (aY - cY) - (pY - cY) * (aX - cX);

	return ((aZ > 0 && bZ > 0 && cZ > 0) || (aZ < 0 && bZ < 0 && cZ < 0));
}
