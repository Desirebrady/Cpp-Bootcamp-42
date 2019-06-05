/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:00:31 by dshumba           #+#    #+#             */
/*   Updated: 2019/06/05 10:00:32 by dshumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMAN_H_
#define _HUMAN_H_

#include <iostream>
#include <string>

struct t_attack;

class Human
{
    private:
        static t_attack		_attacks[];
		static int			_attack_number;
        void meleeAttack(std::string const & target); 
        void rangedAttack(std::string const & target); 
        void intimidatingShout(std::string const & target);
    public:
        std::string name;
        Human(std::string name);
        ~Human();
        void action(std::string const & action_name, std::string const & target);
};
#endif //_HUMAN_H_
