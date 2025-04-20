/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:48:22 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/05 17:20:11 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl obj;
    
    obj.complain("print");
    obj.complain("debug");
    obj.complain("info");
    obj.complain("warning");
    obj.complain("error");
    
    return (0);
}