/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 18:20:34 by dximenez          #+#    #+#             */
/*   Updated: 2024/08/08 22:55:42 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	try
	{
		Intern		someRandomIntern;
		Bureaucrat	bender("Bender", 1);
		AForm*		rrf;

		// rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		// rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		// rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		rrf = someRandomIntern.makeForm("random form", "Bender");
		
		// bender.signForm(*rrf);

		std::cout << *rrf << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}
