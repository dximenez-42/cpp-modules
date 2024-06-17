/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 17:13:00 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/17 17:24:41 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iomanip>
#include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();								// Default constructor
		Brain(const Brain &ref);				// Copy constructor
		Brain &operator=(const Brain &ref);		// Copy assignment operator
		~Brain();								// Destructor
};


#endif