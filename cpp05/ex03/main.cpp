/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 18:20:34 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/18 12:28:38 by dximenez         ###   ########.fr       */
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
		Intern	someRandomIntern;
		AForm*	rrf;

		// rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		// rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		// rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		rrf = someRandomIntern.makeForm("random form", "Bender");
		
		std::cout << *rrf << std::endl << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}
