/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 14:25:05 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/17 14:51:53 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	private:
	public:
		ScavTrap();								// Default constructor
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &ref);				// Copy constructor
		ScavTrap &operator=(const ScavTrap &ref);		// Copy assignment operator
		~ScavTrap();								// Destructor

		void	attack(const std::string& target);
		void	guardGate();
};


#endif