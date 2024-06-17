/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 21:57:54 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/17 14:02:58 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	_name = "undefined";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;

	std::cout << "ClapTrap: Empty constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;

	std::cout << "ClapTrap: Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ref)
{
	std::cout << "ClapTrap: Copy constructor called" << std::endl;
	*this = ref;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ref)
{
	std::cout << "ClapTrap: Copy assignment operator called" << std::endl;
	if (this != &ref)
	{
		_name = ref._name;
		_hitPoints = ref._hitPoints;
		_energyPoints = ref._energyPoints;
		_attackDamage = ref._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap: Destructor called" << std::endl;
}


void	ClapTrap::attack(const std::string &target)
{
	if (_energyPoints == 0)
	{
		std::cout	<< "ClapTrap " << _name
					<< " cannot attack!"
					<< std::endl;
	}
	else if (_energyPoints >= 1)
	{
		std::cout	<< "ClapTrap " << _name
					<< " attacks " << target
					<< ", causing " << _attackDamage
					<< " points of damage!"
					<< std::endl;
		_energyPoints -= 1;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > (unsigned int)_hitPoints)
	{
		_hitPoints = 0;
		std::cout	<< "ClapTrap " << _name
					<< " ran out of hitpoints!"
					<< std::endl;
		return;
	}
	std::cout	<< "ClapTrap " << _name
				<< " received" << amount
				<< " attack damage!"
				<< std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints == 0 || _energyPoints == 0)
	{
		std::cout	<< "ClapTrap " << _name
					<< " cannot repair!"
					<< std::endl;
	}
	else if (_energyPoints >= 1)
	{
		_hitPoints += amount;
		_energyPoints -= 1;
		std::cout	<< "ClapTrap " << _name
					<< " repaired " << amount
					<< " hit points (now has " << _hitPoints
					<< ") by using " << 1
					<< " energy point!"
					<< std::endl;
	}
}