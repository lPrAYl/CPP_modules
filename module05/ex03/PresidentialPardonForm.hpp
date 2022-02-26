#pragma once

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm: public Form {
private:
	std::string	_target;
	PresidentialPardonForm();

public:
	PresidentialPardonForm(std::string const& target);
	PresidentialPardonForm(PresidentialPardonForm const& other);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm& operator=(PresidentialPardonForm const& other);

	virtual void execute(Bureaucrat const& executor) const;
	std::string const& getTarget() const;
};

std::ostream& operator<<(std::ostream& out, PresidentialPardonForm const& form);

#endif //PRESIDENTIALPARDONFORM_HPP
