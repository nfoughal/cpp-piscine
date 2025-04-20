/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:44:42 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/05 17:21:32 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


void Harl::complain( std::string level )
{
    int i = 0;
    void (Harl::*functPtr[])(void) = { &Harl::debug,  &Harl::info,  &Harl::warning,  &Harl::error};
    std::string array[] = {"debug", "info", "warning", "error"};
    while(i < 4)
    {
        void (Harl::*myFunctptr)(void) = functPtr[i];
        if (level == array[i])
            (this->*myFunctptr)();
        i++;
    }
}

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldnt be asking for more!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. Ive been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
