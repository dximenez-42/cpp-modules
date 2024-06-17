/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 14:24:06 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/17 14:24:06 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_name = "undefined";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	std::cout << "ScavTrap: Empty constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	std::cout << "ScavTrap: Default constructor called" << std::endl;

}

ScavTrap::ScavTrap(const ScavTrap &ref)
{
	std::cout << "ScavTrap: Copy constructor called" << std::endl;
	*this = ref;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &ref)
{
	std::cout << "ScavTrap: Copy assignment operator called" << std::endl;
	if (this != &ref)
	{
		_name = ref._name;
		_hitPoints = ref._hitPoints;
		_energyPoints = ref._energyPoints;
		_attackDamage = ref._attackDamage;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: Destructor called" << std::endl;
}


void	ScavTrap::attack(const std::string &target)
{
	if (_energyPoints == 0)
	{
		std::cout	<< "ScavTrap " << _name
					<< " cannot attack!"
					<< std::endl;
	}
	else if (_energyPoints >= 1)
	{
		std::cout	<< "ScavTrap " << _name
					<< " attacks " << target
					<< ", causing " << _attackDamage
					<< " points of damage!"
					<< std::endl;
		_energyPoints -= 1;
	}
}

void	ScavTrap::guardGate()
{
	std::cout	<< "ScavTrap " << _name
				<< " is now in Gate keeper mode."
				<< std::endl;
}