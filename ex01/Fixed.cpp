//
// Created by Paladin Minna on 11/26/21.
//

#include "../ex01/Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default contructor called" << std::endl;
    this->val = 0;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &num) {
    std::cout << "Copy contructor called" << std::endl;
    this->val = num.getRawBits();
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return val;
}

Fixed &Fixed::operator=(const Fixed &num) {
    std::cout << "Assignation operator called" << std::endl;
    this->val = num.getRawBits();
    return *this;
}


void Fixed::setRawBits(const int raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->val = raw;
}

int Fixed::toInt(void) const {
    return 0;
}

float Fixed::toFloat(void) const {
    return 0;
}

std::ostream &Fixed::operator<<(const Fixed &num, std::ostream &out)
{
    return out << num.getRawBits();
}

Fixed::Fixed(int fixed) {

}

Fixed::Fixed(float fixed) {

}