/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 18:20:34 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/18 10:59:28 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShubberyCreationForm.hpp"

int	main()
{
	try
	{
		Bureaucrat b("Paco", 1);
		ShubberyCreationForm f1("Shub Form");

		b.signForm(f1);
		b.executeForm(f1);
		
		std::cout << f1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}
