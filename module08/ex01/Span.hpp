#ifndef SPAN_HPP
#define SPAN_HPP

# include <iostream>
# include <vector>
# include "colors.hpp"

class Span {
private:
	unsigned int 		_maxSize;
	std::vector<int>	_array;
	Span();

public:
	Span(unsigned int num);
	Span(Span const& other);
	~Span();
	Span& operator=(Span const& other);

	void	addNumber(int num);
	int		shortestSpan();
	int		longestSpan();
	std::vector<int> const	getArray() const;

	class SpanException: public std::exception {
	private:
		std::string	_error;

	public:
		SpanException(std::string error);
		virtual ~SpanException() throw();

		const char* what() const throw();
	};

};

std::ostream& operator<<(std::ostream& out, Span const& span);

#endif //SPAN_HPP
