#include "Array.hpp"

template<typename T>
Array<T>::Array(): _array(), _size() {}

template<typename T>
Array<T>::Array(unsigned int size): _array(new T[size]), _size(size) {}

template<typename T>
Array<T>::~Array() { delete[] _array }

template<typename T>
Array<T>::Array(Array<T> &other) {
	_size = other._size;
	_array = new T[_size];
	for (int i = 0; i < _size; ++i)
		_array[i] = other._array[i];
}

template<typename T>
T&	Array<T>::operator[](int index) {
	if (index < 0 || index >= _size)
		throw std::out_of_range("Error: out of range");
	return array[index];
}

template<typename T>
Array<T>&	Array<T>::operator=(Array<T> &other) {
	if (this == &other)
		return *this;
	delete[] _array;
	_size = other._size;
	_array = new T[_size];
	for (int i = 0; i < _size; ++i)
		_array[i] = other._array[i];
	return *this;
}

template<typename T>
std::ostream& operator<<(std::ostream& out, Array<T> const& data) {
	int size = data._size;
	for (int i = 0; i < size; ++i)
		out << data[i];
	return out;
}
