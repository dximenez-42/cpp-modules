/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 18:20:34 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/18 12:07:03 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	srand(time(NULL));
	try
	{
		Bureaucrat b("Paco", 1);
		ShubberyCreationForm f1("Shub Form");
		RobotomyRequestForm f2("Robot Form");
		PresidentialPardonForm f3("Pres Form");

		b.signForm(f1);
		b.executeForm(f1);

		std::cout << f1 << std::endl << std::endl;
		
		b.signForm(f2);
		b.executeForm(f2);
		
		std::cout << f2 << std::endl << std::endl;
		
		b.signForm(f3);
		b.executeForm(f3);
		
		std::cout << f3 << std::endl << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}
