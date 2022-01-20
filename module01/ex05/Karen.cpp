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

// static int	hashLevel(std::string level) {
// 	int	hash = 0;
// 	int	len = level.length();

// 	for (int i = 0; i < len; i++)
// 		hash += (level[i] - 65) * i;

// 	std::cout << hash << std::endl;
// 	return hash ;
// }

void	Karen::complain(std::string level) {
	void	(Karen::*functionPtr[])(void) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};

	switch (level[0]) {
	case 'D':
		(this->*functionPtr[0])();
		break;
	case 'I':
		(this->*functionPtr[1])();
		break;
	case 'W':
		(this->*functionPtr[2])();
		break;
	default:
		(this->*functionPtr[3])();
		break;
	}
}

Karen::Karen() {
}

Karen::~Karen() {
}