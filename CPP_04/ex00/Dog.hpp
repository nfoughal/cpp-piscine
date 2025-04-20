/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:21:34 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/15 22:12:50 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <stdarg.h>
#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog();
    Dog(const Dog &b);
    Dog &operator=(const Dog &other);
    ~Dog();
    void makeSound() const;
};


#endif