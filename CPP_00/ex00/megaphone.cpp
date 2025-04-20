/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 15:16:08 by nfoughal          #+#    #+#             */
/*   Updated: 2023/07/29 15:22:30 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>

void upper(std::string str)
{
    size_t i = 0;
    while(i < str.length())
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        i++;
    }
    std::cout << str;
}

int main(int ac, char **av)
{
    int i = 1;
    if(ac > 1)
    {
        while(av[i])
        {
            upper(av[i]);
            std::cout << " ";
            i++;
        }
        return (0);
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
}
