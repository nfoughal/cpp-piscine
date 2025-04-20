/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:15:58 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/05 18:18:20 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie First("First");
    First.announce();
    Zombie *second = newZombie("Second");
    second->announce();
    delete second;
    randomChump("Third");
}