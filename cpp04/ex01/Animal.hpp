/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:54:48 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/17 17:35:08 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iomanip>
#include <iostream>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();								// Default constructor
		Animal(std::string type);
		Animal(const Animal &ref);				// Copy constructor
		Animal &operator=(const Animal &ref);		// Copy assignment operator
		virtual ~Animal();								// Destructor

		virtual void	makeSound() const;
		std::string	getType() const;
};


#endif