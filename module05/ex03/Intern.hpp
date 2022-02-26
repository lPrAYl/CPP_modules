#pragma once

#ifndef INTERN_HPP
#define INTERN_HPP

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {
public:
	Intern();
	Intern(Intern const& other);
	~Intern();
	Intern& operator=(Intern const& other);

	Form*	makeForm(std::string const& name, std::string const& target);

	class WrongFormNameException: public std::exception {
	public:
		WrongFormNameException();
		~WrongFormNameException() throw();

		const char* what() const throw();
	};
};
#endif //INTERN_HPP
