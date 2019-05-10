#include "ScavTrap.hpp"
#include <ctime>

ScavTrap::ScavTrap()
{
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << name <<" I am born : i will punish this world" << std::endl;
    this->_type = "SCAV-TP";
    this->_name = name;
    this->_Ep = 50;
    this->_meleeAtk= 20;
    this->_rangedAtk = 15;
    this->_amourReduc = 3;
}

ScavTrap::~ScavTrap()
{
}

void ScavTrap::challengeNewcomer(std::string const &target)
{
    std::string _challenge[] = {
        "Watch game of thrones from season 1 till the current without moving or stretching",
        "Call Your Crush And Explain The Rules Of Monopoly To Him/Her",
        "Eat A Teaspoon Of Either Mustard, Soy Sauce Or Hot Sauce",
        "Talk Without Closing Your Mouth",
        "Color One Of Your Front Teeth Black",
    };
    if(this->_Hp <= 0)
    {
        std::cout << getName() << " - You can't attack you dead fool, fool" << std::endl;
    }
    else
    {
        srand(time(NULL));
        int random;
        random = rand() % 5;
        this->_challenge = _challenge[random];

        std::cout << this->_name << ": I challenge you to " << this->_challenge 
                  << " right now! Good luck, " << target 
                  <<  "... Muahahaha :D" << std::endl;
    }
}

std::string ScavTrap::getChallenge()
{
    return(this->_challenge);
}