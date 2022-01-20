#include "Karen.hpp"

int	main(int argc, char **argv) {
	if (argc == 2) {
		Karen	karen;

		karen.complain(argv[1]);
	}
	else {
		std::cout << "\033[31;1mUsage: ./karenFilter <level>\033[0";
		std::cout << std::endl;
	}
	return 0;
}
