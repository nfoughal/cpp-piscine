/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:27:56 by nfoughal          #+#    #+#             */
/*   Updated: 2023/09/20 16:48:27 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
    RPN obj;
    if (ac != 2)
    {
        std::cout << "Error: need tow argument" << std::endl;
        return 0;
    }
    obj.chickIt(av[1]);
    
    return 0;

}