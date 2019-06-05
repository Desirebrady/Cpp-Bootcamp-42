/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:58:33 by dshumba           #+#    #+#             */
/*   Updated: 2019/06/05 09:58:35 by dshumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANA_H_
#define _HUMANA_H_

#include <iostream>
#include "Weapon.hpp"

class   HumanA{
    public:
        Weapon &weapon;
        std::string name;

        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        
        void attack();
};

#endif // !_HUMANA_H_
