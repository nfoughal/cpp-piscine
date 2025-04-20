/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 01:20:50 by nfoughal          #+#    #+#             */
/*   Updated: 2023/09/14 17:27:24 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include<iostream>
#include<string>
#include <cstdint>


struct Data {
    int value1;
};

class Serializer
{
public:
    Serializer();
    ~Serializer();
    Serializer(const Serializer &other);
    Serializer &operator=(const Serializer &other);
    uintptr_t serialize(Data* ptr);
    Data* deserialize(uintptr_t raw);
};



#endif