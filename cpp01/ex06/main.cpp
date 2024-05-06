/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 20:20:51 by dximenez          #+#    #+#             */
/*   Updated: 2024/05/06 21:17:50 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char const *argv[])
{
	Harl	harl;
	
	if (argc == 2)
		harl.complain(argv[1]);
	return 0;
}
