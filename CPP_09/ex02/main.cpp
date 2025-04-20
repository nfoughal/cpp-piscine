/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:57:21 by nfoughal          #+#    #+#             */
/*   Updated: 2023/09/22 18:45:25 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    int i = 1;
    PmergeMe obj;
    std::vector<std::string> vec;
    std::deque<std::string> deq;

    if(ac == 1)
    {
        std::cout << "Error: need more argument" << std::endl;
        return 1;
    }
    while(i < ac)
        vec.push_back(av[i++]);
    i = 1;
    while(i < ac)
        deq.push_back(av[i++]);
    obj.vectorSorter(vec);
    obj.dequeSorter(deq);
}