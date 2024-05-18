/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 21:29:00 by dximenez          #+#    #+#             */
/*   Updated: 2024/05/18 16:44:21 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout	<< "Default constructor called" << std::endl;
	_value = 0;
}

Fixed::Fixed(const int num)
{
	std::cout	<< "Int constructor called" << std::endl;
	_value = num << _fract_bits;
}

Fixed::Fixed(const float num)
{
	std::cout	<< "Float constructor called" << std::endl;
	_value = std::roundf(num * (1 << _fract_bits));
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
		_value = ref.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout	<< "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}

float	Fixed::toFloat(void) const
{
	return static_cast<float>(_value / (1 << _fract_bits));
}

int		Fixed::toInt() const
{
	return (_value >> _fract_bits);
}

std::ostream & operator<<(std::ostream &o, Fixed const &i)
{
	o << i.toFloat();
	return o;
}