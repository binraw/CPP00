#include "Account.hpp"
#include <string>
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ): _accountIndex(_nbAccounts), _amount(initial_deposit)
{
    this->_amount = initial_deposit;
    this->_accountIndex = _nbAccounts;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amout:" << this->_amount << ";created" << std::endl;
    _nbAccounts++;
    _totalAmount += initial_deposit;
}
Account::~Account( void )
{
    Account::_displayTimestamp();
    std::cout << "Index:" << this->_accountIndex << ";amout:" << this->_amount << ";closed" << std::endl;
}




int	Account::getNbAccounts( void )
{
    return _nbAccounts;
}
int	Account::getTotalAmount( void )
{
    return _totalAmount;
}
int	Account::getNbDeposits( void )
{
    return _totalNbDeposits;
}
int	Account::getNbWithdrawals( void )
{
    return _totalNbWithdrawals;
}
void	Account::displayAccountsInfos( void )
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts() << ";amout:" << Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    int total;
    total = this->_amount + deposit;
    Account::_displayTimestamp();
    std::cout << "index:" << ";p_amount:" << this->_amount << ";deposit:" << deposit << ";amount:" << total << ";nb_deposits:" << 1 << std::endl;
    this->_amount += deposit;
    _totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
}
bool	Account::makeWithdrawal( int withdrawal )
{
    if (withdrawal > 0)
        return true;
    return false;
}
int		Account::checkAmount( void ) const
{
    return _amount;
}
void	Account::displayStatus( void ) const
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
std::time_t now = std::time(0);
    std::tm *currentTime = std::localtime(&now);

    std::cout << "[" <<(currentTime->tm_year + 1900) 
              << std::setw(2) << std::setfill('0') << (currentTime->tm_mon + 1) 
              << std::setw(2) << std::setfill('0') << currentTime->tm_mday       
              << '_'
              << std::setw(2) << std::setfill('0') << currentTime->tm_hour         
              << std::setw(2) << std::setfill('0') << currentTime->tm_min          
              << std::setw(2) << std::setfill('0') << currentTime->tm_sec
              << "] ";

   
}