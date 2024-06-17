/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:54:56 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/17 17:25:49 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*_brain;
	public:
		Dog();								// Default constructor
		Dog(const Dog &ref);				// Copy constructor
		Dog &operator=(const Dog &ref);		// Copy assignment operator
		~Dog();								// Destructor

		void		makeSound() const;
};


#endif