#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : name(name), type(type)
{
	std::cout << "Zombie created..." << std::endl;
}


Zombie::~Zombie()
{
	std::cout << "Zombe deleted..." << std::endl;
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
