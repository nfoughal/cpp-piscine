/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:09:42 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/16 14:01:13 by nfoughal         ###   ########.fr       */
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
   void  virtual makeSound() const;
};


#endif