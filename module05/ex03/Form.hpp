#pragma once

#ifndef FORM_HPP
#define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
	std::string const	_name;
	bool				_isSigned;
	int			 		_gradeToSign;
	int					_gradeToExecute;

public:
	Form();
	Form(std::string const& name, int gradeToSign, int gradeToExecute);
	virtual ~Form();
	Form(Form const& ohter);
	Form& operator=(Form const& other);

	std::string const&	getName() const;
	bool 				getSigned() const;
	void 				beSigned(Bureaucrat const&);
	int					getGradeToSign() const;
	int					getGradeToExecute() const;
	virtual void		execute(Bureaucrat const&) const = 0;

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

	class FormIsNotSignedException: public std::exception {
	public:
		FormIsNotSignedException();
		~FormIsNotSignedException() throw();

		const char* what() const throw();
	};

	class FormNotExistException: public std::exception {
	public:
		FormNotExistException();
		~FormNotExistException() throw();

		const char* what() const throw();

	};
};

std::ostream& operator<<(std::ostream& out, Form const& form);

#endif //FORM_HPP
