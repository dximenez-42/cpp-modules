/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:54:48 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/17 17:48:13 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iomanip>
#include <iostream>

class AAnimal
{
	protected:
		std::string _type;
	public:
		AAnimal();								// Default constructor
		AAnimal(std::string type);
		AAnimal(const AAnimal &ref);				// Copy constructor
		AAnimal &operator=(const AAnimal &ref);		// Copy assignment operator
		virtual ~AAnimal();								// Destructor

		virtual void	makeSound() const = 0;
		std::string	getType() const;
};


#endif