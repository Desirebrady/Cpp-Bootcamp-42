#include "FragTrap.hpp" 
#include <ctime>

FragTrap::FragTrap(std::string name)
{
    std::cout << name <<" I am born : The world could use more of me" << std::endl;

    // ClapTrap(name, 100, 30, 20, 5);
    this->_type = "FR4G-TP";
    this->_name = name;
    this->_Ep = 100;
    this->_meleeAtk= 30;
    this->_rangedAtk = 20;
    this->_amourReduc = 5;
}

FragTrap::~FragTrap()
{
}

FragTrap::FragTrap()
{
}

FragTrap		&FragTrap::operator=(FragTrap const	&rhs)
{
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	return *this;
}

void FragTrap::coalescence(std::string const &target)
{
    if(this->_Hp <= 0)
    {
        std::cout << getName() << " - You can't attack you dead fool, fool" << std::endl;
    }
    else
    {
        this->_randomAtk = this->_coalescence;
        std::cout << "FR4G-TP <" 
                << getName()  
                << "> Coalescence is ready -'Geill do mo thoil!' causing "
                << target
                << " <" 
                << this->_coalescence
                << ">  points of damage!"    
                << std::endl;
    }
    
}

void FragTrap::aimbot(std::string const &target)
{
    if(this->_Hp <= 0)
    {
        std::cout << getName() << " - You can't attack you dead fool, fool" << std::endl;
    }
    else
    {
        this->_randomAtk = this->_aimbot;
        std::cout << "FR4G-TP <" 
                << getName()  
                << "> my tactical visor is ready -'I've got you in my sights' causing "
                << target
                << " <"
                << this->_aimbot
                << ">  points of damage!"    
                << std::endl;
    }
    
}


void FragTrap::pulsebomb(std::string const &target)
{
    if(this->_Hp <= 0)
    {
        std::cout << getName() << " - You can't attack you dead fool, fool" << std::endl;
    }
    else
    {
        this->_randomAtk = this->_pulsebomb;
        std::cout << "FR4G-TP <" 
                  << getName() 
                  << "> Pulsebomb ready - 'Wait for it!.........boom!' causing " 
                  << target
                  << " <"
                  << this->_pulsebomb
                  << ">  points of damage!"    
                  << std::endl;
    }
}
void FragTrap::nerfThis(std::string const &target)
{
    if(this->_Hp <= 0)
    {
        std::cout << getName() << " - You can't attack you dead fool, fool" << std::endl;
    }
    else
    {
        this->_randomAtk = this->_dvaUlt;
        std::cout << "FR4G-TP <" 
                << getName() 
                << "> I am ready to initiate self destruct sequence - 'Nerf This!.......' causing " 
                << target
                << " <"
                << this->_dvaUlt
                << ">  points of damage!"    
                << std::endl;
    }
}
void FragTrap::highNoon(std::string const &target)
{
    if(this->_Hp <= 0)
    {
        std::cout << getName() << " - You can't attack you dead fool, fool" << std::endl;
    }
    else
    {
        this->_randomAtk = this->_highNoon;
        std::cout << "FR4G-TP <" 
                << getName() 
                << "> High noon is ready - 'It's High time........' causing " 
                << target 
                << " <"
                << this->_highNoon
                << ">  points of damage!"    
                << std::endl;
    }
}

void FragTrap::vaulhunter_dot_exe(std::string const &target)
{
    if(this->_Hp <= 0)
    {
        std::cout << getName() << " - You can't attack you dead fool, fool" << std::endl;
    }
    else
    {

    if (this->_Ep < 25)
    {
        std::cout << getName() << ": I neeeeed more chakra dammnit" << std::endl;
    }
    else
    {
        int random;
        this->_Ep -= 25;
        srand(time(NULL));
        random = rand() % 5;
        switch (random)
        {
            case 1:
                nerfThis(target);
                break;
            case 2:
                highNoon(target);
                break;
            case 3:
                aimbot(target);
                break;
            case 4:
                coalescence(target);
                break;
            default:
                pulsebomb(target);
                break;
        }
    }
    }

}
int FragTrap::getRandomDamage()
{
    return(this->_randomAtk);
}