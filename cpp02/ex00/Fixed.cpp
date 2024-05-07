/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 21:29:00 by dximenez          #+#    #+#             */
/*   Updated: 2024/05/07 13:54:45 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout	<< "Default constructor called" << std::endl;
	_value = 0;
}

Fixed::Fixed(const Fixed &ref)
{
	std::cout	<< "Copy constructor called" << std::endl;
	*this = ref;
}

Fixed&	Fixed::operator=(const Fixed& ref)
{
	std::cout	<< "Copy assignment operator called" << std::endl;
	if (this != &ref)
	{
		_value = ref.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed()
{
	std::cout	<< "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	std::cout	<< "getRawbits member function called" << std::endl;
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}