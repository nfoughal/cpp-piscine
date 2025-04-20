/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 20:54:22 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/19 12:02:36 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main() 
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();//will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete j;
    delete i;
    delete meta;

    std::cout << "==============================" << std::endl;

    const WrongAnimal* metaa = new WrongAnimal();
    const WrongAnimal* c = new WrongCat();
    
    std::cout << c->getType() << " " << std::endl;
    c->makeSound();
    metaa->makeSound();
    delete metaa;
    delete c;
    
 return 0;
}