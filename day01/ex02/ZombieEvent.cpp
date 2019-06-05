/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:54:09 by dshumba           #+#    #+#             */
/*   Updated: 2019/06/05 09:54:11 by dshumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"


ZombieEvent::ZombieEvent()
{
}


ZombieEvent::~ZombieEvent()
{

}

void ZombieEvent::setZombieType(std::string type)
{
	std::cout << "setZombieType" << std::endl;
	this->type = type;
}

Zombie * ZombieEvent::newZombie(std::string name)
{
	std::cout << "newZombie" << std::endl;
	Zombie *newZombie = new Zombie( name, this->type);
	return newZombie;
}


