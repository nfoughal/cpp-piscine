/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:21:37 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/17 11:49:43 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    brain = new Brain();
    type = "Dog";
    std::cout << "Dog Default constructor called" << std::endl;
}

Dog::~Dog()
{
    delete(brain);
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &other)
{
    type = other.type;
    brain = new Brain();
    *brain = *other.brain;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &b)
{
    type = b.type;
    delete brain;
    brain = new Brain();
    *brain = *b.brain;
    std::cout << "Copy assignment operator called" << std::endl;
    return(*this);
}

void Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}