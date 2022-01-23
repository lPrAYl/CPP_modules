#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Contacts.hpp"

class PhoneBook {
private:
	int			id;
	Contacts	contacts[8];
public:
	PhoneBook();
	~PhoneBook();

	void	Promt();
	void	Add();
	void	Search();
	void	printContactInfo(int);
};

#endif
