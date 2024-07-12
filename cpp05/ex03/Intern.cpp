/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:14:38 by dximenez          #+#    #+#             */
/*   Updated: 2024/07/12 13:53:42 by dximenez         ###   ########.fr       */
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

static AForm*	new_robotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

static AForm*	new_presidential(std::string target)
{
	return (new PresidentialPardonForm(target));
}

static AForm*	new_shrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm*		Intern::makeForm(std::string form, std::string target)
{
	std::string	form_names[] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	AForm		*(*forms[])(std::string target) = { new_robotomy, new_presidential, new_shrubbery};
	AForm		*form_ptr = NULL;
	
	for (unsigned int i = 0; i < 3; i++)
	{
		if (form == form_names[i])
			form_ptr = forms[i](target);
	}
	if (form_ptr)
		std::cout << "Intern creates " << *form_ptr << std::endl;
	else
		throw AForm::FormDoesntExist();
	return (form_ptr);
}