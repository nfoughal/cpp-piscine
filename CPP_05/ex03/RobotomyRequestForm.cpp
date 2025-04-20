/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:55:21 by nfoughal          #+#    #+#             */
/*   Updated: 2023/09/10 22:01:07 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45), target("DefaultName")
{ 
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45), target(target)
{
}

std::string RobotomyRequestForm::getTarget() const
{
    return (target);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if(!getSigne())
        throw AForm::ifSignedException();
    if(executor.getGrade() > this->getExeGrade())
        throw Bureaucrat::GradeTooLowException();
    std::cout << "Drilling noises... ";
    srand(time(NULL));
    if(rand() % 2 == 0)
        std::cout << target << " has been robotomized successfull" << std::endl;
    else
        std::cout << "Robotomy of " << target << " failed." << std::endl;
}


RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    target = other.getTarget();
    return(*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}