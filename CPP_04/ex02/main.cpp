/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 20:54:22 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/17 13:31:18 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const int animals_num = 5;
    Animal *Animals[animals_num];
    
    
    int i = 0;
    while(i < animals_num/2)
    Animals[i++] = new Dog;

    while(i < animals_num)
    Animals[i++] = new Cat;

    i = 0;
    while(i < animals_num)
        delete Animals[i++];
    return 0;
}