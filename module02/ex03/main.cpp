#include "Point.hpp"

int	main () {
	Point	a(0.1f, 4.1f);
	Point	b(3.1f, 0.1f);
	Point	c(0.1f, 0.1f);
	Point	point(1, 1);

	if (bsp(a, b, c, point))
		std::cout << "The point is inside of the triangle" << std::endl;
	else
		std::cout << "The point is not inside of the triangle" << std::endl;

	return 0;
}
