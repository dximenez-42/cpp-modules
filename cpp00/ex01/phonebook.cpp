/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:26:31 by dximenez          #+#    #+#             */
/*   Updated: 2024/05/02 13:44:29 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
using std::string;

PhoneBook::PhoneBook()
{
	_count = 0;
}

static bool	is_valid_number(string s)
{
	for (size_t i = 0; i < s.length(); i++)
		if (!isdigit(s[i]))
			return (false);
	return (true);
}

static Contact	get_new_contact()
{
	Contact	contact;
	string	first_name, last_name, nickname, phone_number, darkest_secret;

	std::cout << "First name:\t";
	std::cin >> first_name;
	contact.set_first_name(first_name);

	std::cout << "Last name:\t";
	std::cin >> last_name;
	contact.set_last_name(last_name);

	std::cout << "Nickname:\t";
	std::cin >> nickname;
	contact.set_nickname(nickname);

	do
	{
		std::cout << "Phone number:\t";
		std::cin >> phone_number;
	} while (!is_valid_number(phone_number));
	contact.set_phone_number(phone_number);

	std::cout << "Darkest secret:\t";
	std::cin >> darkest_secret;
	contact.set_darkest_secret(darkest_secret);

	return (contact);
}

void	PhoneBook::add()
{
	if (_count == 8)
	{
		for (size_t i = 0; i < 7; i++)
			_contacts[i] = _contacts[i + 1];
		_contacts[7] = get_new_contact();
	}
	else
	{
		_contacts[_count] = get_new_contact();
		++_count;
	}
}

static string	truncate(string s)
{
	if (s.length() <= 10)
		return s;
	else
		return s.substr(0, 9) + ".";
}

void	PhoneBook::search()
{
	if (_count == 0)
		return;

	std::cout	<< std::setw(10) << "ID" << "|"
				<< std::setw(10) << "FIRST NAME" << "|"
				<< std::setw(10) << "LAST NAME" << "|"
				<< std::setw(10) << "NICKNAME" << std::endl;

	for (short i = 0; i < _count; i++)
	{
		std::cout	<< std::setw(10) << i << "|"
					<< std::setw(10) << _contacts[i].get_first_name() << "|"
					<< std::setw(10) << _contacts[i].get_last_name() << "|"
					<< std::setw(10) << _contacts[i].get_nickname() << std::endl;
	}

	std::cout << "Enter an id to display the information:\t";
	int	id;
	std::cin >> id;

	if (id < 0 || id > 8)
	{
		std::cout << "Id out of range.";
		return;
	}

	std::cout << "Contact " << id << std::endl;
	std::cout << "First name:\t" << _contacts[id].get_first_name() << std::endl;
	std::cout << "Last name:\t" << _contacts[id].get_last_name() << std::endl;
	std::cout << "Nickname:\t" << _contacts[id].get_nickname() << std::endl;
	std::cout << "Phone number:\t" << _contacts[id].get_phone_number() << std::endl;
	std::cout << "Darkest secret:\t" << _contacts[id].get_darkest_secret() << std::endl;
}

int main(int ac, char **av)
{
	PhoneBook	phonebook;
	string		read;
	
	while (true)
	{
		std::cin >> read;
		if (strcmp(read.c_str(), "ADD") == 0)
			phonebook.add();
		else if (strcmp(read.c_str(), "SEARCH") == 0)
			phonebook.search();
		else if (strcmp(read.c_str(), "EXIT") == 0)
			break;
	}
}