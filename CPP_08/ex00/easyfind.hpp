/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:28:49 by nfoughal          #+#    #+#             */
/*   Updated: 2023/09/17 22:03:43 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>
#include <algorithm>


class NotFound : public std::exception
{
    public :
        const char *what () const throw ()
        {
            return "element not found ";
        }
};

template <typename T>
int easyfind( T & vec, int value)
{
    typename T::iterator it;

    it = std::find(vec.begin(), vec.end(), value);
    if(it != vec.end())
        return *it;
    throw NotFound();
}


#endif