/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:46:28 by dximenez          #+#    #+#             */
/*   Updated: 2024/05/03 19:25:07 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
using std::string;

void	Contact::constructor(string first_name, string last_name, string nickname, string phone_number, string darkest_secret)
{
	_first_name = first_name;
	_last_name = last_name;
	_nickname = nickname;
	_phone_number = phone_number;
	_darkest_secret = darkest_secret;
}

string	Contact::get_first_name()
{
	return _first_name;
}

string	Contact::get_last_name()
{
	return _last_name;
}

string	Contact::get_nickname()
{
	return _nickname;
}

string	Contact::get_phone_number()
{
	return _phone_number;
}

string	Contact::get_darkest_secret()
{
	return _darkest_secret;
}