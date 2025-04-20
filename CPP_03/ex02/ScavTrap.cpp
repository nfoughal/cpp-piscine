/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:30:40 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/14 23:31:18 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string n)
{
    name = n;
    energy_points = 50;
    hit_points = 100;
    attack_damage = 20;
    std::cout << "ScavTrap constructor called for " << name << std::endl;
}

ScavTrap::ScavTrap()
{
    name = "";
    energy_points = 50;
    hit_points = 100;
    attack_damage = 20;
    std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &b)
{
    std::cout << "copy constructor called" << std::endl;
   *this = b;
}

ScavTrap::  ~ScavTrap()
{
    std::cout << "ScavTrap destructor called for " << name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    name = other.name;
    energy_points = other.energy_points;
    hit_points = other.hit_points;
    attack_damage =  other.attack_damage;
    return(*this);
}


void ScavTrap:: attack(const std::string& target)
{
     std::cout << "ScavTrap "  << name  << " attacks " <<  target 
    <<  " causing " <<  attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " is guarding the gate. " << std::endl;
}