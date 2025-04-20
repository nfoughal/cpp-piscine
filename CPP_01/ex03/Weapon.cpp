/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:28:41 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/07 12:42:18 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string n):type(n)
{
}

Weapon::~Weapon()
{
}

const std::string& Weapon::getType()
{
    return(type);
}

void Weapon::setType(std::string str)
{
    type = str;
}
