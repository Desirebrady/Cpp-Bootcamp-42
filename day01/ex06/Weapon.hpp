/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:59:06 by dshumba           #+#    #+#             */
/*   Updated: 2019/06/05 09:59:07 by dshumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_H_
#define _WEAPON_H_

#include <iostream>
#include <string>

class Weapon{
    public:
        std::string type;

        Weapon(std::string type);
        ~Weapon();

        std::string getType();
        void setType(std::string type);
};
#endif //_WEAPON_H_
