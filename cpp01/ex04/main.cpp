/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 19:40:32 by dximenez          #+#    #+#             */
/*   Updated: 2024/05/04 20:10:13 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "program.hpp"

int main(int argc, char const *argv[])
{
	if (argc != 4)
	{
		std::cout	<< "Error. Input must be:" << std::endl
					<< argv[0] << " <filename> <s1> <s2>"
					<< std::endl;
		return 1;
	}

	std::string	filename = argv[1];

	if (access(filename.c_str(), F_OK) == -1)
	{
		std::cout	<< "Error. Filename \"" << filename << "\" doesn't exist"
					<< std::endl;
		return 1;
	}

	std::string	s1 = argv[2];
	std::string	s2 = argv[3];
	program(filename, s1, s2);
}
