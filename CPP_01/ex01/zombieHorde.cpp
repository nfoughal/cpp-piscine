/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:23:25 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/05 17:23:26 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
    int i = 0;
    Zombie *z1 = new Zombie[N];
    while(i < N)
    {
        z1[i].setName(name);
        i++;
    }
    return z1;
}