/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 22:09:27 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/29 14:03:11 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int			number = 5;
	std::string	name = "Z";

	Zombie *zombies = zombieHorde(number, name);

	for (int i = 0; i < number; i++)
		zombies[i].announce();

	delete[] zombies;
}
