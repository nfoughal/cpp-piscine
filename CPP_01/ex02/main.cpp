/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:49:12 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/03 15:01:16 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    std::cout << "The memory address of the string variable :" << &str << "\n";
    std::cout << "The memory address held by stringPTR :" << stringPTR << "\n";
    std::cout << "The memory address held by stringREF :" << &stringREF << "\n";
    std::cout << "The value of the string variable :" << str << "\n";
    std::cout << "• The value pointed to by stringPTR :" << *stringPTR << "\n";
    std::cout << "The value pointed to by stringREF :" << stringREF << "\n";
}