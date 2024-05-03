/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:28:02 by dximenez          #+#    #+#             */
/*   Updated: 2024/05/03 19:24:06 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>

class PhoneBook
{
	private:
		Contact			_contacts[8];
		unsigned short	_count;
	public:
		PhoneBook();

		void	add();
		void	search();
};

#endif