#pragma once

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

# include <iostream>
# include <string>
# include <iomanip>
# include "colors.hpp"

class Bureaucrat {
private:
	std::string const	_name;
	int 				_grade;

public:
	Bureaucrat();
	Bureaucrat(std::string const& name, int grade);
	~Bureaucrat();

	Bureaucrat(Bureaucrat const& other);
	Bureaucrat& operator=(Bureaucrat const& other);

	std::string const&	getName() const;
	int 				getGrade() const;
	void				gradeUp();
	void				gradeDown();

	class GradeTooHighException: public std::exception {
	public:
		GradeTooHighException();
		~GradeTooHighException() throw();

		const char* what() const throw();
	};

	class GradeTooLowException: public std::exception {
	public:
		GradeTooLowException();
		~GradeTooLowException() throw();

		const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& out, Bureaucrat const& bureaucrat);

#endif //BUREAUCRAT_H
