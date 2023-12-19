/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 08:48:31 by osarsari          #+#    #+#             */
/*   Updated: 2023/12/19 08:50:00 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include <string>
#include <iostream>
#include "Weapon.hpp"

class	HumanA
{

	public:

		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);

		void	attack(void) const;

	private:

		std::string		_name;
		Weapon			&_weapon;

};

#endif