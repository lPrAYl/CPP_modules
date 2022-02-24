#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {
	Bureaucrat	bureaucrat1("Alex", 150);
	Bureaucrat	bureaucrat2("John", 75);
	Bureaucrat	bureaucrat3("Bob", 1);

	PresidentialPardonForm	presidentialPardonForm("PresidentialPardonForm");
	ShrubberyCreationFrom	shrubberyCreationFrom("ShrubberyCreationFrom");
	RobotomyRequestForm		robotomyRequestForm("RobotomyRequestForm");

	bureaucrat1.signForm(presidentialPardonForm);
	bureaucrat1.signForm(shrubberyCreationFrom);
	bureaucrat1.signForm(robotomyRequestForm);
	bureaucrat1.executeForm(presidentialPardonForm);
	bureaucrat1.executeForm(shrubberyCreationFrom);
	bureaucrat1.executeForm(robotomyRequestForm);
	std::cout << "------------------------------------------------------------";
	std::cout << "--------------------" << std::endl;

	bureaucrat2.signForm(presidentialPardonForm);
	bureaucrat2.signForm(shrubberyCreationFrom);
	bureaucrat2.signForm(robotomyRequestForm);
	bureaucrat2.executeForm(presidentialPardonForm);
	bureaucrat2.executeForm(shrubberyCreationFrom);
	bureaucrat2.executeForm(robotomyRequestForm);
	std::cout << "------------------------------------------------------------";
	std::cout << "--------------------" << std::endl;

	bureaucrat3.signForm(presidentialPardonForm);
	bureaucrat3.signForm(shrubberyCreationFrom);
	bureaucrat3.signForm(robotomyRequestForm);
	bureaucrat3.executeForm(presidentialPardonForm);
	bureaucrat3.executeForm(shrubberyCreationFrom);
	bureaucrat3.executeForm(robotomyRequestForm);
	std::cout << "------------------------------------------------------------";
	std::cout << "--------------------" << std::endl;

	return 0;
}
