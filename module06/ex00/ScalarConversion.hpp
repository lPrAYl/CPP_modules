#pragma once

#ifndef SCALARCONVERSION_HPP
#define SCALARCONVERSION_HPP

# include "colors.hpp"
# include <iostream>
# include <string>
# include <exception>
# include <iomanip>

class ScalarConversion {
private:
	char	*_str;
	char	_conversionToChar;
	long	_conversionToInt;
	float	_conversionToFloat;
	double	_conversionToDouble;

	void	getCommon(char* str);
public:
	ScalarConversion(char* str);
	ScalarConversion(ScalarConversion const&);
	ScalarConversion const& operator=(ScalarConversion const&);
	~ScalarConversion();

	void	getChar(char *str);
	void	getInt(char *str);
	void	getFloat(char *str);
	void	getDouble(char *str);
};

#endif //_SCALARCONVERSION_HPP
