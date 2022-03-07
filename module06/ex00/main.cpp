#include "ScalarConversion.hpp"

int	main(int argc, char* argv[]) {
	if (argc != 2)
		std::cout << RED << "One argument needed" << RESET << std::endl;
	else {
		ScalarConversion	conversion(argv[1]);
	}

	std::cout << static_cast<char>("as") << std::endl;
	return 0;
}

