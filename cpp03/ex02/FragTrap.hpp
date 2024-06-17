/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 14:24:44 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/17 14:34:27 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
	public:
		FragTrap();								// Default constructor
		FragTrap(std::string name);
		FragTrap(const FragTrap &ref);				// Copy constructor
		FragTrap &operator=(const FragTrap &ref);		// Copy assignment operator
		~FragTrap();								// Destructor

		void	highFivesGuys(void);
};


#endif