/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:58:46 by dshumba           #+#    #+#             */
/*   Updated: 2019/06/05 09:58:50 by dshumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANB_H_
#define _HUMANB_H_

#include <iostream>
#include "Weapon.hpp"
#include <string>

class HumanB{
    public:
        Weapon *weapon;
        std::string name;

        HumanB(std::string name);
        ~HumanB();

        void setWeapon(Weapon &weapon);
        void attack();
};
#endif //_HUMANB_H_
