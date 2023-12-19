/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 09:11:45 by osarsari          #+#    #+#             */
/*   Updated: 2023/12/19 09:11:46 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage: ./replace <filename> <string1> <string2>" << \
			std::endl;
		return (1);
	}
	Replace	replace(argv[1], argv[2], argv[3]);
	replace.replace();
	return (0);
}
