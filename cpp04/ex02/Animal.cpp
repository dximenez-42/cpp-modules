/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:54:50 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/17 17:45:35 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->_type = "undefined";
	std::cout << "Animal empty constructor called" << std::endl;
}

Animal::Animal(std::string type)
{
	this->_type = type;
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &ref)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = ref;
}

Animal &Animal::operator=(const Animal &ref)
{
	std::cout << "Animal copy assignment constructor called" << std::endl;
	if (this != &ref)
	{
		this->_type = ref._type;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->_type);
}