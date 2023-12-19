/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <aperez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 13:55:25 by aperez-b          #+#    #+#             */
/*   Updated: 2022/06/06 15:44:22 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	Harl_translate(char *argv)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
		if (levels[i] == argv)
			return (i);
	return (-1);
}

void	Harl_switch(char *argv, Harl &k)
{
	switch (Harl_translate(argv))
	{
		case 0:
			k.complain("DEBUG");
		case 1:
			k.complain("INFO");
		case 2:
			k.complain("WARNING");
		case 3:
			k.complain("ERROR");
			break ;
		default:
			std::cout << \
				"[ Probably complaining about insignificant problems ]" << \
				std::endl;
	}
}

int	main(int argc, char **argv)
{
	Harl k;

	if (argc != 2)
	{
		std::cout << \
			"Usage: ./harl [DEBUG|INFO|WARNING|ERROR]" << \
			std::endl;
		return (1);
	}
	else
		Harl_switch(argv[1], k);
	return (0);
}