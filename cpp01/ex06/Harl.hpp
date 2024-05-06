/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 19:56:54 by dximenez          #+#    #+#             */
/*   Updated: 2024/05/06 21:02:26 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <iomanip>

class Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	public:
		Harl(/* args */);
		~Harl();

		void	complain(std::string level);
};

typedef	void (Harl::* harl_t) (void);

typedef struct s_harl
{
	std::string	text;
	harl_t		func;
}		t_harl;


#endif