#include "ScalarConversion.hpp"

int	main(int argc, char* argv[]) {
	if (argc != 2)
		std::cout << RED << "One argument needed" << RESET << std::endl;
	else {
		ScalarConversion	conversion(argv[1]);
	}
	return 0;
}
