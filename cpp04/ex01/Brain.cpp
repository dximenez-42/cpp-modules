/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 17:36:11 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/17 17:36:12 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain empty constructor called" << std::endl;
}

Brain::Brain(const Brain &ref)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = ref;
}

Brain &Brain::operator=(const Brain &ref)
{
	std::cout << "Brain copy assignment constructor called" << std::endl;
	if (this != &ref)
	{
		for (unsigned long i = 0; i < ideas->size(); i++)
			this->ideas[i] = ref.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}