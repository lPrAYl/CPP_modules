#include "Karen.hpp"

void	Karen::debug(void) {
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-";
	std::cout << "pickle-special-ketchup burger. I just love it!";
	std::cout << std::endl;
}

void	Karen::info(void) {
	std::cout << "I cannot believe adding extra bacon cost more money. ";
	std::cout << "You don't put enough! ";
	std::cout << "If you did I would not have to ask for it!";
	std::cout << std::endl;
}

void	Karen::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I've been coming here for years and you just started working "
															"here last month.";
	std::cout << std::endl;
}

void	Karen::error(void) {
	std::cout << "This is unacceptable, I want to speak the manager now.";
	std::cout << std::endl;
}

void	Karen::complain(std::string level) {
	void	(Karen::*functionPtr[])(void) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};

	std::string	array[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i = 0;
	while (!array[i].empty() && array[i] != level)
		i++;
	switch (i) {
	case 0:
		std::cout << "\033[34;1m[ Debug ]\033[0m" << std::endl;
		(this->*functionPtr[0])();
	case 1:
		std::cout << "\033[32;1m[ INFO ]\033[0m" << std::endl;
		(this->*functionPtr[1])();
	case 2:
		std::cout << "\033[33;1m[ WARNING ]\033[0m" << std::endl;
		(this->*functionPtr[2])();
	case 3:
		std::cout << "\033[31;1m[ ERROR ]\033[0m" << std::endl;
		(this->*functionPtr[3])();
		break;
	default:
		std::cout << "\033[35;1mWrong level. ";
		std::cout << "Usage: \033[34;1mDEBUG\033[0m, \033[32;1mINFO\033[0m, ";
		std::cout << "\033[33;1mWARNING\033[0m or \033[31;1mERROR\033[0m";
		std::cout << std::endl;
		break;
	}
}

Karen::Karen() {
}

Karen::~Karen() {
}
