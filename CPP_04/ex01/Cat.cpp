/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:25:35 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/19 14:26:49 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    brain = new Brain();
    type = "Cat";
    std::cout << "Cat Default constructor called" << std::endl;
}

Cat::~Cat()
{
    delete(brain);
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &other)
{
    *this = other;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &b)
{
    
    type = b.type;
    brain = new Brain();
    *brain = *b.brain;
    return(*this);
}

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}