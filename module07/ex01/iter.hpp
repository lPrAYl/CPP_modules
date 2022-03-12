#pragma once

//#ifndef ITER_HPP
//#define ITER_HPP

# include <iostream>

template<typename T>
void	iter(T* array, int length, void (*func)(T&)) {
	for (int i = 0; i < length; ++i) {
		func(array[i]);
	}
	std::cout << std::endl;
}

template<typename T>
void	printArray(T elem) {
	std::cout << elem << " ";
}

template<typename T>
void	increment(T& elem) {
	++elem;
}

//#endif //ITER_HPP
