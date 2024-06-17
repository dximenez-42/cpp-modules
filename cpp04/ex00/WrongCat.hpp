/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:54:54 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/17 17:13:27 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
	public:
		WrongCat();								// Default constructor
		WrongCat(const WrongCat &ref);				// Copy constructor
		WrongCat &operator=(const WrongCat &ref);		// Copy assignment operator
		~WrongCat();								// Destructor

		void		makeSound() const;
};


#endif