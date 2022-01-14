#include "Phonebook.hpp"

int main() {
	PhoneBook	phonebook;
	std::string	cmd;

	for ( ; std::getline(std::cin, cmd); )
	{
		if (cmd == "ADD")
			phonebook.Add();
		else if (cmd == "SEARCH")
			phonebook.Search();
		else if (cmd == "EXIT")
			break ;
		if (!std::cin.eof())
			phonebook.Promt();
	}
	return 0;
}