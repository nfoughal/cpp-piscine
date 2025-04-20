/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:38:13 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/14 22:13:30 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap , public ScavTrap
{
private :
    std::string name;
    
public:
    DiamondTrap();
    DiamondTrap(std::string n);
    DiamondTrap(const DiamondTrap &b);
    ~DiamondTrap();
    DiamondTrap &operator=(const DiamondTrap &other);
    void attack(const std::string& target);
    void whoAmI();
};

#endif