/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:55:09 by dshumba           #+#    #+#             */
/*   Updated: 2019/06/05 09:55:10 by dshumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : name(name), type(type)
{
	std::cout << "Zombie created..." << std::endl;
}


Zombie::~Zombie()
{
	std::cout << "Zombie deleted..." << std::endl;
}

std::string Zombie::getName(void)
{
	return this->name;

}

std::string Zombie::getType(void)
{
	return this->type;
}
void Zombie::announce(void)
{
	std::cout << "<" << this->getName() << " (" << this->getType() << ")> Braiiiiiiinnnssss..." << std::endl;

}
