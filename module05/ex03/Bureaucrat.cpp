#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("NoName"), _grade(150) {}

Bureaucrat::Bureaucrat(const std::string &name, int grade): _name(name), _grade(grade) {
	try {
		if (grade < 1)
			throw GradeTooHighException();
		if (grade > 150)
			throw GradeTooLowException();
		_grade = grade;
	} catch (std::exception& e) {
		_grade = 150;
		std::cout << e.what() << std::endl;
	}
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat &other): _name(other._name), _grade(other._grade) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other) {
	if (this == &other)
		return *this;
	_grade = other._grade;
	return *this;
}

std::string const&	Bureaucrat::getName() const { return _name; }

int Bureaucrat::getGrade() const { return _grade; }

void	Bureaucrat::gradeUp() {
	try {
		if (_grade == 1)
			throw GradeTooHighException();
		--_grade;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}

void	Bureaucrat::gradeDown() {
	try {
		if (_grade == 150)
			throw GradeTooLowException();
		++_grade;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}

void	Bureaucrat::signForm(Form& form) const {
	try {
		form.beSigned(*this);
	} catch (Bureaucrat::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(Form& form) const {
	try {
		form.execute(*this);
	} catch (Bureaucrat::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	} catch (Form::FormIsNotSignedException& e) {
		std::cout << e.what() << std::endl;
	} catch (Form::FormNotExistException& e) {
		std::cout << e.what() << std::endl;
	} catch (...) {
		std::cout << "Hello" << std::endl;
	}
}

std::ostream& operator<<(std::ostream& out, Bureaucrat const& bureaucrat) {
	out << CYAN << bureaucrat.getName() << RESET << ", bureaucrat grade ";
	out << YELLOW << bureaucrat.getGrade() << RESET;
	return out;
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {}
Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

Bureaucrat::GradeTooLowException::GradeTooLowException() {}
Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "\x1B[0;91mBureaucrat grade is too high!\033[0m";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "\x1B[0;95mBureaucrat grade is too low!\033[0m";
}
