#include "Peon.hpp"


Peon::Peon()
{
}

Peon::Peon(std::string name)
{
    std::cout << "Some random victim called " << name << " just pooped up!" << std::endl;
    std::cout << "Zog zog." << std::endl;
    this->_name = name;
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const
{
    std::cout << this->_name << " has been turned into a pink pony !" << std::endl;
}
