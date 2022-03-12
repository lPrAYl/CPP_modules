#include "iter.hpp"

int main() {
	int array[] = {1, 2, 3, 4, 5};

	::iter(array, 5, ::printArray);
	::iter(array, 4, ::increment);
	::iter(array, 5, ::printArray);

	std::string arrayStr[] = {"templates", "are", "cool"};
	::iter(arrayStr, 3, ::printArray);
}
