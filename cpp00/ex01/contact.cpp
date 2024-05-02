/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:46:28 by dximenez          #+#    #+#             */
/*   Updated: 2024/05/02 13:14:37 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
using std::string;

Contact::Contact(string first_name, string last_name, string nickname, string phone_number, string darkest_secret)
{
	_first_name = first_name;
	_last_name = last_name;
	_nickname = nickname;
	_phone_number = phone_number;
	_darkest_secret = darkest_secret;
}

void Contact::set_first_name(string first_name)
{
	_first_name = first_name;
}

void Contact::set_last_name(string last_name)
{
	_last_name = last_name;
}

void Contact::set_nickname(string nickname)
{
	_nickname = nickname;
}

void Contact::set_phone_number(string phone_number)
{
	_phone_number = phone_number;
}

void Contact::set_darkest_secret(string darkest_secret)
{
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