/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:27:27 by nfoughal          #+#    #+#             */
/*   Updated: 2023/09/13 23:18:47 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    if(ac != 2)
    {
        std::cout << "Error : expected at most 1 argument" << std::endl;
        return(0);
    }
    ScalarConverter str;
    str.converter(av[1]);
}
