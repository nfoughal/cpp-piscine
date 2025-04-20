/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:55:13 by nfoughal          #+#    #+#             */
/*   Updated: 2023/09/21 23:15:48 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>
#include<chrono>
#include<deque>

class PmergeMe
{

public:
    PmergeMe();
    PmergeMe &operator=(const PmergeMe &other);
    PmergeMe(const PmergeMe &other);
    void vectorSorter(std::vector<std::string> vec);
    void dequeSorter(std::deque<std::string> deq);
    ~PmergeMe();

};


#endif