/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 20:42:16 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/17 14:40:07 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap joe("Joe");
	FragTrap foe("Foe");
	ScavTrap toe("Toe");

	joe.attack("Foe");
	foe.takeDamage(2);

	foe.beRepaired(10);
	foe.attack("Toe");
	
	toe.takeDamage(2);
	toe.guardGate();

	foe.highFivesGuys();
}
