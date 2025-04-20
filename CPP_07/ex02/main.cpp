/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:19:21 by nfoughal          #+#    #+#             */
/*   Updated: 2023/09/15 19:21:39 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    try
    {
    Array<int> intArray(6);
    
    unsigned int i = 0;
    while(i < intArray.size())
    {
        intArray[i] = i + 3;
        std::cout << "intArray(" << i << ") = " << intArray[i] << std::endl;
        i++;
    }

    Array<int> intArrayCopy = intArray;

    intArray[-1] = 99;

    std::cout << "intArray[3] = " << intArray[-1] << " and intArrayCopy = " << intArrayCopy[3] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}