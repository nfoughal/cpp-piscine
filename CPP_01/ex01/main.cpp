/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:23:11 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/05 17:23:12 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int n = 5;
    int i = 0;
    Zombie *zombieH =  zombieHorde( n, "Zooom");
    while(i < n)
    {
        zombieH->announce();
        i++;
    }
    delete []zombieH;
}