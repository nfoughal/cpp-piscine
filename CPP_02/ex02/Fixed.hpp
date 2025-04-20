/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:28:00 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/11 15:28:49 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int fixed_point;
        static const int  fractional_bits;
public:
    Fixed();
    Fixed(const int number);
    Fixed(const float number);
    Fixed(const Fixed &b);
    ~Fixed();

    int operator>(const Fixed& second) const;
    int operator<(const Fixed& second) const;
    int operator>=(const Fixed& second) const;
    int operator<=(const Fixed& second) const;
    int operator==(const Fixed& second) const;
    int operator!=(const Fixed& second) const;
    Fixed operator+(const Fixed& socond) const;
    Fixed operator-(const Fixed& socond) const;
    Fixed operator*(const Fixed& socond) const;
    Fixed operator/(const Fixed& socond) const;
    Fixed &operator++();
    Fixed &operator--();
    Fixed operator++(int);
    Fixed operator--(int);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static const Fixed& min( Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);
    static const Fixed& max( Fixed& a, Fixed& b);
    
    
    Fixed &operator=(const Fixed &n);
    float toFloat( void ) const;
    int toInt( void ) const;
    
};
std::ostream& operator<<(std::ostream& out, const Fixed& obj);


#endif