#include "NinjaTrap.hpp"
#include <ctime>

NinjaTrap::NinjaTrap()
{
}

NinjaTrap::NinjaTrap(std::string name)
{
    std::cout << name <<" I am born : You do not want me as your enemy" << std::endl;
    this->_type = "NINJA-TP";
    this->_Hp = 60;
    this->_maxHp = 60;
    this->_name = name;
    this->_Ep = 120;
    this->_maxEp = 120;
    this->_meleeAtk= 60;
    this->_rangedAtk = 5;
    this->_amourReduc = 0;
}

NinjaTrap::~NinjaTrap()
{
}

void NinjaTrap::NinjaShoebox(std::string const &target)
{
    if (this->_Hp <= 0)
    {
       std::cout << getName() << " - You can't attack you dead fool, fool" << std::endl;
    }
    else
    {
        if (this->_Ep < 25)
        {
            std::cout << getName() << " - You need more chakra" << std::endl;
        }
        else
        {
            std::string shoes[] ={{"High heels"},
                                  {"Wedges"},
                                  {"Ballerinas"},
                                  {"Wellington boots"}
                                  };
            srand(time(NULL));
            int randdom = rand() % 4;
            this->_shoe = shoes[randdom];
            std::cout << getName() 
                      << " does some hands signs and uses dark magic, a cloud of smoke flashes, "
                      << target
                      << " emerges from the smoke wearing "
                      << this->_shoe
                      << std::endl;
        }
    }
}
