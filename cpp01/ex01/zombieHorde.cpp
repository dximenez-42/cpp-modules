/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 14:10:05 by dximenez          #+#    #+#             */
/*   Updated: 2024/05/04 14:12:41 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name )
{
	Zombie	*zombie = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		zombie[i].set_name(name);
	}
	
	return (zombie);
}