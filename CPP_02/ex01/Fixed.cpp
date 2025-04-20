/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 12:20:35 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/11 16:36:16 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional_bits = 8;

Fixed::Fixed():fixed_point(0)
{
    std::cout << "Default constructor called " << std::endl;
}

Fixed::Fixed(const int number):fixed_point(number << fractional_bits)
{
    std::cout << "Int constructor called " << std::endl;
}

Fixed::Fixed(const float number):fixed_point(roundf(number * (1 << fractional_bits)))
{
    std::cout << "Float constructor called " << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called " << std::endl;
}

Fixed::Fixed(const Fixed &b)
{
    *this = b;
    std::cout << "Copy constructor called " << std::endl;
}


int Fixed::toInt( void ) const
{
    return fixed_point >> fractional_bits;
}

float Fixed:: toFloat( void ) const
{
      return (fixed_point) / float(1 << fractional_bits);
}

Fixed &Fixed:: operator=(const Fixed &n)
{
    std::cout << "Copy assignment operator called " << std::endl;
    fixed_point = n.fixed_point;
    return (* this);
}

std::ostream& operator<<(std::ostream& out, const Fixed& obj)
{
    out << obj.toFloat();
    return (out);
}
