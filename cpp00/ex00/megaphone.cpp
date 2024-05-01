/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:02:52 by dximenez          #+#    #+#             */
/*   Updated: 2024/05/01 15:22:10 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char    ft_toupper(char c)
{
    if (c >= 'a' && c <= 'z')
        return (c - ('a' - 'A'));
    return (c);
}

int	main(int ac, char **av)
{
    if (ac < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
        for (int i = 1; i < ac; i++)
        {
            for (int j = 0; av[i][j] != '\0'; j++)
                std::cout << ft_toupper(av[i][j]);
        }
    std::cout << std::endl;
}
