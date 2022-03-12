#include <iostream>

struct Data {
	int	i;
};

uintptr_t	serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

int	main() {
	Data*		data1 = new Data;
	Data*		data2;
	uintptr_t	ptr;

	data1->i = 42;
	std::cout << "data1->i\t" << data1->i << std::endl;
	std::cout << "data1\t\t" << data1 << std::endl;
	std::cout << "&data1\t\t" << &data1 << std::endl << std::endl;

	ptr = serialize(data1);
	data2 = deserialize(ptr);
	std::cout << "data2->i\t" << data2->i << std::endl;
	std::cout << "data2\t\t" << data2 << std::endl;
	std::cout << "&data2\t\t" << &data2 << std::endl;

	delete data1;
	
	return 0;
}
