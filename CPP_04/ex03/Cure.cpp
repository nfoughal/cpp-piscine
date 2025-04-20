/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:22:52 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/18 21:30:46 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    type = "cure";
}

Cure::~Cure()
{
}

Cure::Cure(const Cure &other)
{
    type = other.type;
}

Cure &Cure::operator=(const Cure &b)
{
    type = b.type;
    return(*this);
}

Cure *Cure::clone() const
{
    return new Cure(*this);
}

void Cure:: use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" <<  std::endl;
}