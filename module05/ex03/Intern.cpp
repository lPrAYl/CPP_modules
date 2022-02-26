#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern &other) {
	*this = other;
}

Intern& Intern::operator=(const Intern &other) {
	if (this == &other)
		return *this;
	return *this;
}

Form* Intern::makeForm(const std::string &name, const std::string &target) {
	Form	*knownForms[3] = {
			new PresidentialPardonForm(target),
			new RobotomyRequestForm(target),
			new ShrubberyCreationFrom(target)
	};
	for (int i = 0; i < 3; ++i) {
		if (knownForms[i]->getName() == name) {
			std::cout << "Intern has been created " << BG_GREEN;
			std::cout << name << RESET << std::endl;
			for (int j = 0; j < 3; ++j) {
				if (j == i)
					continue ;
				delete knownForms[j];
			}
			return (knownForms[i]);
		}
	}
	for (int i = 0; i < 3; ++i)
		delete knownForms[i];
	throw WrongFormNameException();
}

Intern::WrongFormNameException::WrongFormNameException() {}

Intern::WrongFormNameException::~WrongFormNameException() throw() {}

const char* Intern::WrongFormNameException::what() const throw() {
	return "\x1B[0;91mIntern couldn't create this form\033[0m";
}
