#pragma once

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <ctime>

class RobotomyRequestForm: public Form {
private:
	std::string	_target;
	RobotomyRequestForm();

public:
	RobotomyRequestForm(std::string const& target);
	RobotomyRequestForm(RobotomyRequestForm const& other);
	~RobotomyRequestForm();
	RobotomyRequestForm& operator=(RobotomyRequestForm const& other);

	virtual void execute(Bureaucrat const& executor) const;
	std::string const& getTarget() const;
};

std::ostream& operator<<(std::ostream& out, RobotomyRequestForm const& form);

#endif //ROBOTOMYREQUESTFORM_HPP
