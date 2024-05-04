/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 16:26:21 by dximenez          #+#    #+#             */
/*   Updated: 2024/05/04 17:10:21 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	_weapon = &weapon;
	_name = name;
}

HumanA::~HumanA()
{}

void	HumanA::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void	HumanA::attack()
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
