/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 13:33:33 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/14 21:16:00 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string n):name(n), hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout <<"ClapTrap constructor called " << std::endl;
}

ClapTrap::ClapTrap():name(""), hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &b)
{
    *this = b;
    std::cout << "copy constructor called" << std::endl;
}

ClapTrap &ClapTrap:: operator=(const ClapTrap &b)
{
    name = b.name;
    hit_points = b.hit_points;
    energy_points = b.energy_points;
    attack_damage = b.attack_damage;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called " << std::endl;
}

int ClapTrap::getDemage()
{
    return(attack_damage);
}

void ClapTrap:: attack(const std::string& target)
{
    energy_points -= 1;
    if(energy_points < 0)
        std::cout << "ClapTrap "  << name  << " took " <<  1  << " hit points " 
        << "he's so hurt and he's helpless now!!" << std::endl;
    else
    std::cout << "ClapTrap "  << name  << " attacks " <<  target 
    <<  " causing " <<  attack_damage << " points of damage!" << std::endl;
}

void ClapTrap:: takeDamage(unsigned int amount)
{
    hit_points -= amount;
    if(hit_points < 0)
        std::cout << "ClapTrap "  << name  << " took " <<  amount  << " hit points " 
        << "he's so hurt and he's helpless now!!" << std::endl;
    else
    std::cout << "ClapTrap "  << name  << " took " <<  amount  << " hit points Only has " 
    <<  hit_points <<  " hit_point left " << std::endl;
}


void ClapTrap:: beRepaired(unsigned int amount)
{
    energy_points -= 1;
    if(energy_points < 0)
        std::cout << "ClapTrap "  << name  << " took " <<  1  << " hit points " 
        << "he's so hurt and he's helpless now!!" << std::endl;
    else
    {
        hit_points += amount;
        if(hit_points > 100)
        {
            hit_points = 100;
            std::cout << "You cannot exceed 100 points" << std::endl;
        }
        std::cout << "ClapTrap "  << name  << " get " <<  amount  << " hit points back, he has now " 
        <<  hit_points <<  " hit_points " << std::endl; 
    }
}