#include "Bureaucrat.hpp"

int main() {
	std::cout << CYAN << "CALL EXCEPTION UPON CONSTRUCTION" << RESET << std::endl;
	try {
		Bureaucrat tooHigh("tooHigh", 0);
	} catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat tooLow("tooLow", 151);
	} catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << CYAN << "COPY AND ASSIGN OVERLOAD" << RESET << std::endl;

	return 0;
}
