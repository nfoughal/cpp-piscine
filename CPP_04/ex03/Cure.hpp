/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:21:53 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/17 20:43:36 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure: public AMateria
{
public:
    Cure();
    Cure(const Cure &b);
    Cure &operator=(const Cure &other);
    ~Cure();
    Cure *clone() const;
    void use(ICharacter& target);

};

#endif