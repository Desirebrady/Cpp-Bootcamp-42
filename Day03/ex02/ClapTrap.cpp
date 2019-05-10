#include "ClapTrap.hpp"


ClapTrap::ClapTrap()
{
}

ClapTrap::ClapTrap(std::string name, int ep, int melee, int ranged, int amour)
{
    this->_name = name;
    this->_Ep = ep;
    this->_meleeAtk = melee;
    this->_rangedAtk = ranged;
    this->_amourReduc = amour;
}

ClapTrap::~ClapTrap()
{
}

ClapTrap
&ClapTrap::operator=(ClapTrap  const &ClapTrap)
{
    if (this != &ClapTrap)
    {
        this->_Hp = ClapTrap._Hp;
        this->_meleeAtk = ClapTrap._meleeAtk;
        this->_rangedAtk = ClapTrap._rangedAtk;
        this->_amourReduc = ClapTrap._amourReduc;
    }
    return (*this);
}


void ClapTrap::meleeAttack(std::string const &target)
{
    if(this->_Hp <= 0)
    {
        std::cout << getName() << " - You can't attack you dead fool, fool" << std::endl;
    }
    else
    {
    std::cout << getName() 
              << " attacks "
              << target
              << " with a melee attack causing " 
              << this->_meleeAtk
              << std::endl;
    }
}

void ClapTrap::rangedAttack(std::string const &target)
{   if(this->_Hp <= 0)
    {
        std::cout << getName() << " - You can't attack you dead fool, fool" << std::endl;
    }
    else
    {
    std::cout << getName() 
              << " attacks "
              << target
              << " with a ranged attack causing "
              << this->_rangedAtk
              << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->_Hp <= 0)
    {
        std::cout << getName() << " - You can't attack you dead fool, fool" << std::endl;
    }
    else
    {
    amount -= this->_amourReduc;
    if (this->_Hp <= 0)
    {
        std::cout << "Dude have you seen my ghost? "<<std::endl;
    }
    else
    {
        this->_Hp -= amount;
        // std::cout <<this->name <<" takes <" << amount
        //           << "> points of damage "
        //           << std::endl;
    }
    if(this->_Hp < 0)
    {
        std::cout << getName() << " - Has fallen, his body gets delete()" << std::endl;
    }
    else
    {
        std::cout << "<" << getName() 
              << "> "
              <<"You have " 
              << this->_Hp 
              << " HP remaining." << std::endl;
    }
    }
    
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->_Hp <= 0)
    {
        std::cout << getName() << " - You can't heal! you dead fool, fool" << std::endl;
    }
    else
    {
        this->_Ep -= 25;
        if( this->_Ep < 25)
        {
            std::cout << getName() << ": I need morrrrre chakra" << std::endl;
        }
        else
        {
            if(this->_Hp + amount >= this->_maxHp)
            {   
                this->_Hp = 100;
                std::cout << getName() <<" - Your health is full" << std::endl;
            }
            else
            {
                this->_Hp += amount;
                std::cout << getName() <<"- Your health increased by "
                        << amount
                        << std::endl;
            }
        } 
    }
}

std::string ClapTrap::getName()
{
    return (this->_name);
}

int ClapTrap::getEp()
{
    return (this->_Ep);
}

int ClapTrap::getHp()
{
    return (this->_Hp);
}

int ClapTrap::getMeleeDamage()
{
    return (this->_meleeAtk);
}

int ClapTrap::getRangedDamage()
{
    return (this->_rangedAtk);
}