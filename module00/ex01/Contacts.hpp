#ifndef CONTACTS_HPP
# define CONTACTS_HPP

# include <string>
# include <iomanip>
# include <iostream>

class Contacts {
private:
	std::string		firstName;
	std::string		lastName;
	std::string		nickName;
	std::string		darkestSecret;
	std::string		phoneNumber;

public:
	Contacts();
	~Contacts();

	const std::string	getFirstName();
	const std::string	getLastName();
	const std::string	getNickName();
	const std::string	getDarkestSecret();
	const std::string	getPhoneNumber();

	void	setFirstName();
	void	setLastName();
	void	setNicktName();
	void	setDarkestSecret();
	void	setPhoneNumber();

	const std::string	getInput(const std::string promt);
};

#endif
