/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 14:45:50 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/14 23:16:46 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap human1("h1");
    ClapTrap human2("h2");
    
    human1.attack("h2");
    human2.takeDamage(8);
    human2.attack("h1");
    human1.beRepaired(5);
    human1.attack("h2");
    human1.takeDamage(4);
    human2.takeDamage(20);
    human2.attack("h1");
}
