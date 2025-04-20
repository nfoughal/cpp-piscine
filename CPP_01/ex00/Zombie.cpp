/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:15:50 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/07 12:17:18 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string n):name(n)
{
}

Zombie::~Zombie()
{
    std::cout <<  name << " :destroyed" << "\n";
}
void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << "\n";
}