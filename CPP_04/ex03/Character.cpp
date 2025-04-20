/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 17:40:44 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/18 21:57:21 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    int i = 0;
    while(i < 4)
    {
        inventory[i] = NULL;
        i++;
    }
}

Character::Character(std::string name):name(name)
{
}

std::string const &Character:: getName() const
{
    return(name);
}

Character::Character(const Character &b)
{
    int i = 0;
    while(i < 4)
    {
        if(inventory[i])
            inventory[i] = b.inventory[i]->clone();
        i++;
    }
}

Character::~Character()
{
    int i = 0;
    while (i < 4)
    {
        delete inventory[i];
        i++;
    }
}


void Character::equip(AMateria* m)
{
    int i = 0;
    if(!m)
        return ;
    while(i < 4)
    {
        if(inventory[i] == NULL)
        {
            inventory[i] = m->clone();
            return;
        }
        i++;
    }
    return;
}


void Character::unequip(int idx)
{
    if(idx >= 0 && idx < 4)
        inventory[idx] = NULL;
}


Character & Character::operator=(const Character &other)
{
    int i = 0;
    while(i < 4)
    {
        delete inventory[i];
        i++;
    }
    i = 0;
    while(i < 4)
    {
        if(inventory[i])
            inventory[i] = other.inventory[i]->clone();
        i++;
    }
    return(*this);
}

void Character::use(int idx, ICharacter& target)
{
    if(inventory[idx] && (idx >= 0 &&  idx < 4))
        inventory[idx]->use(target);
    return ;
}

