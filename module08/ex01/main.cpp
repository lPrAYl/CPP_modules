#include "Span.hpp"

int	main() {
	Span span(5);

	span.addNumber(1);
	span.addNumber(2);
	span.addNumber(21);
	span.addNumber(42);
	span.addNumber(12);
	span.addNumber(24);
	std::cout << span << std::endl;
	std::cout << span.longestSpan() << std::endl;
	std::cout << span.shortestSpan() << std::endl;

	return 0;
}
