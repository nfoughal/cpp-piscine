/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 13:33:38 by nfoughal          #+#    #+#             */
/*   Updated: 2023/09/17 22:04:04 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    try
    {
        std::vector<int> vec;

        vec.push_back(1);
        vec.push_back(99);
        vec.push_back(3);
        vec.push_back(4);
        
        int found = 99;
        int i = easyfind(vec, found);
        std::cout << i << std::endl;
    }
    catch(const std::exception & e)
    {
        std::cout << "Error "<< e.what() << std::endl;
    }
    
    return (0);
}