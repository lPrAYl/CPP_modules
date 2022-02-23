#include "Bureaucrat.hpp"

int main() {
	std::cout << BLUE << "CALL EXCEPTION UPON CONSTRUCTION" << RESET << std::endl;

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

	std::cout << BLUE << "COPY AND ASSIGN OVERLOAD" << RESET << std::endl;

	Bureaucrat bureaucrat_1("John", 1);
	Bureaucrat bureaucrat_2("Bill", 150);
	Bureaucrat bureaucrat_3 = bureaucrat_2;
	bureaucrat_1 = bureaucrat_2;

	std::cout << bureaucrat_1 << std::endl;
	std::cout << bureaucrat_2 << std::endl;
	std::cout << bureaucrat_3 << std::endl;

	std::cout << BLUE << "UP AND DOWN METHODS CALL" << RESET << std::endl;

	try {
		bureaucrat_1.gradeDown();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		bureaucrat_2.gradeDown();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << bureaucrat_1 << std::endl;
	std::cout << bureaucrat_2 << std::endl;

	return 0;
}
