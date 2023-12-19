/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 07:30:35 by osarsari          #+#    #+#             */
/*   Updated: 2023/12/19 07:35:08 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class	Zombie
{
	private:
		std::string	_name;

	public:
		Zombie(std::string name);
		Zombie(void);
		~Zombie(void);

		void	announce(void);
		void	setName(std::string name);
};

Zombie	*newZombie(std::string name);
Zombie	*zombieHorde(int N, std::string name);
void	randomChump(std::string name);

#endif