/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 01:27:14 by nfoughal          #+#    #+#             */
/*   Updated: 2023/09/14 17:35:33 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data data;
    
    Serializer obj;
    data.value1 = 22;

    // serialie data
    uintptr_t SerializerPtr = obj.serialize(&data);

    //deserialize data 
   Data *deserializePtr = obj.deserialize(SerializerPtr);
    std::cout << SerializerPtr << std::endl;
    std::cout << deserializePtr << std::endl;
    if(deserializePtr == &data)
    std::cout << "original data value : " << data.value1 << std::endl;
    else
        std::cout << "Serialization failed! " << std::endl;
}
