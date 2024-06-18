/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 10:47:52 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/18 11:42:20 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &ref) : AForm(ref), _target(ref._target)
{}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &ref)
{
	(void)ref;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	if (!this->getSigned())
		throw AForm::FormNotSigned();

	std::cout << "*drilling noises*" << std::endl;
	if (rand() % 2)
		std::cout << this->_target << " has been robotomized" << std::endl;
	else
		std::cout << this->_target << " robotomization failed" << std::endl;
}