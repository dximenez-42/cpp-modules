/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:54:54 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/17 17:00:09 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
	private:
	public:
		Cat();								// Default constructor
		Cat(const Cat &ref);				// Copy constructor
		Cat &operator=(const Cat &ref);		// Copy assignment operator
		~Cat();								// Destructor

		void		makeSound() const;
};


#endif