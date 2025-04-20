/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:57:47 by nfoughal          #+#    #+#             */
/*   Updated: 2023/09/11 17:35:26 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Form rokey1("rokey", 2, 0);
        std::cout << rokey1 << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "exception  : " << e.what() << std::endl;
    }

    Form rokey2("rokey", 35, 1);
    Bureaucrat nabil("nabil", 30);
    Bureaucrat rbax("rbax", 30);
    nabil.signForm(rokey2);
    std::cout << rokey2 << std::endl;
    rbax.signForm(rokey2);
    return (0);
}