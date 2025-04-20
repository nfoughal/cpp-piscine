/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:08:29 by nfoughal          #+#    #+#             */
/*   Updated: 2023/09/11 18:34:06 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
 
    
    Bureaucrat nabil("nabiL", 1);

    Intern intern1;
    AForm  *form;

    form =  intern1.makeForm("ShrubberyCreationForm", "tree");
    
    nabil.signForm(*form);
    nabil.executeForm(*form);
    delete form;
    
    form =  intern1.makeForm("RobotomyRequestForm", "rbax1");
    
    nabil.signForm(*form);
    nabil.executeForm(*form);
    delete form;
    
    form =  intern1.makeForm("PresidentialPardonForm", "Mr Zaphod");
    
    nabil.signForm(*form);
    nabil.executeForm(*form);
    delete form;
    
    return (0);
}