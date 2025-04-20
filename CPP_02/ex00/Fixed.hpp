/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:17:08 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/11 16:39:28 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int num;
        static const int fractional_bits;
    public:
        Fixed();
        Fixed(const Fixed &a);
        ~Fixed();
        Fixed &operator = (const Fixed &n);
        int getRawBits( void ) const;
        void setRawBits( int const raw); 
};


#endif