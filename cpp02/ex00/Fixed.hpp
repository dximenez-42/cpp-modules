/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 21:28:40 by dximenez          #+#    #+#             */
/*   Updated: 2024/05/07 13:53:00 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iomanip>
#include <iostream>

class Fixed
{
	private:
		int					_value;
		static const int	_fract_bits = 8;
	public:
		Fixed();								// Default constructor
		Fixed(const Fixed &ref);				// Copy constructor
		Fixed &operator=(const Fixed &ref);		// Copy asignment operator
		~Fixed();								// Destructor

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif