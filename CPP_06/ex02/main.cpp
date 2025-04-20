/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:40:33 by nfoughal          #+#    #+#             */
/*   Updated: 2023/09/14 21:22:04 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>

Base * generate(void)
{
    srand(time(NULL));
    int choice = rand() % 3;
    if(choice == 0)
        return new A();
    else if(choice == 1)
        return new B();
    else
        return new C();
    return (NULL);
}

void identify(Base *p)
{
    if(p)
    {
        if(dynamic_cast<A*>(p))
            std::cout << "A" << std::endl;
        else if(dynamic_cast<B*>(p))
            std::cout << "B" << std::endl;
        else if(dynamic_cast<C*>(p))
            std::cout << "C" << std::endl;
        else
            std::cout << "Unknown type!" << std::endl;
    }
    else
    {
        std::cout << "Null pointer" << std::endl;
        exit(0);
    }
}

void identify(Base &p)
{
    try{
        A &a  = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        (void)a;
    }
    catch(std::exception&)
    {
    }
    try{
        B &b = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        (void)b;
    }
    catch(std::exception&)
    {
    }
    try{
       C &c = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        (void)c;
    }
    catch(std::exception&)
    {
    }
}

int main()
{
    Base* ptr = generate();
    // identify(ptr);
    // A referece;
    // identify(referece);
    std::cout << "* = ";
    identify(ptr);
    std::cout << "& = ";
    identify(*ptr);
    delete ptr;
    return (0);
}