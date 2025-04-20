/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:52:10 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/07 12:41:06 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string n):name(n), wB(nullptr)
{
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &w)
{
    wB = &w;
}
void HumanB::attack()
{
    std::cout << name << " attacks with their " << wB->getType() << std::endl;
}