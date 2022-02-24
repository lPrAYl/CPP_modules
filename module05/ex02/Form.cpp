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
		std::string	info;
		if (gradeToSign > 150 || gradeToSign < 1) {
			_gradeToSign = 1;
			info = "\x1B[0;91mSigning\033[0m";
		} else
			_gradeToSign = gradeToSign;
		if (gradeToExecute > 150 || gradeToExecute < 1) {
			_gradeToExecute = 1;
			if (!info.empty())
				info = "\x1B[0;91mSigning and Executing\033[0m";
			else
				info = "\x1B[0;91mExecuting\033[0m";
		} else
			_gradeToExecute = gradeToExecute;
		std::cout << info << e.what() << std::endl;
	}
}

Form::Form(const Form &other) {
	_isSigned = other._isSigned;
	_gradeToSign = other._gradeToSign;
	_gradeToExecute = other._gradeToExecute;
}

Form::~Form() {}

Form&	Form::operator=(const Form &other) {
	if (this == &other)
		return *this;
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

void	Form::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() <= _gradeToSign && !_isSigned) {
		_isSigned = true;
		std::cout << BLUE << bureaucrat.getName() << RESET << " signed ";
		std::cout << YELLOW << _name << RESET << std::endl;
	} else if (_isSigned) {
		std::cout << BLUE << bureaucrat.getName() << RESET << " couldn't sign ";
		std::cout << "this document because ";
		std::cout << YELLOW << _name << RESET << " is already signed!" << std::endl;
	}
	else {
		std::cout << BLUE << bureaucrat.getName() << RESET << " couldn't sign ";
		std::cout << YELLOW << _name << RESET << " because ";
		throw Bureaucrat::GradeTooLowException();
	}
}

void	Form::execute(const Bureaucrat &executor) const {
	if (!_isSigned) {
		std::cout << BLUE << executor.getName() << RESET << " couldn't execute ";
		std::cout << YELLOW << _name << RESET << " because ";
		throw FormIsNotSignedException();
	}
	if (executor.getGrade() > _gradeToExecute) {
		std::cout << BLUE << executor.getName() << RESET << " couldn't execute ";
		std::cout << YELLOW << _name << RESET << " because ";
		throw Bureaucrat::GradeTooLowException();
	}
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
		 							<< form.getGradeToExecute() << RESET;
	return out;
}

/****************************** Exceptions ******************************/

Form::GradeTooHighException::GradeTooHighException() {}
Form::GradeTooHighException::~GradeTooHighException() throw() {}

Form::GradeTooLowException::GradeTooLowException() {}
Form::GradeTooLowException::~GradeTooLowException() throw() {}

Form::FormIsNotSignedException::FormIsNotSignedException() {}
Form::FormIsNotSignedException::~FormIsNotSignedException() throw() {}

const char* Form::GradeTooHighException::what() const throw() {
	return "\x1B[0;91m grade is too high!\033[0m";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "\x1B[0;95m grade is too low!\033[0m";
}

const char* Form::FormIsNotSignedException::what() const throw() {
	return "\x1B[0;91mThe form has not been signed!\033[0m";
}
