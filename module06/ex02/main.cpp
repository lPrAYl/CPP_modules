#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate() {
	srand(time(NULL));
	int num = rand() % 3 + 1;

	switch (num) {
		case 1: return new A;
		case 2: return new B;
		case 3: return new C;
	}
	return NULL;
}

void	identify(Base* p) {
	(dynamic_cast<A*>(p) != nullptr) ? std::cout << 'A' << std::endl : 0;
	(dynamic_cast<B*>(p) != nullptr) ? std::cout << 'B' << std::endl : 0;
	(dynamic_cast<C*>(p) != nullptr) ? std::cout << 'C' << std::endl : 0;
}

void	identify(Base& p) {
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << 'A' << std::endl;
	} catch (std::bad_cast) {}

	try {
		(void)dynamic_cast<B&>(p);
		std::cout << 'B' << std::endl;
	} catch (std::bad_cast) {}

	try {
		(void)dynamic_cast<C&>(p);
		std::cout << 'C' << std::endl;
	} catch (std::bad_cast) {}
}

int	main() {
	Base *base = generate();
	identify(base);
	identify(*base);

	delete base;
	return 0;
}
