/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:14:38 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/18 12:30:24 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{}

Intern::Intern(const Intern &ref)
{
	*this = ref;
}

Intern &Intern::operator=(const Intern &ref)
{
	(void)ref;
	return (*this);
}

Intern::~Intern()
{}

AForm*		Intern::makeForm(std::string form, std::string target)
{
	if (form == "robotomy request")
		return (new RobotomyRequestForm(target));
	else if (form == "presidential pardon")
		return (new PresidentialPardonForm(target));
	else if (form == "shrubbery creation")
		return (new ShrubberyCreationForm(target));
	else
		throw AForm::FormDoesntExist();
}