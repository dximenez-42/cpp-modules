/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 21:18:34 by dximenez          #+#    #+#             */
/*   Updated: 2024/05/04 14:11:51 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string	_name;
	public:
		Zombie();
		~Zombie();

		void	set_name(std::string name);
		
		void	announce(void);
};

Zombie	*zombieHorde(int N, std::string name);

#endif