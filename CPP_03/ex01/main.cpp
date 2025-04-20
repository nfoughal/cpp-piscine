/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 14:45:50 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/14 15:50:51 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


int main()
{
    ScavTrap human1("h1");
    
    human1.attack("h2");
    human1.takeDamage(20);
    human1.beRepaired(10);
    human1.beRepaired(20);
    human1.takeDamage(50);
    human1.guardGate();
    human1.takeDamage(60);
    
}
