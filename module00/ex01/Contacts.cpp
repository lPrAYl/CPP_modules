#include "Contacts.hpp"

Contacts::Contacts() {
}

Contacts::~Contacts() {
}

const std::string	strtrim(std::string str) {
	int	i = 0;
	while (isspace(str[i])) {
		++i;	
	}
	int j = str.length() - 1;
	while (isspace(str[j])) {
		j--;
	}
	return str.substr(i, j + 1 - i);
}

const std::string   Contacts::getInput(const std::string promt) {
    std::string fieldPhoneBook;

    for ( ; fieldPhoneBook.empty() && !std::cin.eof(); ) {

        std::cout << promt;
        std::getline(std::cin, fieldPhoneBook);
		if (fieldPhoneBook.find_first_not_of(" \t\n\r\v") == fieldPhoneBook.npos)
			fieldPhoneBook.clear();
    }
	return strtrim(fieldPhoneBook);
}

const std::string	Contacts::getFirstName() {
	return this->firstName;
}

const std::string	Contacts::getLastName() {
	return this->lastName;
}

const std::string	Contacts::getNickName() {
	return this->nickName;
}

const std::string	Contacts::getDarkestSecret() {
	return this->darkestSecret;
}

const std::string	Contacts::getPhoneNumber() {
	return this->phoneNumber;
}

void	Contacts::setFirstName() {
	this->firstName = Contacts::getInput("Enter first name: ");
}

void	Contacts::setLastName() {
	this->lastName = getInput("Enter last name: ");
}

void	Contacts::setNicktName() {
	this->nickName = getInput("Enter nick name: ");
}

void	Contacts::setDarkestSecret() {
	this->darkestSecret = getInput("Enter darkest secret: ");
}

void	Contacts::setPhoneNumber() {
	this->phoneNumber = getInput("Enter phone number: ");
}
