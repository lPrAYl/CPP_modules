#include <iostream>

int main(int argc, char **argv) {
	if (argc > 1) {
		for (int i = 1; i < argc; i++) {
			for (int j = 0; argv[i][j]; j++) {
				if (isalpha(argv[i][j]))
					std::cout << static_cast<char>(toupper(argv[i][j]));
				else
					std::cout << argv[i][j];
			}
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}
