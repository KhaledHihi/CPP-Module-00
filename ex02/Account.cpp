#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;

int	Account::getNbAccounts(void){return _nbAccounts;}
int	Account::getTotalAmount(void){return _totalAmount;}
int	Account::getNbDeposits(void){return _totalNbDeposits;}
int	Account::getNbWithdrawals(void){return _totalNbWithdrawals;}

void Account::_displayTimestamp( void ) {
    std::time_t time = std::time(NULL); // retuen sec since 1970
    std::tm *tm = std::localtime(&time); // take time sec and convert it to struct

    std::cout << '[' << 1900 + tm->tm_year; // year since 1900
    int t1 = 1 + tm->tm_mon; //add 1 cuz tm_mo start from 0-11;
    if (t1 > 9)
        std::cout << t1;
    else
        std::cout << '0' << t1;
    if (tm->tm_mday > 9)
        std::cout << tm->tm_mday << '_';
    else
        std::cout << '0' << tm->tm_mday << '_';
    if (tm->tm_hour > 9)
        std::cout << tm->tm_hour;
    else
        std::cout << '0' << tm->tm_hour;
    if (tm->tm_min > 9)
        std::cout << tm->tm_min;
    else
        std::cout << '0' << tm->tm_min;
    if (tm->tm_sec > 9)
        std::cout << tm->tm_sec << ']';
    else
        std::cout << '0' << tm->tm_sec << ']';
}

Account::Account(int initial_deposit) {
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";creadet" << std::endl;
}

void Account::makeDeposit(int deposit) {
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit;
    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal){
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";p_amount:" << _amount;

    if (_amount >= withdrawal)
	{
		_amount -= withdrawal;
		std::cout << ";withdrawal:" << withdrawal;
	}
	else
	{
		std::cout << ";withdrawal:" << "refused" << std::endl;
		return false;
	}
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout << ";amount:" << _amount << ";nb_withdrawals:" << _nbDeposits << std::endl;
	return true;
}

void	Account::displayAccountsInfos(void){
	_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts() << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

Account::~Account(){
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void	Account::displayStatus() const{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

int	Account::checkAmount() const{
	return _amount;
}