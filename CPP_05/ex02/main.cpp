/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:08:29 by nfoughal          #+#    #+#             */
/*   Updated: 2023/09/11 17:52:17 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main()
{
    try{

        ShrubberyCreationForm sfm("Test_form");
        Bureaucrat lsw("lsw", 1);
        lsw.signForm(sfm);
        lsw.executeForm(sfm);
    
    Bureaucrat nabil("nabiL", 100);
    ShrubberyCreationForm shrubbery("tree");
    RobotomyRequestForm robotomy("MrRobot");
    PresidentialPardonForm presiden("Mr Zaphod");
    nabil.signForm(shrubbery);
    nabil.signForm(robotomy);
    nabil.signForm(presiden);

    shrubbery.execute(nabil);
    robotomy.execute(nabil);
    presiden.execute(nabil);
    
    }
    catch (std::exception & e)
    {
        std::cout << "exception  : " << e.what() << std::endl;
    }
    
    return (0);
}