#include "easyfind.hpp"

int	main() {
	std::vector<int> vector;
	for (int i = 0; i < 10; ++i)
		vector.push_back(i);
	easyfind(vector, 5);
	easyfind(vector, 20);


	std::list<int> list;
	for (int i = 0; i < 10; ++i)
		list.push_back(i);
	easyfind(list, 5);
	easyfind(list, 20);
}
