/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:15:52 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/07 12:22:56 by nfoughal         ###   ########.fr       */
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
    Zombie(std::string n);
    ~Zombie();
};

void randomChump( std::string name );
Zombie* newZombie(std::string name);

#endif