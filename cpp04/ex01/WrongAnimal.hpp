/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:54:48 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/17 17:36:28 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iomanip>
#include <iostream>

class WrongAnimal
{
	protected:
		std::string _type;
	public:
		WrongAnimal();								// Default constructor
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &ref);				// Copy constructor
		WrongAnimal &operator=(const WrongAnimal &ref);		// Copy assignment operator
		~WrongAnimal();								// Destructor

		void		makeSound() const;
		std::string	getType() const;
};


#endif