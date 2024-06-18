/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 10:47:52 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/18 12:21:16 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &ref) : AForm(ref), _target(ref._target)
{}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &ref)
{
	(void)ref;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
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