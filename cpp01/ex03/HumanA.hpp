/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 16:26:33 by dximenez          #+#    #+#             */
/*   Updated: 2024/05/04 17:05:43 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon		*_weapon;
		std::string	_name;

	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();

		void	setWeapon(Weapon &weapon);
		void	attack();
};

#endif