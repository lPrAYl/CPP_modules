#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("NoName"), _grade(150) {}

Bureaucrat::Bureaucrat(const std::string &name, int grade): _name(name), _grade(grade) {
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat &other): _name(other._name), _grade(other._grade) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other) {
	if (this == &other)
		return *this;
	const_cast<std::string&>(_name) = other._name;
	_grade = other._grade;
	return *this;
}

std::string const&	Bureaucrat::getName() const { return _name; }

int Bureaucrat::getGrade() const { return _grade; }

void	Bureaucrat::gradeUp() {
	if (_grade == 1)
		throw GradeTooHighException();
	--_grade;
}

void	Bureaucrat::gradeDown() {
	if (_grade == 150)
		throw GradeTooLowException();
	++_grade;
}

std::ostream& operator<<(std::ostream& out, Bureaucrat const& bureaucrat) {
	out << CYAN << bureaucrat.getName() << RESET << ", bureaucrat grade ";
	out << YELLOW << bureaucrat.getGrade() << RESET << std::endl;
	return out;
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {}
Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

Bureaucrat::GradeTooLowException::GradeTooLowException() {}
Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "\x1B[0;91mThe grade is too high!\033[0m";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "\x1B[0;95mThe grade is too low!\033[0m";
}
