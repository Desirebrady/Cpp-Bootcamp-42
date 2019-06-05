/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:58:58 by dshumba           #+#    #+#             */
/*   Updated: 2019/06/05 09:58:59 by dshumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include<string>

Weapon::Weapon(std::string type)
{
    this->type = type;
}
Weapon::~Weapon()
{
    
}
std::string Weapon::getType()
{
    const std::string &type = this->type;
    return (type);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}
