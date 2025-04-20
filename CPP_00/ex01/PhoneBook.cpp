/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 15:17:21 by nfoughal          #+#    #+#             */
/*   Updated: 2023/07/29 15:17:22 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip> 
#include <string>

void desplay_10_element(std::string str)
{
    int i = 0;
    if(str.length() > 10)
    {
        while(i < 9)
        std::cout << str[i++];
        std::cout << ".";
    }
    else
    {
        std::cout << std::setw(10);
        std::cout << str;
    }
}
void PhoneBook::setcontact(Contact addcontact, int i)
{
    contactArray[i] = addcontact;
}

void PhoneBook::getcontact(std::string str, int i, int x)
{
    i++;
    if(x != 0 && (str.length() == 1) && (str[0] >= '1' && str[0] <= i + 48))
       {
            std::cout << "first name :" << contactArray[str[0] - 49].getfirstname() << "\n";
            std::cout << "last name :" << contactArray[str[0] - 49].getlastname() << "\n";
            std::cout << "nickname :" << contactArray[str[0] - 49].getnickname() << "\n";
            std::cout << "phone number :" << contactArray[str[0] - 49].getphonnumber() << "\n";
            std::cout << "darkest secret :" << contactArray[str[0] - 49].getdarkestsecret() << "\n";
       }
}

void PhoneBook::desplay_all(int i, int x)
{
    int j = 0;
    int n = 1;
    std::cout << std::setw(10) << "index" << "|";
    std::cout << std::setw(10) << "first name" << "|";
    std::cout << std::setw(10) << "last name" << "|";
    std::cout << std::setw(10) << "nickname" << "|" << "\n";
    while(x != 0 && j <= i)
    {
        std::cout << std::setw(10);
        std::cout << n;
        std::cout << "|";
        desplay_10_element(contactArray[j].getfirstname());
        std::cout << "|";
        desplay_10_element(contactArray[j].getlastname());
        std::cout << "|";
        desplay_10_element(contactArray[j].getnickname());
        std::cout << "|";
        std::cout << "\n";
        j++;
        n++;
    }
}