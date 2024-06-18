/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:04:37 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/18 12:05:42 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &ref) : AForm(ref), _target(ref._target)
{}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &ref)
{
	(void)ref;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	if (!this->getSigned())
		throw AForm::FormNotSigned();

	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}