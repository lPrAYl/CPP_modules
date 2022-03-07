#include "ScalarConversion.hpp"

ScalarConversion::ScalarConversion(char* str): _str(str) {
	getCommon(str);
}

ScalarConversion::ScalarConversion(const ScalarConversion& other) {
	*this = other;
}

ScalarConversion const& ScalarConversion::operator=(const ScalarConversion& other) {
	if (this == &other)
		return *this;
	_str = other._str;
	return *this;
}

ScalarConversion::~ScalarConversion() {}

void	ScalarConversion::getChar(char *str) {
	try {
		_conversionToChar = static_cast<char>(std::stoi(str));
		if (!isprint(_conversionToChar))
			std::cout << "char:\t" << YELLOW << "Non displayable" << RESET << std::endl;
		else
			std::cout << "char:\t" << GREEN << static_cast<char*>(str) << RESET << std::endl;
	} catch (std::exception& e) {
		std::cout << "char:\t" << RED << "impossible" << RESET << std::endl;
	}
}

void	ScalarConversion::getInt(char *str) {
	try {
		_conversionToInt = static_cast<int>(std::stoi(str));
		std::cout << "int:\t" << GREEN << _conversionToInt << RESET << std::endl;
	} catch (std::exception& e) {
		std::cout << "int:\t" << RED << "impossible" << RESET << std::endl;
	}
}

void	ScalarConversion::getFloat(char *str) {
	try {
		_conversionToFloat = static_cast<float>(std::stof(str));
		std::cout << "float:\t" << GREEN << _conversionToFloat << "f" << RESET << std::endl;
	} catch (std::exception& e) {
		std::cout << "float:\t" << RED << "impossible" << RESET << std::endl;
	}
}

void	ScalarConversion::getDouble(char *str) {
	try {
		_conversionToDouble = static_cast<double>(std::stod(str));
		std::cout << "double:\t" << GREEN << _conversionToDouble << RESET << std::endl;
	} catch (std::exception& e) {
		std::cout << "double:\t" << RED << "impossible" << RESET << std::endl;
	}
}

void	ScalarConversion::getCommon(char *str) {
	std::cout << std::setprecision(1) << std::fixed;
	getChar(str);
	getInt(str);
	getFloat(str);
	getDouble(str);
}
