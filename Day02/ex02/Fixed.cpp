#include "Fixed.hpp"

const int	Fixed::_frac_bits = 8;

Fixed::Fixed() :_fp_value(0)
{
    //std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed(const Fixed &fp)
{
    
    //std::cout << "Copy constructor called" << std::endl;
    *this = fp;
    return ;
}

Fixed
&Fixed::operator=(const Fixed &fp)
{
    
    //std::cout<<"Assignation operator called "<< std::endl;
    if (this != &fp)
    {
        this->_fp_value = fp.getRawBits();
    }
    return (*this);
}

Fixed
&Fixed::operator++(void)
{
    this->_fp_value += 1;
    return (*this);
}
Fixed
&Fixed::operator--(void)
{
    this->_fp_value -= 1;
    return (*this);
}

Fixed
Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return (tmp);
}

Fixed
Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return (tmp);
}

bool
Fixed::operator>(const Fixed &fp) const
{
    return(this->_fp_value > fp._fp_value);
}

bool
Fixed::operator<(const Fixed &fp) const
{
    return(this->_fp_value < fp._fp_value);
}
bool
Fixed::operator>=(const Fixed &fp) const
{
    return(this->_fp_value >= fp._fp_value);
}
bool
Fixed::operator<=(const Fixed &fp) const
{
    return(this->_fp_value <= fp._fp_value);
}

bool
Fixed::operator==(const Fixed &fp) const
{
    return(this->_fp_value == fp._fp_value);
}
bool
Fixed::operator!=(const Fixed &fp) const
{
    return(this->_fp_value != fp._fp_value);
}

Fixed
Fixed::operator+(const Fixed &fp) const
{
    return(Fixed(this->toFloat() + fp.toFloat()));
}
Fixed
Fixed::operator-(const Fixed &fp) const
{
    return(Fixed(this->toFloat() - fp.toFloat()));
}

Fixed
Fixed::operator*(const Fixed &fp) const
{
    return(Fixed(this->toFloat() * fp.toFloat()));
}
bool
Fixed::operator/(const Fixed &fp) const
{
    return(this->toFloat() / fp.toFloat());
}


Fixed::Fixed(int const value)
{
    this->_fp_value = value << _frac_bits;
    //std::cout << "Int constructor called" << std::endl;
    return ;
}

Fixed::Fixed(float const value)
{
    this->_fp_value = roundf(value * (1 << _frac_bits));
    //std::cout << "Float constructor called" << std::endl;
    return ;
}

Fixed::~Fixed()
{
    //std::cout << "Destructor called" << std::endl;
    return ;
}
std::ostream
&operator<<(std::ostream &out, Fixed const &val)
{
    out << val.toFloat();
    return (out);
}

float 
Fixed::toFloat(void) const
{
    return ((float)this->_fp_value / (1 << _frac_bits));
}

int
Fixed::toInt(void) const
{
    return ((int)(this->_fp_value >> _frac_bits));
}

Fixed
&Fixed::min( Fixed &a, Fixed &b)
{
    return (a < b ? a : b);
}

const Fixed
&Fixed::min( const Fixed &a, const Fixed &b)
{
    return (a < b ? a : b);
}

Fixed
&Fixed::max( Fixed &a, Fixed &b)
{
    return (a > b ? a : b);
}

const
Fixed &Fixed::max( const Fixed &a, const Fixed &b)
{
    return (a > b ? a : b);
}

int 
Fixed::getRawBits() const
{   
    //std::cout << "getRawBits member function called" << std::endl;
    return(this->_fp_value);
}

void Fixed::setRawBits(int const raw)
{
    this->_fp_value = raw;
}