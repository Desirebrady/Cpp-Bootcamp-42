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


