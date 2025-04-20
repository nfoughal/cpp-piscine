/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:29:08 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/07 12:41:46 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include<iostream>
#include<string>

class Weapon
{
private:
    std::string type;
public:
    const std::string& getType();
    void setType(std::string str);
    Weapon(std::string n);
    ~Weapon();
};

#endif