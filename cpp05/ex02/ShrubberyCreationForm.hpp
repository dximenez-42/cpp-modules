/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 10:40:18 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/18 12:23:29 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		const std::string	_target;
	public:
		ShrubberyCreationForm(const std::string target);				// Default constructor
		ShrubberyCreationForm(const ShrubberyCreationForm &ref);				// Copy constructor
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &ref);		// Copy assignment operator
		~ShrubberyCreationForm();								// Destructor

		void	execute(Bureaucrat const & executor) const;
};

#endif