#pragma once

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationFrom: public Form {
private:
	std::string	_target;
	ShrubberyCreationFrom();

public:
	ShrubberyCreationFrom(std::string const& target);
	ShrubberyCreationFrom(ShrubberyCreationFrom const& other);
	virtual ~ShrubberyCreationFrom();
	ShrubberyCreationFrom& operator=(ShrubberyCreationFrom const& other);

	virtual void execute(const Bureaucrat &) const;
	std::string const& getTarget() const;
};

std::ostream& operator<<(std::ostream& out, ShrubberyCreationFrom const& form);

#endif //SHRUBBERYCREATIONFORM_HPP
