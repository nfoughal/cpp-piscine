/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:30:38 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/14 23:18:44 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    
    ScavTrap();
    ScavTrap(std::string n);
    ScavTrap(const ScavTrap &b);
    ~ScavTrap();
    ScavTrap &operator=(const ScavTrap &other);
    void attack(const std::string& target);
    void guardGate();

};



#endif