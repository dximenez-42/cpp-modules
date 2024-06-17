/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 17:36:16 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/17 17:48:11 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
	this->_brain = new Brain();
	std::cout << "Cat empty constructor called" << std::endl;
}

Cat::Cat(const Cat &ref)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = ref;
}

Cat &Cat::operator=(const Cat &ref)
{
	std::cout << "Cat copy assignment constructor called" << std::endl;
	if (this != &ref)
	{
		this->_type = ref._type;
		this->_brain = new Brain(*ref._brain);
	}
	return (*this);
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "🐱" << std::endl;
}