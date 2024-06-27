/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:46:28 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/27 11:14:06 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::constructor(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
{
	_first_name = first_name;
	_last_name = last_name;
	_nickname = nickname;
	_phone_number = phone_number;
	_darkest_secret = darkest_secret;
}

std::string	Contact::get_first_name()
{
	return _first_name;
}

std::string	Contact::get_last_name()
{
	return _last_name;
}

std::string	Contact::get_nickname()
{
	return _nickname;
}

std::string	Contact::get_phone_number()
{
	return _phone_number;
}

std::string	Contact::get_darkest_secret()
{
	return _darkest_secret;
}