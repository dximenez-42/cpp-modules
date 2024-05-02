/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:28:27 by dximenez          #+#    #+#             */
/*   Updated: 2024/05/02 13:28:53 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

using std::string;

class Contact
{
	private:
		unsigned short	_id;
		string			_first_name;
		string			_last_name;
		string			_nickname;
		string			_phone_number;
		string			_darkest_secret;
	public:
		Contact() {}
	
		Contact(string first_name, string last_name, string nickname, string phone_number, string darkest_secret);
		
		void	set_first_name(string first_name);
		void	set_last_name(string last_name);
		void	set_nickname(string nickname);
		void	set_phone_number(string phone_number);
		void	set_darkest_secret(string darkest_secret);

		string	get_first_name();
		string	get_last_name();
		string	get_nickname();
		string	get_phone_number();
		string	get_darkest_secret();
};

#endif