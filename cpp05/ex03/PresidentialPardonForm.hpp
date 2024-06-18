/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:04:04 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/18 12:04:30 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		const std::string	_target;
	public:
		PresidentialPardonForm(const std::string target);				// Default constructor
		PresidentialPardonForm(const PresidentialPardonForm &ref);				// Copy constructor
		PresidentialPardonForm &operator=(const PresidentialPardonForm &ref);		// Copy assignment operator
		~PresidentialPardonForm();								// Destructor

		void	execute(Bureaucrat const & executor) const;
};

#endif