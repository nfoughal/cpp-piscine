/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 12:14:54 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/11 16:36:23 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int fixed_point;
        static const int fractional_bits;
public:
    Fixed();
    Fixed(const Fixed &b);
    ~Fixed();
    Fixed &operator=(const Fixed &n);
    Fixed(const int number);
    Fixed(const float number);
    float toFloat( void ) const;
    int toInt( void ) const;
    
};
std::ostream& operator<<(std::ostream& out, const Fixed& obj);


#endif