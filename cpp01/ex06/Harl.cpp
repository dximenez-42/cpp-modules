/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 19:57:31 by dximenez          #+#    #+#             */
/*   Updated: 2024/05/06 21:20:01 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}

void	Harl::debug()
{
	std::cout	<< "[ DEBUG ]" << std::endl
				<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!"
				<<	std::endl << std::endl;
}

void	Harl::info()
{
	std::cout	<< "[ INFO ]" << std::endl
				<< "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"
				<<	std::endl << std::endl;
}

void	Harl::warning()
{
	std::cout	<< "[ WARNING ]" << std::endl
				<< "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month."
				<<	std::endl << std::endl;
}

void	Harl::error()
{
	std::cout	<< "[ ERROR ]" << std::endl
				<< "This is unacceptable! I want to speak to the manager now."
				<<	std::endl << std::endl;
}

static void	insignificant_error()
{
	std::cout	<< "[ Probably complaining about insignificant problems ]"
				<<	std::endl;
}

void	Harl::complain(std::string level)
{
	t_harl	commands[4] = {
		{"DEBUG", &Harl::debug},
		{"INFO", &Harl::info},
		{"WARNING", &Harl::warning},
		{"ERROR", &Harl::error}
	};
	
	for (size_t i = 0; i < 4; i++)
	{
		if (level == commands[i].text)
			switch (i)
			{
				case 0:
					(this->*commands[0].func)();
				case 1:
					(this->*commands[1].func)();
				case 2:
					(this->*commands[2].func)();
				case 3:
					(this->*commands[3].func)();
				default:
					return;
			}
	}
	insignificant_error();
}