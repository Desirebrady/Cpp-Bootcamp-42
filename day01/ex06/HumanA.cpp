/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:58:27 by dshumba           #+#    #+#             */
/*   Updated: 2019/06/05 09:58:28 by dshumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):
        name(name),weapon(weapon)
{

}
HumanA::~HumanA()
{
    
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with his " << weapon.getType() << std::endl;
}
