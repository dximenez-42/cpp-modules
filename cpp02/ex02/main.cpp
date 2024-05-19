/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:22:27 by dximenez          #+#    #+#             */
/*   Updated: 2024/05/19 14:26:59 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed		a;
	Fixed const	b( Fixed( 5.05f) * Fixed( 2 ) );


	std::cout << "1\t" << a << std::endl;
	std::cout << "2\t" << ++a << std::endl;
	std::cout << "3\t" << a << std::endl;
	std::cout << "4\t" << a++ << std::endl;
	std::cout << "5\t" << a << std::endl;

	std::cout << "b\t" << b << std::endl;

	std::cout << "Max\t" << Fixed::max( a, b ) << std::endl;
	
	return 0;
}
