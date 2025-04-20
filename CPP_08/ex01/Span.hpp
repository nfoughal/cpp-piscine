/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:17:22 by nfoughal          #+#    #+#             */
/*   Updated: 2023/09/17 20:20:09 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include<iostream>
#include<string>
#include <vector>
#include <stdexcept>
#include <algorithm>

class Span
{
private:
    unsigned int n;
    std::vector<int> vec;
public:
    Span();
    Span(unsigned int n);
    ~Span();
    Span(const Span &other);
    Span &operator=(const Span &other);
    void addNumber(int number);
    int shortestSpan();
    int longestSpan();
};



#endif