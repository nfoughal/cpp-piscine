/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 23:12:03 by nfoughal          #+#    #+#             */
/*   Updated: 2023/09/11 15:07:24 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(const Intern & obj)
{
    (void)obj;
}

Intern &Intern::operator=(const Intern & obj)
{
    (void)obj;
    return (*this);
}

AForm * Intern::makeForm(std::string form, std::string target)
{
    std::string AForms[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    AForm *object[3] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
    int i = 0;
    while(i < 3)
    {
        if(AForms[i] == form)
        {
            std::cout << "Intern creates " << form << std::endl;
            return(object[i]);
        }
        i++;
    }
    std::cout << "Intern can't creat " << form << std::endl; 
        return (NULL);
}
