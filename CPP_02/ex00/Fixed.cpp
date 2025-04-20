/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:29:35 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/11 16:39:41 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional_bits = 8;

Fixed::Fixed():num(0)
{
    std::cout << "Default constructor called " << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &a)
{
    std::cout << "Copy constructor called" << std::endl; 
    num = a.getRawBits();
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(num);
}
void Fixed::setRawBits( int const raw)
{
    num = raw;
}

Fixed &Fixed:: operator=(const Fixed &n)
{
    std::cout << "Copy assignment operator called " << std::endl;
    if (this != &n)
    num = n.getRawBits();
    return (* this);
}
