/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:23:21 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/17 12:03:38 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    int i = 0;
    while(i < 100)
    ideas[i++] = "";
   std::cout << "Brain Default constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
    *this = other;
   std::cout << "Brain copy constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &b)
{
    int i = 0;
    while(i < 100)
    {
        ideas[i] = b.ideas[i];
        i++; 
    }
    return(*this);
}
