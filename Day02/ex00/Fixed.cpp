#include "Fixed.hpp"

const int	Fixed::_frac_bits = 8;

Fixed::Fixed() :_fp_value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fp)
{
    
    std::cout << "Copy constructor called" << std::endl;
    *this = fp;
}

Fixed
&Fixed::operator=(const Fixed &fp)
{
    
    std::cout<<"Assignation operator called "<< std::endl;
    if (this != &fp)
    {
        this->_fp_value = fp.getRawBits();
    }
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{   
    std::cout << "getRawBits member function called" << std::endl;
    return(this->_fp_value);
}

void Fixed::setRawBits(int const raw)
{
    this->_fp_value = raw;
}