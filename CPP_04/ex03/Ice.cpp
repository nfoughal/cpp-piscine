/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:20:22 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/18 20:38:21 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    type = "ice";
}

Ice::~Ice()
{
}

Ice::Ice(const Ice &other)
{
    type = other.type;
}

Ice &Ice::operator=(const Ice &b)
{
    type = b.type;
    return(*this);
}

Ice *Ice::clone() const
{
    return new Ice(*this);
}

void Ice:: use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" <<  std::endl;
}