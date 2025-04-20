/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:29:26 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/11 15:44:07 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional_bits = 8;

Fixed::Fixed():fixed_point(0)
{
}

Fixed::Fixed(const int number):fixed_point(number << fractional_bits)
{
}

Fixed::Fixed(const float number):fixed_point(roundf(number * (1 << fractional_bits)))
{
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &b)
{
    fixed_point = b.fixed_point;
}


int Fixed::toInt( void ) const
{
    return fixed_point >> fractional_bits;
}

float Fixed:: toFloat( void ) const
{
      return (fixed_point) / (float)(1 << fractional_bits);
}

Fixed &Fixed:: operator=(const Fixed &n)
{
    if (this != &n)
    fixed_point = n.fixed_point;
    return (* this);
}

std::ostream& operator<<(std::ostream& out, const Fixed& obj)
{
    out << obj.toFloat();
    return (out);
}


int Fixed:: operator>(const Fixed& second) const
{
    return fixed_point > second.fixed_point ? 1 : 0;
}

int Fixed::operator<(const Fixed& second) const
{
    return fixed_point < second.fixed_point ? 1 : 0;
}
int Fixed::operator>=(const Fixed& second) const
{
    return fixed_point >= second.fixed_point ? 1 : 0;
}

int Fixed:: operator<=(const Fixed& second) const
{
    return fixed_point <= second.fixed_point ? 1 : 0;
}

int Fixed::operator==(const Fixed& second) const
{
    return fixed_point == second.fixed_point ? 1 : 0;
}
int Fixed::operator!=(const Fixed& second) const
{
    return (fixed_point != second.fixed_point) ? 1 : 0;
}

Fixed Fixed::operator+(const Fixed& socond) const
{
    Fixed result;
    result.fixed_point = (fixed_point + socond.fixed_point);
    return(result);
}

Fixed Fixed::operator-(const Fixed& socond) const
{
    Fixed result;
    result.fixed_point = (fixed_point - socond.fixed_point);
    return(result);
}

Fixed Fixed::operator*(const Fixed& socond) const
{
    Fixed result(this->toFloat() * socond.toFloat());
    return(result);
}

Fixed Fixed::operator/(const Fixed& socond) const
{
    Fixed result(this->toFloat() / socond.toFloat());
   return(result);
}

Fixed& Fixed:: operator++()
{
    fixed_point++;
    return *this;
}

Fixed& Fixed:: operator--()
{
    fixed_point--;
    return *this;
}

Fixed Fixed:: operator++(int)
{
    Fixed tmp(*this);
    fixed_point++;
    return tmp;
}

Fixed Fixed:: operator--(int)
{
    Fixed tmp(*this);
    fixed_point--;
    return tmp;
}

const Fixed& Fixed:: min(const Fixed& a, const Fixed& b)
{
    if(a.fixed_point < b.fixed_point)
        return(a);
    return(b);
}

const Fixed& Fixed:: min( Fixed& a, Fixed& b)
{
    if(a.fixed_point < b.fixed_point)
        return(a);
    return(b);
}

const Fixed& Fixed:: max(const Fixed& a, const Fixed& b)
{
    if(a.fixed_point > b.fixed_point)
        return(a);
    return(b);
}

const Fixed& Fixed:: max( Fixed& a, Fixed& b)
{
    if(a.fixed_point > b.fixed_point)
        return(a);
    return(b);
}