/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 22:09:27 by dximenez          #+#    #+#             */
/*   Updated: 2024/05/03 22:28:37 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::string	input;

	std::cout << "Heap zombie name:\t";
	std::cin >> input;

	Zombie *z1 = newZombie(input);
	z1->announce();


	std::cout << "Stack zombie name:\t";
	std::cin >> input;
	
	randomChump(input);


	delete(z1);
}
