/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 08:45:45 by osarsari          #+#    #+#             */
/*   Updated: 2024/02/21 14:04:52 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->_type = type;
    return;
}

Weapon::~Weapon(void)
{
    return;
}

const std::string &Weapon::getType(void)
{
    return (this->_type);
}

void Weapon::setType(std::string type)
{
    this->_type = type;
    return;
}
