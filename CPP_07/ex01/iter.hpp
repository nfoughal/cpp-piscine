/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 15:06:12 by nfoughal          #+#    #+#             */
/*   Updated: 2023/09/15 20:52:23 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include<iostream>
#include<string>

template <typename T, typename F>
void iter(T* array, size_t lenght, void(*fun)(F &))
{
    if(array == NULL || fun == NULL)
        return ;
    size_t i = 0;
    while(i < lenght)
        fun(array[i++]);
}


#endif