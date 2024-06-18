/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:10:55 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/18 12:13:40 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"

class Intern
{
	private:
	public:
		Intern();				// Default constructor
		Intern(const Intern &ref);				// Copy constructor
		Intern &operator=(const Intern &ref);		// Copy assignment operator
		~Intern();								// Destructor

		AForm*		makeForm(std::string form, std::string target);
};

#endif