/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:23:26 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/17 15:05:00 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>


class Brain
{
private:
std::string ideas[100];
public:
    Brain();
    Brain(const Brain &b);
    Brain &operator=(const Brain &other);
    ~Brain();
};


#endif