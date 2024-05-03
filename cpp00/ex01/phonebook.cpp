/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:26:31 by dximenez          #+#    #+#             */
/*   Updated: 2024/05/03 22:27:23 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	_count = 0;
}

static bool	is_valid_number(std::string s)
{
	for (size_t i = 0; i < s.length(); i++)
		if (!isdigit(s[i]))
			return (false);
	return (true);
}

static Contact	get_new_contact()
{
	Contact	contact;
	std::string	first_name, last_name, nickname, phone_number, darkest_secret;

	std::cout << "First name:\t";
	std::cin >> first_name;

	std::cout << "Last name:\t";
	std::cin >> last_name;

	std::cout << "Nickname:\t";
	std::cin >> nickname;

	do
	{
		std::cout << "Phone number:\t";
		std::cin >> phone_number;
	} while (!is_valid_number(phone_number));

	std::cout << "Darkest secret:\t";
	std::cin >> darkest_secret;

	contact.constructor(first_name, last_name, nickname, phone_number, darkest_secret);
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

static std::string	truncate(std::string s)
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
					<< std::setw(10) << truncate(_contacts[i].get_first_name()) << "|"
					<< std::setw(10) << truncate(_contacts[i].get_last_name()) << "|"
					<< std::setw(10) << truncate(_contacts[i].get_nickname()) << std::endl;
	}

	std::cout << "Enter an id to display the information:\t";
	std::string	id;
	std::cin >> id;

	if (!is_valid_number(id))
	{
		std::cout << "Invalid input." << std::endl;
		return;
	}

	if (atoi(id.c_str()) < 0 || atoi(id.c_str()) > _count - 1)
	{
		std::cout << "Id out of range." << std::endl;
		return;
	}

	std::cout << "Contact " << atoi(id.c_str()) << std::endl;
	std::cout << "First name:\t" << _contacts[atoi(id.c_str())].get_first_name() << std::endl;
	std::cout << "Last name:\t" << _contacts[atoi(id.c_str())].get_last_name() << std::endl;
	std::cout << "Nickname:\t" << _contacts[atoi(id.c_str())].get_nickname() << std::endl;
	std::cout << "Phone number:\t" << _contacts[atoi(id.c_str())].get_phone_number() << std::endl;
	std::cout << "Darkest secret:\t" << _contacts[atoi(id.c_str())].get_darkest_secret() << std::endl;
}

int main()
{
	PhoneBook	phonebook;
	std::string		read;
	
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