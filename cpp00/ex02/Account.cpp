/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 19:28:33 by dximenez          #+#    #+#             */
/*   Updated: 2024/05/03 21:12:57 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// [19920104_091532] index:0;amount:42;created
// [19920104_091532] index:1;amount:54;created
// [19920104_091532] index:2;amount:957;created
// [19920104_091532] index:3;amount:432;created
// [19920104_091532] index:4;amount:1234;created
// [19920104_091532] index:5;amount:0;created
// [19920104_091532] index:6;amount:754;created
// [19920104_091532] index:7;amount:16576;created
Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	++_nbAccounts;
	
	_amount += initial_deposit;
	_totalAmount += initial_deposit;

	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";created"
				<< std::endl;
}


// [19920104_091532] index:0;amount:47;closed
// [19920104_091532] index:1;amount:785;closed
// [19920104_091532] index:2;amount:864;closed
// [19920104_091532] index:3;amount:430;closed
// [19920104_091532] index:4;amount:1245;closed
// [19920104_091532] index:5;amount:23;closed
// [19920104_091532] index:6;amount:106;closed
// [19920104_091532] index:7;amount:8942;closed
Account::~Account(void)
{
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";closed"
				<< std::endl;
}


int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}


int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}


int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}


int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}


// [19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
// [19920104_091532] accounts:8;total:21524;deposits:8;withdrawals:0
// [19920104_091532] accounts:8;total:12442;deposits:8;withdrawals:6
void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout	<< "accounts:" << _nbAccounts
				<< ";total:" << _totalAmount
				<< ";deposits:" << _totalNbDeposits
				<< ";withdrawals:" << _totalNbWithdrawals
				<< std::endl;
}


// [19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
// [19920104_091532] index:1;p_amount:54;deposit:765;amount:819;nb_deposits:1
// [19920104_091532] index:2;p_amount:957;deposit:564;amount:1521;nb_deposits:1
// [19920104_091532] index:3;p_amount:432;deposit:2;amount:434;nb_deposits:1
// [19920104_091532] index:4;p_amount:1234;deposit:87;amount:1321;nb_deposits:1
// [19920104_091532] index:5;p_amount:0;deposit:23;amount:23;nb_deposits:1
// [19920104_091532] index:6;p_amount:754;deposit:9;amount:763;nb_deposits:1
// [19920104_091532] index:7;p_amount:16576;deposit:20;amount:16596;nb_deposits:1
void	Account::makeDeposit(int deposit)
{
	++_nbDeposits;
	++_totalNbDeposits;

	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";p_amount:" << _amount
				<< ";deposit:" << deposit
				<< ";amount:" << _amount + deposit
				<< ";nb_deposits:" << _nbDeposits
				<< std::endl;

	_amount += deposit;
	_totalAmount += deposit;
}


// [19920104_091532] index:0;p_amount:47;withdrawal:refused
// [19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
// [19920104_091532] index:2;p_amount:1521;withdrawal:657;amount:864;nb_withdrawals:1
// [19920104_091532] index:3;p_amount:434;withdrawal:4;amount:430;nb_withdrawals:1
// [19920104_091532] index:4;p_amount:1321;withdrawal:76;amount:1245;nb_withdrawals:1
// [19920104_091532] index:5;p_amount:23;withdrawal:refused
// [19920104_091532] index:6;p_amount:763;withdrawal:657;amount:106;nb_withdrawals:1
// [19920104_091532] index:7;p_amount:16596;withdrawal:7654;amount:8942;nb_withdrawals:1
bool	Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal > _amount)
	{
		_displayTimestamp();
		std::cout	<< "index:" << _accountIndex
					<< ";p_amount:" << _amount
					<< ";withdrawal:refused"
					<< std::endl;
		return (false);
	}
	else
	{
		++_nbWithdrawals;
		++_totalNbWithdrawals;

		_displayTimestamp();
		std::cout	<< "index:" << _accountIndex
					<< ";p_amount:" << _amount
					<< ";withdrawal:" << withdrawal
					<< ";amount:" << _amount - withdrawal
					<< ";nb_withdrawals:" << _nbWithdrawals
					<< std::endl;

		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		return (true);
	}
}

int	Account::checkAmount(void) const
{
	return (_amount);
}


// [19920104_091532] index:0;amount:47;deposits:1;withdrawals:0
// [19920104_091532] index:1;amount:819;deposits:1;withdrawals:0
// [19920104_091532] index:2;amount:1521;deposits:1;withdrawals:0
// [19920104_091532] index:3;amount:434;deposits:1;withdrawals:0
// [19920104_091532] index:4;amount:1321;deposits:1;withdrawals:0
// [19920104_091532] index:5;amount:23;deposits:1;withdrawals:0
// [19920104_091532] index:6;amount:763;deposits:1;withdrawals:0
// [19920104_091532] index:7;amount:16596;deposits:1;withdrawals:0
void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";deposits:" << _nbDeposits
				<< ";withdrawals:" << _nbWithdrawals
				<< std::endl;
}


// [19920104_091532]
// 1992 01 04  09 15 31
//	January 04 1992 09:15:31
void	Account::_displayTimestamp( void )
{
	time_t	t = time(NULL);
	tm		*tm = localtime(&t);

	std::cout	<< "["
				<< tm->tm_year + 1900
				<< std::setw(2) << std::setfill('0') << tm->tm_mon
				<< std::setw(2) << std::setfill('0') << tm->tm_mday
				<< "_"
				<< std::setw(2) << std::setfill('0') << tm->tm_hour
				<< std::setw(2) << std::setfill('0') << tm->tm_min
				<< std::setw(2) << std::setfill('0') << tm->tm_sec
				<< "]" << " ";
}