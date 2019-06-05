/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:55:48 by dshumba           #+#    #+#             */
/*   Updated: 2019/06/05 09:55:50 by dshumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIEHORDE_H_
#define _ZOMBIEHORDE_H_

#include <iostream>
#include <time.h>
#include "Zombie.hpp"
class ZombieHorde
{
public:
	std::string type;
	ZombieHorde(int N);
	~ZombieHorde();

	std::string name(void);

	void setZombieType(std::string type);

	Zombie *newZombie(std::string name);

private:

};
#endif 
