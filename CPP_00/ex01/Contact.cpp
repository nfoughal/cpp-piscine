/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 15:17:06 by nfoughal          #+#    #+#             */
/*   Updated: 2023/07/29 15:17:07 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setfirstname(std::string firstname)
{
    first_name = firstname;
}

void Contact::setlastname(std::string lastname)
{
    last_name = lastname;
}

void Contact::setnickname(std::string nickname)
{
    nick_name = nickname;
}

void Contact::setphonenumber(std::string phonnumber)
{
    phone_number = phonnumber;
}

void Contact::setdarkestsecret(std::string darkestsecret)
{
    darkest_secret = darkestsecret;
}

std::string Contact::getfirstname()
{
    return (first_name);
}

std::string Contact::getlastname()
{
    return (last_name);
}

std::string Contact::getnickname()
{
    return (nick_name);
}

std::string Contact::getphonnumber()
{
    return (phone_number);
}

std::string Contact::getdarkestsecret()
{
    return (darkest_secret);
}