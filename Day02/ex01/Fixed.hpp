#ifndef _FIXED_H_
#define _FIXED_H_

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
private:
   int  _fp_value;
   static const int _frac_bits;
public:
    Fixed();
    Fixed(const Fixed &fp);
    Fixed &operator = (const Fixed &fp);
    Fixed(int const value);
    Fixed(float const value);
    ~Fixed();
    float toFloat(void) const;
    int toInt(void) const;
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

std::ostream            &operator<<(std::ostream &out, Fixed const &in);

#endif // !_FIXED_H_