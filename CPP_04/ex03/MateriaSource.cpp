/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 21:54:00 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/18 21:26:18 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    int i = 0;
    while(i < 4)
    {
        AmateriaArray[i] = NULL;
        i++;  
    }
}

MateriaSource::MateriaSource(const MateriaSource &b)
{
    int i = 0;
    while(i < 4)
    {
        if(AmateriaArray[i])
            AmateriaArray[i] = b.AmateriaArray[i]->clone();
        i++;
    }
}

MateriaSource::~MateriaSource()
{
    int i = 0;
    while (i < 4)
        delete AmateriaArray[i++];
}

MateriaSource & MateriaSource::operator=(const MateriaSource &other)
{
    int i = 0;
    while(i < 4)
    {
        delete AmateriaArray[i];
        i++;
    }
    i = 0;
    while(i < 4)
    {
        if(AmateriaArray[i])
            AmateriaArray[i] = other.AmateriaArray[i]->clone();
        i++;
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria*m)
{
    int i = 0;
    while(i < 4)
    {
        if(AmateriaArray[i] == NULL)
        {
            AmateriaArray[i] = m->clone();
            return ;
        }
        i++;
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    int i = 0;
    while(i < 4)
    {
        if(AmateriaArray[i])
            if(AmateriaArray[i]->getType() == type)
                return(AmateriaArray[i]->clone());
        i++;
    }
    return(NULL);
}