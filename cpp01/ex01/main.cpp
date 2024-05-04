/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 22:09:27 by dximenez          #+#    #+#             */
/*   Updated: 2024/05/04 15:00:28 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

static bool	is_valid_number(std::string s)
{
	for (size_t i = 0; i < s.length(); i++)
		if (!isdigit(s[i]))
			return (false);
	return (true);
}

int main(void)
{
	std::string	input;
	std::string	name;

	do
	{
		std::cout << "Number of zombies in horde:\t";
		std::cin >> input;
	} while (!is_valid_number(input));

	std::cout << "Name of the zombies:\t";
	std::cin >> name;

	Zombie *zombies = zombieHorde(atoi(input.c_str()), name);

	for (int i = 0; i < atoi(input.c_str()); i++)
		zombies[i].announce();

	delete[] zombies;
}
