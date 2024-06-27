/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:28:27 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/27 11:22:28 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <stdlib.h>

class Contact
{
	private:
		std::string			_first_name;
		std::string			_last_name;
		std::string			_nickname;
		std::string			_phone_number;
		std::string			_darkest_secret;
	public:
		Contact() {}
		
		void	constructor(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);

		std::string	get_first_name();
		std::string	get_last_name();
		std::string	get_nickname();
		std::string	get_phone_number();
		std::string	get_darkest_secret();
};

#endif