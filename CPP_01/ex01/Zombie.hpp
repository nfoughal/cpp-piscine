/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:21:15 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/07 12:26:46 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include<iostream>
#include<string>

class Zombie
{
private:
    std::string name;
public:
    void announce( void );
    void setName(std::string str);
    Zombie();
    ~Zombie();
};
Zombie* zombieHorde( int N, std::string name );
#endif