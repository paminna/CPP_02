//
// Created by Paladin Minna on 11/26/21.
//

#include "../ex02/Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default contructor called" << std::endl;
    this->val = 0;
}

Fixed::~Fixed() {
//    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &num) {
//    std::cout << "Copy contructor called" << std::endl;
    *this = num;
}

int Fixed::getRawBits(void) const {
//    std::cout << "getRawBits member function called" << std::endl;
    return val;
}

Fixed &Fixed::operator=(const Fixed &num) {
//    std::cout << "Assignation operator called" << std::endl;
    this->val = num.getRawBits();
    return *this;
}


void Fixed::setRawBits(const int raw) {
//    std::cout << "setRawBits member function called" << std::endl;
    this->val = raw;
}

int Fixed::toInt(void) const {
    return this->val / (1 << bytes);
}

float Fixed::toFloat(void) const {
    return  (float) this->val/ (1 << bytes);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}

Fixed::Fixed(const int fixed) {
    std::cout << "Int constructor called " << std::endl;
    this->val = fixed * (1 << bytes); //число умножается на какое-то число которое является степенью двойки чтобы сохранить мантису
}

Fixed::Fixed(const float fixed) {
    std::cout << "Float constructor called " << std::endl;
    this->val =(int)roundf(fixed * (1 << bytes));
}

bool operator==(const Fixed &one, const Fixed &two)
{
    return one.getRawBits() == two.getRawBits();
}

bool operator!=(const Fixed &one, const Fixed &two)
{
    return !(one == two);
}


bool operator>(const Fixed &one, const Fixed &two)
{
    return (one.getRawBits() > two.getRawBits());
}

bool operator<(const Fixed &one, const Fixed &two)
{
    return (one.getRawBits() < two.getRawBits());
}

bool operator<=(const Fixed &one, const Fixed &two)
{
    return (one.getRawBits() <= two.getRawBits());
}

bool operator>=(const Fixed &one, const Fixed &two)
{
    return (one.getRawBits() >= two.getRawBits());
}

Fixed &Fixed::operator--()
{
    --(this->val);
    return *this;
}

Fixed &Fixed::operator++()
{
    ++(this->val);
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed old(*this);
    ++(this->val);
    return old;
}

Fixed Fixed::operator--(int)
{
    Fixed old(*this);
    --(this->val);
    return old;
}

Fixed Fixed::operator+(const Fixed &one) const
{
    return Fixed(this->toFloat() + one.toFloat());
}

Fixed Fixed::operator-(const Fixed &one) const
{
    return Fixed(this->toFloat() - one.toFloat());
}

Fixed Fixed::operator*(const Fixed &one) const
{
    return Fixed(this->toFloat() * one.toFloat());
}

Fixed Fixed::operator/(const Fixed &one) const
{
    return Fixed(this->toFloat() / one.toFloat());
}

const Fixed &Fixed::max(const Fixed &one, const Fixed &two)
{
    return (one > two ? one : two);
}

Fixed &Fixed::max(Fixed &one, Fixed &two)
{
    return (one > two ? one : two);
}