/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 08:44:06 by osarsari          #+#    #+#             */
/*   Updated: 2024/02/21 14:04:45 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon
{

  public:
    Weapon(std::string type);
    ~Weapon(void);

    const std::string &getType(void);
    void setType(std::string type);

  private:
    std::string _type;
};

#endif