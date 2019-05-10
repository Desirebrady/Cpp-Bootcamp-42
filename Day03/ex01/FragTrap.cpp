#include "FragTrap.hpp"

FragTrap::FragTrap()
{
}
FragTrap::FragTrap(std::string name): name(name)
{
    std::cout << "FR4G-TP <" << name << "> pfft i am born, here i come " << std::endl;
}

FragTrap::~FragTrap()
{
}
FragTrap
&FragTrap::operator=(FragTrap  const &fragTrap)
{
    if (this != &fragTrap)
    {
        this->_hit_pt = fragTrap._hit_pt;
        this->_melee_atk = fragTrap._melee_atk;
        this->_ranged_atk = fragTrap._ranged_atk;
        this->_armour_dmg = fragTrap._armour_dmg;
    }
    return (*this);
}



void FragTrap::meleeAttack(std::string const &target)
{
    this->_randomAtk = this->_melee_atk;
    std::cout << "FR4G-TP <" 
              << getName() 
              << "> attacks " 
              << target
              << "  with a melee attack causing <" 
              << this->_melee_atk
              << ">  points of damage!"    
              << std::endl;
}

void FragTrap::rangeAttack(std::string const &target)
{
    this->_randomAtk = this->_ranged_atk;
    std::cout << "FR4G-TP <" 
              << getName()  
              << "> attacks " 
              << target
              << "  at range, causing <" 
              << this->_ranged_atk
              << ">  points of damage!"    
              << std::endl;
}

void FragTrap::odinsPower(std::string const &target)
{
    this->_randomAtk = this->_odins_wrath;
    std::cout << "FR4G-TP <" 
              << getName()  
              << "> picks up THORS' hammer and summons " 
              << "  ODINS power! , causing <" 
              << this->_odins_wrath
              << ">  points of damage!"    
              << std::endl;
    
}

void FragTrap::ironMan(std::string const &target)
{
    this->_randomAtk = this->_iron_mans_rep;
    std::cout << "FR4G-TP <" 
              << name 
              << "> initiates iron nano suit and lazers " 
              << target
              << " causing <" 
              << this->_iron_mans_rep
              << ">  points of damage!"    
              << std::endl;
}


void FragTrap::russianHitman(std::string const &target)
{
    this->_randomAtk = this->_cykaBlyat;
    std::cout << "FR4G-TP <" 
              << name 
              << "> becomes a russian hitman and attacks" 
              << target
              << "  сука блять <" 
              << this->_cykaBlyat
              << ">  points of damage!"    
              << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
    this->_energy_pt -= 25;
    if( this->_energy_pt < 25)
    {
        std::cout << "I need morrrrre chakra" << std::endl;
    }
    if(this->_hit_pt + amount > this->_max_hit_pt)
    {
        std::cout << "Health is full, like dude seriously" << std::endl;
    }
    else
    {
        this->_hit_pt += amount;
        std::cout << "Health increased by "
                  << amount
                  << std::endl;
    }
}

void FragTrap::takeDamage(unsigned int amount)
{
    amount -= this->_armour_dmg;
    if (this->_hit_pt <= 0)
    {
        std::cout << "Dude have you seen my ghost? "<<std::endl;
    }
    else
    {
        this->_hit_pt -= amount;
        // std::cout <<this->name <<" takes <" << amount
        //           << "> points of damage "
        //           << std::endl;
    }
    if(this->_hit_pt < 0)
    {
        std::cout << getName() << " Has fallen, his body gets delete()" << std::endl;
    }
    else
    {
        std::cout << "<" << getName() 
              << "> "
              <<"You have " 
              << this->_hit_pt 
              << " HP remaining." << std::endl;
    }
    
}

void FragTrap::vaulhunter_dot_exe(std::string const &target)
{

    if (this->_energy_pt < 25)
    {
        std::cout << "I neeeeed more chakra dammnit" << std::endl;
    }
    else
    {
        int random;
        this->_energy_pt -= 25;
        srand(time(NULL));
        random = rand() % 5;
        switch (random)
        {
            case 1:
                russianHitman(target);
                break;
            case 2:
                ironMan(target);
                break;
            case 3:
                odinsPower(target);
                break;
            case 4:
                rangeAttack(target);
                break;
            default:
                meleeAttack(target);
                break;
        }
    }

}

std::string FragTrap::getName()
{
    return(this->name);
}

int FragTrap::getRangedDamage()
{
    return(this->_ranged_atk);
}

int FragTrap::getRussianDamage()
{
    return(this->_ranged_atk);
}
int FragTrap::getOdinsDamage()
{
    return(this->_ranged_atk);
}

int FragTrap::getMeleeDamage()
{
    return(this->_melee_atk);
}

int FragTrap::getRandomDamage()
{
    return(this->_randomAtk);
}

int FragTrap::getHp()
{
    return(this->_hit_pt);
}

int FragTrap::getEp()
{
    return(this->_energy_pt);
}