/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 21:23:21 by dximenez          #+#    #+#             */
/*   Updated: 2024/05/04 14:11:59 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{}

Zombie::~Zombie()
{
	std::cout	<< _name << ": 💀"
				<< std::endl;
}

void	Zombie::set_name(std::string name)
{
	_name = name;
}

void	Zombie::announce(void)
{
	std::cout	<< _name << ": BraiiiiiiinnnzzzZ..."
				<< std::endl;
}