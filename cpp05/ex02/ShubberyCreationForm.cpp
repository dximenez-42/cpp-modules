/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShubberyCreationForm.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 10:47:52 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/18 10:57:26 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShubberyCreationForm.hpp"
#include <fstream>

ShubberyCreationForm::ShubberyCreationForm(const std::string target) : AForm("ShubberyCreationForm", 145, 137), _target(target)
{}

ShubberyCreationForm::ShubberyCreationForm(const ShubberyCreationForm &ref) : AForm(ref), _target(ref._target)
{}

ShubberyCreationForm &ShubberyCreationForm::operator=(const ShubberyCreationForm &ref)
{
	(void)ref;
	return (*this);
}

ShubberyCreationForm::~ShubberyCreationForm()
{}

void	ShubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	if (!this->getSigned())
		throw AForm::FormNotSigned();

	std::ofstream file(this->_target + "_shrubbery");
	file << "      *" << std::endl;
	file << "     ***" << std::endl;
	file << "    *****" << std::endl;
	file << "   *******" << std::endl;
	file << "  *********" << std::endl;
	file << "      |" << std::endl;
	file.close();
}