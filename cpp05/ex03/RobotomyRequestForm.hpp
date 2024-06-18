/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 10:40:18 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/18 12:04:10 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		const std::string	_target;
	public:
		RobotomyRequestForm(const std::string target);				// Default constructor
		RobotomyRequestForm(const RobotomyRequestForm &ref);				// Copy constructor
		RobotomyRequestForm &operator=(const RobotomyRequestForm &ref);		// Copy assignment operator
		~RobotomyRequestForm();								// Destructor

		void	execute(Bureaucrat const & executor) const;
};

#endif