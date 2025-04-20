/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 15:17:09 by nfoughal          #+#    #+#             */
/*   Updated: 2023/07/29 15:17:10 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string phone_number;
    std::string darkest_secret;
public:
    void setfirstname(std::string firstname);
    void setlastname(std::string lastname);
    void setnickname(std::string nickname);
    void setphonenumber(std::string phonenumber);
    void setdarkestsecret(std::string darkestsecret);
    std::string getfirstname();
    std::string getlastname();
    std::string getnickname();
    std::string getphonnumber();
    std::string getdarkestsecret();
};

#endif