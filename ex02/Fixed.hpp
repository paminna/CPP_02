//
// Created by Paladin Minna on 11/26/21.
//

#ifndef CPP02_FIXED_HPP
#define CPP02_FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed {
public:
    Fixed();
    Fixed(const int fixed);
    Fixed(const float fixed);
    ~Fixed();
    Fixed(const Fixed &num);
    Fixed &operator=(const Fixed &num);
    Fixed operator+(const Fixed &one) const;
    Fixed operator-(const Fixed &one) const;
    Fixed operator*(const Fixed &one) const;
    Fixed operator/(const Fixed &one) const;
    Fixed& operator++();
    Fixed& operator--();
    Fixed operator--(int);
    Fixed operator++(int);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
    static const Fixed &max(const Fixed &one, const Fixed &two);
    static Fixed &max(Fixed &one, Fixed &two);
private:
    int val;
    static const int bytes = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
bool operator>(const Fixed &one, const Fixed &two);
bool operator<(const Fixed &one, const Fixed &two);
bool operator<=(const Fixed &one, const Fixed &two);
bool operator>=(const Fixed &one, const Fixed &two);
bool operator==(const Fixed &one, const Fixed &two);
bool operator!=(const Fixed &one, const Fixed &two);
#endif //CPP02_FIXED_HPP
