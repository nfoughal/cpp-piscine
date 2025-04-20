/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:02:20 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/14 23:30:33 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string n);
    FragTrap(const FragTrap &b);
    ~FragTrap();
    FragTrap &operator=(const FragTrap &other);
    void attack(const std::string& target);
    void highFivesGuys(void);

};



#endif