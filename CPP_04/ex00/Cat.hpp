/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:25:38 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/15 22:12:57 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <stdarg.h>
#include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat();
    Cat(const Cat &b);
    Cat &operator=(const Cat &other);
    ~Cat();
    void makeSound() const;
};


#endif