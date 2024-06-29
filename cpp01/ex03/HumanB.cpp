/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 16:32:20 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/29 14:05:05 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_weapon = NULL;
	_name = name;
}

HumanB::~HumanB()
{}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack()
{
	if (!_weapon)
	{
		std::cout	<< _name
					<< " can't attack"
					<< std::endl;
	}
	else
	{
		std::cout	<< _name
					<< " attacks with their "
					<< _weapon->getType()
					<< std::endl;
	}
}
