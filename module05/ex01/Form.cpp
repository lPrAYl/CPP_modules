#include "Form.hpp"

Form::Form(): _name("Trash"), _isSigned(false),
				_gradeToSign(150), _gradeToExecute(150) {}

Form::Form(std::string const& name, int gradeToSign, int gradeToExecute):
											_name(name), _isSigned(false) {
	try {
		if (gradeToSign > 150 || gradeToExecute > 150)
			throw GradeTooLowException();
		if (gradeToSign < 1 || gradeToExecute < 1)
			throw GradeTooHighException();
		_gradeToSign = gradeToSign;
		_gradeToExecute = gradeToExecute;
	} catch (std::exception& e) {
		_gradeToSign = 1;
		_gradeToExecute = 1;
		std::cout << e.what() << std::endl;
	}
}

Form::Form(const Form &other) {
	//_name = other._name;
	_isSigned = other._isSigned;
	_gradeToSign = other._gradeToSign;
	_gradeToExecute = other._gradeToExecute;
}

Form::~Form() {}

Form&	Form::operator=(const Form &other) {
	if (this == &other)
		return *this;
	//_name = other._name;
	_isSigned = other._isSigned;
	_gradeToSign = other._gradeToSign;
	_gradeToExecute = other._gradeToExecute;
	return *this;
}

/****************************** Getters ******************************/

std::string const&	Form::getName() const { return _name; }

bool				Form::getSigned() const { return _isSigned; }

int					Form::getGradeToSign() const { return _gradeToSign; }

int					Form::getGradeToExecute() const { return _gradeToExecute; }

/****************************** Methods ******************************/

void			Form::beSigned(const Bureaucrat &bureaucrat) {
	if (_isSigned == true)
		return ;
	if (bureaucrat.getGrade() <= _gradeToSign) {
		_isSigned = true;
		std::cout << GREEN << bureaucrat.getName() << RESET << " signs ";
		std::cout << GREEN << _name << RESET << std::endl;
	} else
		throw GradeTooLowException();
}

std::ostream&	operator<<(std::ostream& out, Form const& form) {
	using namespace std;
	cout << boolalpha;
	out  << setiosflags(std::ios::left) << setw(20) << "Form name:" << GREEN
											<< form.getName() << RESET << endl;
	out  << setiosflags(std::ios::left) << setw(20) <<"Form is singed:"
		<< (form.getSigned() ? GREEN : RED) << form.getSigned() << RESET << endl;
	out  << setiosflags(std::ios::left) << setw(20) << "Grade to sign:" << GREEN
									<< form.getGradeToSign() << RESET << endl;
	out  << setiosflags(std::ios::left) << setw(20) << "Grade to execute:" << GREEN
		 							<< form.getGradeToExecute() << RESET << endl;
	return out;
}

/****************************** Exceptions ******************************/

Form::GradeTooHighException::GradeTooHighException() {}
Form::GradeTooHighException::~GradeTooHighException() throw() {}

Form::GradeTooLowException::GradeTooLowException() {}
Form::GradeTooLowException::~GradeTooLowException() throw() {}

const char* Form::GradeTooHighException::what() const throw() {
	return "\x1B[0;91mThe grade is too high!\033[0m";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "\x1B[0;95mThe grade is too low!\033[0m";
}
