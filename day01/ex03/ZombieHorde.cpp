/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:55:33 by dshumba           #+#    #+#             */
/*   Updated: 2019/06/05 09:55:35 by dshumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

	ZombieHorde::ZombieHorde(int N)
	{
		std::cout << "ZombieHorde: "<< N << " zombies created"<< std::endl;
	}

	ZombieHorde::~ZombieHorde()
	{
		std::cout <<"Zombies in horde deleted" << std::endl;
	}
	std::string	ZombieHorde::name(void)
	{
		char	*tab[] = {
			(char *)"Desire",
			(char *)"Brady",
			(char *)"Bradysee",
			(char *)"Heya",
		};
		int random;
		random = time(NULL) % 4;
		return((std::string) tab[random]);
	}
	void ZombieHorde::setZombieType(std::string type)
	{
		/*std::cout << "setZombieType" << std::endl;*/
		this->type = type;
	}
	Zombie * ZombieHorde::newZombie(std::string name)
	{
		/*std::cout << "newZombie" << std::endl;*/
		Zombie *newZombie = new Zombie(name, this->type);
		return newZombie;
	}
