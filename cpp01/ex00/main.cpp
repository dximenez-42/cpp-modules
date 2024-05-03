/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 22:09:27 by dximenez          #+#    #+#             */
/*   Updated: 2024/05/03 22:15:35 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	string	input;

	std::cout << "Heap zombie name:\t";
	std::cin >> input;

	Zombie *z1 = newZombie(input);
	z1->announce();


	std::cout << "Stack zombie name:\t";
	std::cin >> input;
	
	randomChump(input);


	delete(z1);
}
