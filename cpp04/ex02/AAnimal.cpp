/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:54:50 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/17 17:49:03 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	this->_type = "undefined";
	std::cout << "Animal empty constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type)
{
	this->_type = type;
	std::cout << "Animal default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &ref)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = ref;
}

AAnimal &AAnimal::operator=(const AAnimal &ref)
{
	std::cout << "Animal copy assignment constructor called" << std::endl;
	if (this != &ref)
	{
		this->_type = ref._type;
	}
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string	AAnimal::getType() const
{
	return (this->_type);
}