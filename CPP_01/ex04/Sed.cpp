/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 11:49:43 by nfoughal          #+#    #+#             */
/*   Updated: 2023/08/04 20:32:20 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

void replaceAll(std::string& s, std::string & mystr, std::string & stRE)
{
    size_t pos = 0;
    size_t prev;
    std::string str;
    while(1)
    {
        prev = pos;
        pos = s.find(mystr, pos);
        if(pos == std::string::npos)
            break;
        str = str.append(s, prev, pos - prev);
        str += stRE;
        pos += mystr.size();
    }
    str = str.append(s, prev, s.size() - prev);
    s.swap(str);
}

void checkLine(std::string &line, std::string s1, std::string s2)
{
    replaceAll(line, s1, s2);
}
