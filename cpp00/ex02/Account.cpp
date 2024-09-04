/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:17:51 by yokamura          #+#    #+#             */
/*   Updated: 2023/11/04 16:48:54 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void )
{
	std::time_t now_time = std::time(NULL);
    std::tm *now_tm = std::localtime(&now_time);
    char buffer[80];
    strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", now_tm);
	std::cout << "["<< buffer << "] ";
}

Account::Account( void )
{
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_nbAccounts++;
	this->_totalAmount += this->_amount;
	this->_totalNbDeposits += this->_nbDeposits;
	this->_totalNbWithdrawals += this->_nbWithdrawals;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" \
			  << this->_amount << ";created" << std::endl;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" \
			  << this->_amount << ";closed" << std::endl;
}

int		Account::checkAmount( void ) const
{
	if (this->_amount > 0)
		return (1);
	else
		return (0);
}

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() \
			  << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	int	p_amount = this->_amount;
	this->_amount += deposit;
	this->_nbDeposits = checkAmount();
	this->_totalAmount += deposit;
	this->_totalNbDeposits += this->_nbDeposits;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << p_amount \
			  << ";deposit:" << deposit << ";amount:" \
 			  << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	int	p_amount = this->_amount;
	this->_amount -= withdrawal;
	if ((this->_nbWithdrawals = checkAmount()))
		this->_totalAmount -= withdrawal;
	else
		this->_amount = p_amount;
	this->_totalNbWithdrawals += this->_nbWithdrawals;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << p_amount \
			  << ";withdrawal:";
	if (this->_nbWithdrawals)
		std::cout << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	else
		std::cout << "refused" << std::endl;
	return (true);
}


void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount \
			  << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}
