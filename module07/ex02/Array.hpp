#pragma once

#ifndef ARRAY_HPP
#define ARRAY_HPP

# include <iostream>

template<typename T>
class Array {
private:
	T*				_array;
	unsigned int	_size;

public:
	Array();
	Array(unsigned int);
	Array(Array& other);
	virtual ~Array();

	T&	operator[](unsigned int index);
	Array&	operator=(Array& other);

	unsigned int size() const;
};

# include "Array.tpp"

template<typename T>
std::ostream& operator<<(std::ostream& out, Array<T> const& data);

#endif //ARRAY_HPP
