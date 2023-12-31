/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:52:50 by osarsari          #+#    #+#             */
/*   Updated: 2023/12/19 10:52:51 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void	Harl::debug(void)
{
	std::cout << MAGENTA << \
	"===============================[DEBUG]===============================" << \
	DEFAULT << std::endl;
	std::cout << "I love to get extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger.";
	std::cout << " I just love it!" << std::endl;
	std::cout << MAGENTA << \
	"=====================================================================" << \
	DEFAULT << std::endl;
}

void	Harl::info(void)
{
	std::cout << LIGHTBLUE << \
	"===============================[INFO]===============================" << \
	DEFAULT << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money.";
	std::cout << " You don't put enough! If you did I would not have to ask";
	std::cout << " for it!" << std::endl;
	std::cout << LIGHTBLUE << \
	"====================================================================" << \
	DEFAULT << std::endl;
}

void	Harl::warning(void)
{
	std::cout << YELLOW << \
	"==============================[WARNING]==============================" << \
	DEFAULT << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << " I've been coming here for years and you just started ";
	std::cout << "working here last month." << std::endl;
	std::cout << YELLOW << \
	"=====================================================================" << \
	DEFAULT << std::endl;
}

void	Harl::error(void)
{
	std::cout << RED << \
	"===============================[ERROR]===============================" << \
	DEFAULT << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
	std::cout << RED << \
	"=====================================================================" << \
	DEFAULT << std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*ptr_complain[4])(void) = {&Harl::debug, &Harl::info, \
		&Harl::warning, &Harl::error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
		if (levels[i] == level)
			(this->*ptr_complain[i])();
}
