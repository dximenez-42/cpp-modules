/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 18:31:21 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/17 19:03:00 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const uint8_t		_gradeToSign;
		const uint8_t		_gradeToExecute;
	public:
		Form(const std::string name, int gradeToSign, int gradeToExecute);				// Default constructor
		Form(const Form &ref);				// Copy constructor
		Form &operator=(const Form &ref);		// Copy assignment operator
		~Form();								// Destructor

		void	beSigned(Bureaucrat &b);

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
};

std::ostream &operator<<(std::ostream &o, const Form &ref);

#endif