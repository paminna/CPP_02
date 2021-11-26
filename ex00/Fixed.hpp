//
// Created by Paladin Minna on 11/26/21.
//

#ifndef CPP02_FIXED_HPP
#define CPP02_FIXED_HPP


class Fixed {
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &num);
    Fixed &operator=(const Fixed &num);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
private:
    int val;
    static const int bytes = 8;
};


#endif //CPP02_FIXED_HPP
