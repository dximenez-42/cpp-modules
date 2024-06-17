/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 17:04:15 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/17 17:04:58 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat empty constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &ref)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = ref;
}

WrongCat &WrongCat::operator=(const WrongCat &ref)
{
	std::cout << "WrongCat copy assignment constructor called" << std::endl;
	if (this != &ref)
	{
		this->_type = ref._type;
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "🐱" << std::endl;
}