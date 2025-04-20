/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:19:46 by nfoughal          #+#    #+#             */
/*   Updated: 2023/09/17 21:32:03 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include<iostream>
#include<string>
#include <vector>
#include <stdexcept>
#include <algorithm>
#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    typedef typename std::deque<T>::iterator iterator;
    typedef typename std::deque<T>::const_iterator iteratorr;
    
    MutantStack()
    {
    }
    ~MutantStack()
    {
    }

    MutantStack(const MutantStack &other) 
    {
        this->c = other.c;
    }

    MutantStack &operator=(const MutantStack &other)
    {
        this->c = other.c;
        return *this;
    }
   
    iterator begin()
    {
        return this->c.begin();
    }

    iterator end()
    {
        return this->c.end();
    }
};

#endif