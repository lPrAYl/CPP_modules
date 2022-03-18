#include "Span.hpp"

Span::Span(unsigned int num): _maxSize(num) {}

Span::~Span() {}

Span::Span(const Span &other): _maxSize(other._maxSize), _array(other._array) {}

Span& Span::operator=(const Span &other) {
	if (this == &other)
		return *this;
	_array = other._array;
	_maxSize = other._maxSize;
	return *this;
}

void Span::addNumber(int num) {
	try {
		if (_maxSize == _array.size())
			throw SpanException("Error: array already full");
		_array.push_back(num);
	} catch (SpanException& e) {
		std::cout << RED << e.what() << RESET<< std::endl;
	}
}

int	Span::shortestSpan() {
	try {
		if (_array.size() < 2)
			throw SpanException("Error: array is too short");
		std::sort(_array.begin(), _array.end());
		int shortest = std::numeric_limits<int>::max();
		std::vector<int>::iterator previous = _array.begin();
		std::vector<int>::iterator current = _array.begin() + 1;
		for (; current != _array.end(); ++current, ++previous)
			if (*current - *previous < shortest)
				shortest = *current - *previous;
		return shortest;
	} catch (SpanException& e) {
		std::cout << YELLOW << e.what() << RESET << std::endl;
	}
	return 0;
}

int Span::longestSpan() {
	try {
		if (_array.size() < 2)
			throw SpanException("Error: array is too short");
		int max = *std::max_element(_array.begin(), _array.end());
		int min = *std::min_element(_array.begin(), _array.end());
		return max - min;
	} catch (SpanException& e) {
		std::cout << YELLOW << e.what() << RESET << std::endl;
	}
	return 0;
}

std::vector<int> const	Span::getArray() const { return _array; }

std::ostream& operator<<(std::ostream& out, Span const& span) {
	for (unsigned int i = 0; i < span.getArray().size(); ++i)
		out << span.getArray().at(i) << " ";
	return out;
}

Span::SpanException::SpanException(std::string error): _error(error) {}

Span::SpanException::~SpanException() throw() {}

const char* Span::SpanException::what() const throw() {
	return _error.c_str();
}
