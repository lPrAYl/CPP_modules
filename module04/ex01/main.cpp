#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main() {
	const Animal*	animals[4];

	for (int i = 0; i < 2; i++)
		animals[i] = new Cat;
	for (int i = 2; i < 4; i++)
		animals[i] = new Dog;
	std::cout << animals[0]->getType()  << std::endl;
	std::cout << animals[3]->getType() << std::endl;
	for (int i = 0; i < 4; i++)
		delete animals[i];

	return 0;
}
