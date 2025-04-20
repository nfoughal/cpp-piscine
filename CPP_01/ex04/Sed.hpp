/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 11:49:41 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/04 20:25:03 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

#include<fstream>
#include<iostream>


void checkLine(std::string &line, std::string s1, std::string s2);
void replaceAll(std::string& s, std::string & mystr, std::string & stRE);

#endif