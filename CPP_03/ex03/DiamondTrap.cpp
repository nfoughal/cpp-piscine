/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:44:45 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/14 22:11:49 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string n)
{
    name = n;
    ClapTrap::name = name + "_clap_name";
    energy_points = ScavTrap::energy_points;
    hit_points = FragTrap::hit_points;
    attack_damage = FragTrap::attack_damage;
    std::cout << "DiamondTrap constructor called for " << name << std::endl;
}

DiamondTrap::DiamondTrap()
{
    name = "";
    std::cout << "DiamondTrap Default constructor called" << std::endl;
}


DiamondTrap::DiamondTrap(const DiamondTrap &b)
{
    std::cout << "copy constructor called" << std::endl;
   *this = b;
}

DiamondTrap::  ~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called for " << name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    name = other.name;
    energy_points = other.energy_points;
    hit_points = other.hit_points;
    attack_damage = other.attack_damage;
    return(*this);
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void  DiamondTrap::whoAmI()
{
    std::cout << "i am " << name << " and my ClapTrap is " << ClapTrap::name << std::endl;
}
