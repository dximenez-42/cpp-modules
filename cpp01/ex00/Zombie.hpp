/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 21:18:34 by dximenez          #+#    #+#             */
/*   Updated: 2024/05/03 22:11:06 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

using std::string;

class Zombie
{
	private:
		string	_name;
	public:
		Zombie(string name);
		~Zombie();
		
		void	announce(void);
};

Zombie	*newZombie(string name);
void	randomChump(string name);

#endif