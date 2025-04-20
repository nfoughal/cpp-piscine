/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:40:20 by nfoughal          #+#    #+#             */
/*   Updated: 2023/09/17 19:10:57 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : n(n)
{
    if (n == 0)
    {
        throw std::runtime_error("N most be > 0");
    }
}

void Span::addNumber(int number)
{
    if(vec.size() >= n)
         throw std::runtime_error("Span is full");
    vec.push_back(number);
}

int Span::shortestSpan() 
{
    if(vec.size() < 2)
        throw std::runtime_error("need more than 2 !");
    std::sort(vec.begin(), vec.end());
    std::vector<int>::const_iterator it;
    it = vec.begin() + 1;
    int min = INT_MAX;
    int newMin;
    while (it != vec.end())
    {
        newMin = *it - *(it - 1);
        if(newMin < min)
            min = newMin;
        it++;
    }
    return min;
}

int Span::longestSpan() 
{
    if(vec.size() < 2)
        throw std::runtime_error("need more than 2 !");
    std::vector<int>::const_iterator it;
    it = std::max_element(vec.begin(), vec.end());
    int max = *it;
    it = std::min_element(vec.begin(), vec.end());
    int min = *it;
    int newMax = max - min;
    return (newMax);
    
}

Span::Span() : n(0)
{
}

Span::~Span()
{
}

Span::Span(const Span &other)
{
    n = other.n;
}

Span & Span::operator=(const Span &other)
{
     n = other.n;
     return (*this);
}