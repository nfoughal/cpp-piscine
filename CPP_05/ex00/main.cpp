/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:57:47 by nfoughal          #+#    #+#             */
/*   Updated: 2023/09/09 15:11:59 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat nabil("nabill", 2);
        std::cout << nabil << std::endl;
        nabil.incrementGrade();
        std::cout << nabil << std::endl;
        nabil.incrementGrade();
        std::cout << nabil << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "exception  : " << e.what() << std::endl;
    }
    return (0);
}