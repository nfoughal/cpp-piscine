/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 15:17:13 by nfoughal          #+#    #+#             */
/*   Updated: 2023/07/29 15:17:14 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int is_space(std::string str)
{
    size_t i = 0;
    while (i < str.length())
    {
        if(str[i] == ' ' || str[i] == '\t')
            return(1);
        i++;
    }
    return (0);
}

int if_clean(std::string str)
{
    if(std::cin.eof())
        exit(0);
    if(str.empty() || is_space(str))
        return (1);
    return (0);
}


int fill_contact(Contact &my_contact)
{
    std::string str;
    std::cout << "first name : ";
    getline(std::cin, str);
    if(if_clean(str))
    {
        std::cout << "First name cannot be empty or separated by space try again later!\n";
        return (1);
    }
    my_contact.setfirstname(str);
    std::cout << "last name : ";
    getline(std::cin, str);
    if(if_clean(str))
    {
        std::cout << "Last name cannot be empty or separated by space try again later!\n";
        return (1);
    }
    my_contact.setlastname(str);
    std::cout << "nickname : ";
    getline(std::cin, str);
    if(if_clean(str))
    {
        std::cout << "Nickname cannot be empty or separated by space try again later!\n";
        return (1);
    }
    my_contact.setnickname(str);
    std::cout << "phone number : ";
    getline(std::cin, str);
    if(if_clean(str))
    {
        std::cout << "Phone number cannot be empty or separated by space try again later!\n";
        return (1);
    }
    my_contact.setphonenumber(str);
    std::cout << "darkest secret : ";
    getline(std::cin, str);
    if(if_clean(str))
    {
        std::cout << "Darckest secret cannot be empty or separated by space try again later!\n";
        return (1);
    }
    my_contact.setdarkestsecret(str);
    return (0);
}

 
int main()
{
    PhoneBook book_contact;
    Contact my_contact;
    std::string str;
    int i = 0;
    int j = 0;
    int flag = 0;
    int x = 0;
    while(1)
    {
        std::cout << "Please, enter your chois: ";
        getline (std::cin,str);
        if(std::cin.eof())
            exit(0);
        if(str == "ADD")
        {
            if(fill_contact(my_contact))
                continue;
            j = i;
            book_contact.setcontact(my_contact, i);
            i++;
            if(i == 8)
            {
                flag = 1;
                i = 0;
            }
            x = 1;
        }
        else if(str == "SEARCH")
        {
            if(flag == 1)
                j = 7;
            book_contact.desplay_all(j, x);
            std::cout << "enter an index number\n";
            getline(std::cin, str);
            if(std::cin.eof())
            exit(0);
            book_contact.getcontact(str, j, x);
        }
        else if(str == "EXIT")
        exit(0);
        else
            std::cout << "sorry! you have 3 chois: ADD, SEARCH or EXIT\n";
    }
}