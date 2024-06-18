/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 18:31:21 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/18 10:33:21 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm
{
	private:
		const std::string	_name;
		bool				_signed;
		const uint8_t		_gradeToSign;
		const uint8_t		_gradeToExecute;
	public:
		AForm(const std::string name, int gradeToSign, int gradeToExecute);				// Default constructor
		AForm(const AForm &ref);				// Copy constructor
		AForm &operator=(const AForm &ref);		// Copy assignment operator
		~AForm();								// Destructor

		void	beSigned(Bureaucrat &b);

		virtual void	execute(Bureaucrat const & executor) const = 0;

		std::string	getName() const;
		bool		getSigned() const;
		uint8_t		getGradeToSign() const;
		uint8_t		getGradeToExecute() const;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class FormNotSigned : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &o, const AForm &ref);

#endif