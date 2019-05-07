#ifndef _FIXED_H_
#define _FIXED_H_

#include <iostream>
#include <string>

class Fixed
{
private:
   int  _fp_value;
   static const int _frac_bits;
public:
    Fixed();
    Fixed(const Fixed &fp);
    Fixed &operator = (const Fixed &fp);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif // !_FIXED_H_