#ifndef _ZOMBIEEVENT_H_
#define _ZOMBIEEVENT_H_

#include <iostream>
#include "Zombie.hpp"

class ZombieEvent
{
public:
	ZombieEvent();
	~ZombieEvent();
	std::string type;

	void setZombieType(std::string type);
	Zombie*	newZombie(std::string name);
};

#endif

