/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShubberyCreationForm.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 10:40:18 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/18 10:47:44 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SHUBBERYCREATIONFORM_HPP
#define SHUBBERYCREATIONFORM_HPP

#include <iostream>
#include "AForm.hpp"

class ShubberyCreationForm : public AForm
{
	private:
		const std::string	_target;
	public:
		ShubberyCreationForm(const std::string target);				// Default constructor
		ShubberyCreationForm(const ShubberyCreationForm &ref);				// Copy constructor
		ShubberyCreationForm &operator=(const ShubberyCreationForm &ref);		// Copy assignment operator
		~ShubberyCreationForm();								// Destructor

		void	execute(Bureaucrat const & executor) const;
};

#endif