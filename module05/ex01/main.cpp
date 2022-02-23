#include "Form.hpp"

int main() {
	Form	form1("blanc", 150, 150);

	std::cout << form1 << std::endl;

	Bureaucrat vasya("ad", 14);
	std::cout << vasya << std::endl;
	return 0;
}
