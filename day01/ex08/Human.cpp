/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:00:21 by dshumba           #+#    #+#             */
/*   Updated: 2019/06/05 10:00:25 by dshumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <string>

struct t_attack
{
	std::string		name;
	void			(Human::*func)(std::string const &);
};

int				Human::_attack_number = 3;
t_attack		Human::_attacks[] = {
	{"meleeAttack", &Human::meleeAttack},
	{"rangedAttack", &Human::rangedAttack},
	{"intimidatingShout", &Human::intimidatingShout}
};

Human::Human(std::string name): name(name)
{

}
Human::~Human()
{

}

void Human::meleeAttack(std::string const & target)
{
    std::cout << name 
              << " engages " 
              << target 
              << " with a melee attack " 
              << std::endl;
}

void Human::rangedAttack(std::string const & target)
{
    std::cout << name 
            << " engages " 
            << target 
            << " with a ranged attack " 
            << std::endl;
}

void Human::intimidatingShout(std::string const & target)
{
    std::cout << name 
              << " begins intimidating " 
              << target 
              << " with a shout " 
              << std::endl;
}


void Human::action(std::string const & action_name, std::string const & target)
{
    int i = 0 ;
    while( i < _attack_number)
    {
        if (action_name == _attacks[i].name)
		{
			(this->*_attacks[i].func)(target);
			break;
		}
		i++;
    }
}
