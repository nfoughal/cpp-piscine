/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:35:01 by nfoughal          #+#    #+#             */
/*   Updated: 2023/09/23 11:16:10 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if(ac != 2)
    {
        std::cout << "Error : argument" << std::endl;
        return 1;
    }

    BitcoinExchange bitcoin;
    bitcoin.run(av[1]);

    return 0;
}