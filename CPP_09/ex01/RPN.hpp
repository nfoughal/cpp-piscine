/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:08:38 by nfoughal          #+#    #+#             */
/*   Updated: 2023/09/22 18:22:57 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include<iostream>
#include<string>
#include<stack>
#include<sstream>

class RPN
{

public:
    RPN();
    RPN &operator=(const RPN &other);
    RPN(const RPN &other);
    void chickIt(std::string str);
    ~RPN();
    
};


#endif