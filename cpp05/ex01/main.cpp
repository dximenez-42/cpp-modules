/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 18:20:34 by dximenez          #+#    #+#             */
/*   Updated: 2024/06/17 20:21:24 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	try
	{
		Bureaucrat b("Paco", 1);
		Form f("Form1", 10, 1);

		b.signForm(f);
		
		std::cout << f << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}
