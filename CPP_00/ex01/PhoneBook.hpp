/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 15:17:25 by nfoughal          #+#    #+#             */
/*   Updated: 2023/07/29 15:17:26 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
class PhoneBook
{
private:
    Contact contactArray[8];
public:
    void setcontact(Contact addcontact, int i);
    void getcontact(std::string str, int i, int x);
    void desplay_all(int i, int x);
};

#endif