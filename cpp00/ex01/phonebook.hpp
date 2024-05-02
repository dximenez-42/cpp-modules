/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:28:02 by dximenez          #+#    #+#             */
/*   Updated: 2024/05/01 20:21:51 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"
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