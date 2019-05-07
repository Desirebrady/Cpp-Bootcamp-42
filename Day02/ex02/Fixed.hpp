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
    Fixed(void);
    Fixed(const Fixed &fp);
    Fixed &operator = (const Fixed &fp);
    bool operator>(const Fixed &fp) const;
    bool operator<(const Fixed &fp) const;
    bool operator+(const Fixed &fp) const;
    bool operator-(const Fixed &fp) const;
    bool operator*(const Fixed &fp) const;
    bool operator/(const Fixed &fp) const;
    bool operator>=(const Fixed &fp) const;
    bool operator<=(const Fixed &fp) const;
    bool operator==(const Fixed &fp) const;
    bool operator!=(const Fixed &fp) const;
    Fixed(int const value);
    Fixed(float const value);
    ~Fixed();
    Fixed &operator++(void);
    Fixed &operator--(void);
    Fixed operator++(int);
    Fixed operator--(int);
    static Fixed        &min(Fixed &a, Fixed &b);
    const static Fixed  &min(const Fixed &a, const Fixed &b);
    static Fixed        &max(Fixed &a, Fixed &b);
    const static Fixed  &max(const Fixed &a, const Fixed &b);
    float toFloat(void) const;
    int toInt(void) const;
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

std::ostream            &operator<<(std::ostream &out, Fixed const &in);

#endif // !_FIXED_H_