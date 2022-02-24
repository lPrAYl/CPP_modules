#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target):
	Form("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(
		const PresidentialPardonForm &other): _target(other._target) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(
		const PresidentialPardonForm &other) {
	if (this == &other)
		return *this;
	_target = other._target;
	return *this;
}

std::string const& PresidentialPardonForm::getTarget() const { return _target; }

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	Form::execute(executor);
	std::cout << CYAN << _target << RESET << " has been pardoned by Zafod ";
	std::cout << "Beeblerbox" << std::endl;
}

std::ostream& operator<<(std::ostream& out, PresidentialPardonForm const& form) {
	out << "This is PresidentialPardonForm and its target is ";
	out << form.getTarget();
	return out;
}
