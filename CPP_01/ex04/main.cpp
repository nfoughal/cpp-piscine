/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 11:48:50 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/06 11:39:47 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int ac, char **av)
{
    if(ac > 3)
    {
        std::string line;
        std::string str1 = av[1];
        std::ifstream myfile(str1);
        std::ofstream replaceFile(str1.append(".replace"));
        if(myfile.is_open() && replaceFile.is_open())
        {
            while(getline(myfile, line))
            {
                checkLine(line, av[2], av[3]);
                replaceFile << line << "\n"; 
            }
            std::cout << "mission completed" << std::endl;
        }
        else
            std::cout << "Cannot read file" << std::endl;
        myfile.close();
        replaceFile.close();
    }
    else
    std::cout<< "program takes three parameters in the following order: a filename and two strings, s1 and s2."<< std::endl;
}