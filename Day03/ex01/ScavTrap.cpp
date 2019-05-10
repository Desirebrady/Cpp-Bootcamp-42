#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): _name(name)
{
    std::cout << "Welcome to the end, i am " << name << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "clap trap has been destroyed" << std::endl;
}
void ScavTrap::meleeAttack(std::string const &target)
{
    
    std::cout << "Scav-TP <" 
              << getName() 
              << "> attacks " 
              << target
              << "  with a melee attack causing <" 
              << this->_meleeAtk
              << ">  points of damage!"    
              << std::endl;
}

void ScavTrap::rangeAttack(std::string const &target)
{
    std::cout << "Scav-TP <" 
              << getName()  
              << "> attacks " 
              << target
              << "  at range, causing <" 
              << this->_rangedAtk
              << ">  points of damage!"    
              << std::endl;
}
void ScavTrap::takeDamage(unsigned int amount)
{
    if (this->_hp <= 0)
    {
        std::cout << "Dude have you seen my ghost? "<<std::endl;
    }
    else
    {
        this->_hp -= amount;
        // std::cout <<this->name <<" takes <" << amount
        //           << "> points of damage "
        //           << std::endl;
    }
    if(this->_hp < 0)
    {
        std::cout << getName() << " Has fallen, his body gets delete()" << std::endl;
    }
    else
    {
        std::cout << "<" << getName() 
              << "> "
              <<"You have " 
              << this->_hp 
              << " HP remaining." << std::endl;
    }
    
}

void ScavTrap::challengeNewcomer(std::string const &target)
{
    std::string _challenge[] = {
        "Watch game of thrones from season 1 till the current without moving of stretching",
        "Call Your Crush And Explain The Rules Of Monopoly To Him/Her",
        "Eat A Teaspoon Of Either Mustard, Soy Sauce Or Hot Sauce",
        "Talk Without Closing Your Mouth",
        "Color One Of Your Front Teeth Black",
    };
    srand(time(NULL));
    int random;
    random = rand() % 5;
    this->_challenge = _challenge[random];

    std::cout << this->_name << ": I challenge you to " << this->_challenge 
              << " right now! Good luck, " << target 
              <<  "... Muahahaha :D" << std::endl;
}

std::string ScavTrap::getChallenge(void)
{
    return (this->_challenge);
}

std::string ScavTrap::getName(void)
{
    return (this->_name);
}