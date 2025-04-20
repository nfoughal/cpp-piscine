/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:17:21 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/17 20:53:44 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice: public AMateria
{
public:
    Ice();
    Ice(const Ice &b);
    Ice &operator=(const Ice &other);
    Ice* clone() const;
    ~Ice();
    void use(ICharacter& target);
};

#endif