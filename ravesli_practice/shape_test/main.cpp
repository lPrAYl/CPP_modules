#include <iostream>
#include <string>
#include <vector>

class	Point {
private:
	int	_x;
	int _y;
	int _z;

public:
	Point(): _x(0), _y(0), _z(0) {}
	Point(int x, int y, int z): _x(x), _y(y), _z(z) {}

	friend std::ostream& operator<<(std::ostream& out, Point const& p) {
		out << "Point(" << p._x << ", " << p._y << ", " << p._z << ")";
		return out;
	}
};

class	Shape {
public:
	virtual std::ostream& print(std::ostream& out) const = 0;

	friend std::ostream& operator<<(std::ostream& out, Shape const& p) {
		return p.print(out);
	}

	virtual ~Shape() {}
};

class	Triangle: public Shape {
private:
	Point	_p1;
	Point	_p2;
	Point	_p3;

public:
	Triangle(Point const& p1, Point const& p2, Point const& p3): _p1(p1), _p2(p2), _p3(p3) {}

	virtual std::ostream& print(std::ostream& out) const {
		out << "Triangle(" << _p1 << ", " << _p2 << ", " << _p3 << ")";
		return out;
	}

};

class	Circle: public Shape {
private:
	Point	_center;
	int		_radius;

public:
	Circle(Point const& center, int radius): _center(center), _radius(radius) {}

	virtual std::ostream& print(std::ostream& out) const {
		out << "Circle(" << _center << ", " << _radius << ")";
		return out;
	}

	int	getRadius() { return _radius; }
};

int	getLargestRadius(std::vector<Shape*> const& v) {
	int largestRadius {0};

	for (auto const& element : v) {
		if (Circle *c = dynamic_cast<Circle*>(element)) {
			if (c->getRadius() > largestRadius)
				largestRadius = c->getRadius();
		}
	}
	return largestRadius;
}

int	main() {
	Circle c(Point(1, 2, 3), 7);
	std::cout << c << std::endl;

	Triangle t(Point(1, 2, 3), Point(4, 5, 6), Point(7, 8, 9));
	std::cout << t << std::endl;

	std::vector<Shape*> v;
	v.push_back(new Circle(Point(1, 2, 3), 7));
	v.push_back(new Triangle(Point(1, 2, 3), Point(4, 5, 6), Point(7, 8, 9) ));
	v.push_back(new Circle(Point(4, 5, 6), 3));

	for (auto const& element : v)
		std::cout << *element << std::endl;

	std::cout << "The largest radius is: " << getLargestRadius(v) << std::endl;

	for (auto const& element : v)
		delete element;

	return 0;
}
