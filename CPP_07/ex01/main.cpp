/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 15:26:24 by nfoughal          #+#    #+#             */
/*   Updated: 2023/09/15 21:08:20 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void fun( T& data)
{
    std::cout << data << " ";
}

int main()
{
    int intArray[] = {3, 4, 5, 6, 7, 8};
    double doubleArray[] = {3.3, 4.4, 5.5, 6.6, 7.7, 8.8};

    std::cout << "intArray : ";
    iter(intArray, 6, fun<int>);
    std::cout << std::endl;
    
    std::cout << "intdouble : ";
    iter(doubleArray, 6, fun<double>);
    std::cout << std::endl;
    
    return 0;
}
