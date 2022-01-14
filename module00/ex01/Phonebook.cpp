#include "Phonebook.hpp"

static void	printField(const std::string field) {
	if (field.length() > 10)
		std::cout << field.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << field << "|"; 
}

void	PhoneBook::printContactInfo(int index) {
	std::cout << "First name: " << contacts[index].getFirstName() << std::endl;
	std::cout << "Last name: " <<contacts[index].getLastName() << std::endl;
	std::cout << "Nick name: " << contacts[index].getNickName() << std::endl;
	std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << std::endl;
	std::cout << "Phone number: " << contacts[index].getPhoneNumber() << std::endl;
}

PhoneBook::PhoneBook() : id(0) {
	std::cout << "\33[30;106m\33[4m===== Welcome to the crappy awesome phonebook ====\33[0m";
	std::cout << std::endl;
	this->Promt();
}

PhoneBook::~PhoneBook() {
	std::cout << std::endl;
	std::cout << "\33[34;103m\33[4m====== Goodbye the crappy awesome phonebook ======\33[0m";
	std::cout << std::endl;
}

void	PhoneBook::Promt() {
	std::cout << "\33[36;1mPlease, enter the command from {ADD, SEARCH, EXIT}\33[0m";
	std::cout << std::endl;
}

void	PhoneBook::Add() {
	contacts[id].setFirstName();
	contacts[id].setLastName();
	contacts[id].setNicktName();
	contacts[id].setDarkestSecret();
	contacts[id].setPhoneNumber();
	if (id < 7)
		id++;
	else
		id = 0;
}

void	PhoneBook::Search() {
	std::cout << "------------" << "-----------" << "-----------" << "-----------" << std::endl;
	std::cout << "|  index   |" << "first name|" << " last name|" << " nickname |" << std::endl;
	std::cout << "------------" << "-----------" << "-----------" << "-----------" << std::endl;
	for (int i = 0; !contacts[i].getFirstName().empty() && i < 8; i++) {
		std::cout << "|" << std::setw(10) << i + 1 << "|"; 
		printField(contacts[i].getFirstName());
		printField(contacts[i].getLastName());
		printField(contacts[i].getNickName());
		std::cout << std::endl;
		std::cout << "------------" << "-----------" << "-----------" << "-----------" << std::endl;
	}

	if (contacts[0].getFirstName().empty()) {
		std::cout << "\33[91;1mThe phone book still is empty. Add information.\33[0m" << std::endl;
		std::cout << std::endl;
		return ;
	}

	int			index;
	std::string	selected;
	std::cout << std::endl;
	for ( ; !std::cin.eof(); ) {
		std::cout << "Which one would you like to see? Enter contact index:" << std::endl;
		if (!std::getline(std::cin, selected))
			continue ;
		index = std::atoi(selected.c_str());
		if (index > 0 && index < 9 && !contacts[index - 1].getFirstName().empty()) {
			printContactInfo(index - 1);
			break ;
		}
		else
			std::cout << "\33[91;1mThe input makes no sense. Try again.\33[0m" << std::endl;
	}
	std::cout << std::endl;
}
