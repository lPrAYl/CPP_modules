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
	Array<T>(Array& other);
	virtual ~Array();

	T&	operator[](int index);
	Array<T>&	operator=(Array<T>& other);

	unsigned int size();
};

template<typename T>
std::ostream& operator<<(std::ostream& out, Array<T> const& data);

#endif //ARRAY_HPP
