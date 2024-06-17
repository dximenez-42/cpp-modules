/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 18:08:54 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/17 18:28:33 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iomanip>
#include <iostream>

class Bureaucrat
{
	private:
		const std::string	_name;
		uint8_t				_grade;
	public:
		Bureaucrat(const std::string name, uint8_t grade);				// Default constructor
		Bureaucrat(const Bureaucrat &ref);				// Copy constructor
		Bureaucrat &operator=(const Bureaucrat &ref);		// Copy assignment operator
		~Bureaucrat();								// Destructor

		std::string	getName() const;
		uint8_t		getGrade() const;

		void		incrementGrade();
		void		decrementGrade();

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