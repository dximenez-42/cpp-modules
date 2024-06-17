/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:54:52 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/17 17:49:17 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
	this->_brain = new Brain();
	std::cout << "Dog empty constructor called" << std::endl;
}

Dog::Dog(const Dog &ref)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = ref;
}

Dog &Dog::operator=(const Dog &ref)
{
	std::cout << "Dog copy assignment constructor called" << std::endl;
	if (this != &ref)
	{
		this->_type = ref._type;
		this->_brain = new Brain(*ref._brain);
	}
	return (*this);
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "🐶" << std::endl;
}