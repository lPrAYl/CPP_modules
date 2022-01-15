#include "Account.hpp"
#include <iostream>
#include <time.h>
#include <iomanip>

int		Account::_nbAccounts(0);
int		Account::_totalAmount(0);
int		Account::_totalNbDeposits(0);
int		Account::_totalNbWithdrawals(0);

Account::Account(int initial_deposit) : _nbDeposits(0), _nbWithdrawals(0) {
	_displayTimestamp();
	_accountIndex = _nbAccounts++;
	this->_amount = initial_deposit;
	_totalAmount += initial_deposit;
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
}

Account::~Account() {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
}

int	Account::getNbAccounts() {
	return Account::_nbAccounts;
}

int	Account::getTotalAmount() {
	return Account::_totalAmount;
}

int	Account::getNbDeposits() {
	return Account::_totalNbDeposits;
}
	
int	Account::getNbWithdrawals() {
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos() {
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposts:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "deposit:" << deposit << ";";
	_amount += deposit;
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_deposits:" << ++_nbDeposits << std::endl;
	_totalNbDeposits++;
	_totalAmount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	if (withdrawal > _amount) {
		std::cout << "withdrawal:refused" << std::endl;
		return false;
	}
	std::cout << "withdrawal:" << withdrawal << ";";
	_amount -= withdrawal;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_withdrawals:" << ++_nbWithdrawals << std::endl;
	return true;
}

int		Account::checkAmount(void) const {
	_displayTimestamp();
	return 0;
}

void	Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void) {
	time_t	currentTime = time(NULL);
	tm*		now = localtime(&currentTime);

	std::cout << "[";
	std::cout << now->tm_year + 1900 << std::setw(2) << std::right << std::setfill('0');
	std::cout << now->tm_mon + 1 << std::setw(2) << std::right << std::setfill('0');
	std::cout << now->tm_mday << std::right << std::setfill('0');
	std::cout << '_' << std::right << std::setfill('0');
	std::cout << now->tm_hour << std::setw(2) << std::right << std::setfill('0');
	std::cout << now->tm_min << std::setw(2) << std::right << std::setfill('0');
	std::cout << now->tm_sec << std::right << std::setfill('0');
	std::cout << "] ";
}
