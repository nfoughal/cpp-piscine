/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 21:53:50 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/17 22:30:11 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include<iostream>
#include<string>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
    private:
        AMateria* AmateriaArray[4];
    public:
    MateriaSource();
    ~MateriaSource();
    MateriaSource(const MateriaSource &b);
    MateriaSource &operator=(const MateriaSource &other);
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
};


#endif