#include "Human.hpp"

Human::Human(void) : brain()
{
	return;
}

Human::~Human(void)
{
	return;
}

std::string		Human::identify(void) const
{
	return this->brain.identify();
}

Brain			Human::getBrain(void)
{
	return this->brain;
}