#include "easyfind.hpp"

template<typename T>
void	easyfind(T& container, int toFind) {
	typename T::iterator it = std::find(container.begin(), container.end(), toFind);
	try {
		if (it == container.end())
			throw std::exception();
		std::cout << GREEN << "Found: " << *it << std::endl;
	} catch (std::exception& e) {
		std::cout << RED << "Not found" << RESET << std::endl;
	}
}
