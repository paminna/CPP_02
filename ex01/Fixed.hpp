//
// Created by Paladin Minna on 11/26/21.
//

#ifndef CPP02_FIXED_HPP
#define CPP02_FIXED_HPP
#include <iostream>

class Fixed {
public:
    Fixed();
    Fixed(int fixed);
    Fixed(float fixed);
    Fixed(const Fixed &fixed);
    ~Fixed();
    float toFloat( void ) const;
    int toInt( void ) const;
    Fixed &operator<<(const Fixed &num);
};


#endif //CPP02_FIXED_HPP
