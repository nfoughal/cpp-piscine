/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:24:57 by nfoughal          #+#    #+#             */
/*   Updated: 2023/09/15 21:05:36 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>
#include <stdexcept>

template <typename T>
class Array
{
private:
    T* data;
    unsigned int length;
public:
    Array(): data(NULL), length(0){};
    Array(unsigned int n) : length(n)
    {
        data = new T[length];
        unsigned int i = 0;
        while(i < length)
            data[i++] = T();
    }
    
    Array(const Array &other) : length(other.length)
    {
        data = new T[length];
        unsigned int i = 0;
        while(i < length)
        {
            data[i] = other.data[i];
            i++;
        }
    }

    Array & operator=(const Array &other)
    {
        delete[] data;
        length = other.length;
        data = new T[length];
        unsigned int i = 0;
        while(i < length)
        {
         data[i] = other.data[i];
           i++; 
        }
        return (*this);
    }
    T& operator[](unsigned int index)
    {
        if(index >= length)
            throw outOfRange();
        return data[index];
    }
    const T& operator[](unsigned int index) const
    {
        if(index >= length)
            throw outOfRange();
        return data[index];
    }
    class outOfRange : public std:: exception
    {
        public :
            const char *what () const throw ()
            {
                return "Index out of range\n";
            }
    };
    unsigned int size() const
    {
        return length;
    }
    
    ~Array()
    {
        delete[] data;
    }
    
};

#endif