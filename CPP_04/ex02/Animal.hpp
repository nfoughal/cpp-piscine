/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:09:42 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/17 13:45:02 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <stdarg.h>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(const Animal &b);
    Animal &operator=(const Animal &other);
   virtual ~Animal();
   std::string getType() const;
   virtual void  makeSound() const = 0;
};


#endif