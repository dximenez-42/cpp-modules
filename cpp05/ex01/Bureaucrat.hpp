/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 18:08:54 by dximenez          #+#    #+#             */
/*   Updated: 2024/08/08 21:48:09 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include "Form.hpp"

class Form;
class Bureaucrat
{
	private:
		const std::string	_name;
		int				_grade;
	public:
		Bureaucrat(const std::string name, int grade);				// Default constructor
		Bureaucrat(const Bureaucrat &ref);				// Copy constructor
		Bureaucrat &operator=(const Bureaucrat &ref);		// Copy assignment operator
		~Bureaucrat();								// Destructor

		std::string	getName() const;
		int		getGrade() const;

		void		incrementGrade();
		void		decrementGrade();

		void		signForm(Form &form);

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

std::ostream &operator<<(std::ostream &o, const Bureaucrat &ref);

#endif