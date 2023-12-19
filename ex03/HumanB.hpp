/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 08:51:44 by osarsari          #+#    #+#             */
/*   Updated: 2023/12/19 08:51:44 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include <string>
#include <iostream>
#include "Weapon.hpp"

class	HumanB
{

	public:

		HumanB(std::string name);
		~HumanB(void);

		void	attack(void) const;
		void	setWeapon(Weapon &weapon);

	private:

		std::string		_name;
		Weapon			*_weapon;

};

#endif