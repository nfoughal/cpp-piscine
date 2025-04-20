/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:08:07 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/14 23:30:20 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string n)
{
    name = n;
    energy_points = 100;
    hit_points = 100;
    attack_damage = 30;
    std::cout << "FragTrap constructor called for " << name << std::endl;
}


FragTrap:: FragTrap()
{
    name = "";
    energy_points = 100;
    hit_points = 100;
    attack_damage = 30;
    std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &b)
{
    std::cout << "copy constructor called" << std::endl;
   *this = b;
}

FragTrap::  ~FragTrap()
{
    std::cout << "FragTrap destructor called for " << name << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    name = other.name;
    energy_points = other.energy_points;
    hit_points = other.hit_points;
    attack_damage =  other.attack_damage;
    return(*this);
}

void FragTrap:: attack(const std::string& target)
{
     std::cout << "FragTrap "  << name  << " attacks " <<  target 
    <<  " causing " <<  attack_damage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << name << " requests a positive high five!" << std::endl;
}