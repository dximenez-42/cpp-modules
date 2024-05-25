/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 20:42:16 by dximenez          #+#    #+#             */
/*   Updated: 2024/05/25 20:48:44 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap joe("Joe");
	ClapTrap foe("Foe");
	ClapTrap toe;

	toe = ClapTrap("Toe");

	joe.attack("Foe");
	foe.takeDamage(2);

	foe.beRepaired(10);

	toe.attack("Joe");
	joe.takeDamage(4);

	
	joe.attack("Toe");
	toe.takeDamage(2);

	foe.attack("Joe");
	joe.takeDamage(3);
}
