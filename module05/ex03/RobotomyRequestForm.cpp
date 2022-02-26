#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target):
	Form("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other):
	_target(other._target) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(
		const RobotomyRequestForm &other) {
	if (this == &other)
		return *this;
	_target = other._target;
	return *this;
}

std::string const& RobotomyRequestForm::getTarget() const { return _target; }

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	Form::execute(executor);
	std::cout << "...Make some drilling noises..." << std::endl;
	srand(time(NULL));
	if (rand() % 2) {
		std::cout << CYAN << _target << RESET << " robotomized ";
		std::cout << BG_GREEN << "successful" << RESET << std::endl;
	}
	else {
		std::cout << CYAN << _target << RESET <<" robotomized ";
		std::cout << BG_RED << "failed" << RESET << std::endl;
	}
}

std::ostream& operator<<(std::ostream& out, RobotomyRequestForm const& form) {
	out << "This is RobotomyRequestForm and its target is ";
	out << form.getTarget();
	return out;
}
