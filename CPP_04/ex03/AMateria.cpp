/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:02:40 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/18 18:30:37 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const &type) : type(type)
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(const AMateria &other)
{
    *this = other;
}

AMateria &AMateria::operator=(const AMateria &b)
{
    
    type = b.type;
    return(*this);
}

std::string const & AMateria::getType() const
{
    return(type);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}