/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 19:39:25 by dximenez          #+#    #+#             */
/*   Updated: 2024/05/06 19:44:31 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "program.hpp"
#include <fstream>

void	program(std::string filename, std::string s1, std::string s2)
{
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		str;

	infile.open(filename.c_str());
	outfile.open(filename + ".replace", std::ofstream::out | std::ofstream::trunc);
	outfile.clear();
	
	if (infile.is_open())
		std::getline(infile, str, '\0');

	int	i;
	while ((i = str.find(s1)) != -1)
	{
		str.erase(i, s1.length());
		str.insert(i, s2);
	}

	outfile << str;
	infile.close();
	outfile.close();
}
