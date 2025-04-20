/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:21:38 by nfoughal          #+#    #+#             */
/*   Updated: 2023/09/10 22:01:15 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5), target("DefaultName")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):AForm("PresidentialPardonForm", 25, 5), target(target)
{
}


std::string PresidentialPardonForm::getTarget() const
{
    return (target);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if(!getSigne())
        throw AForm::ifSignedException();
    if(executor.getGrade() > this->getExeGrade())
        throw Bureaucrat::GradeTooLowException();
    std::cout << target << " has been pardoned by Zaphod Beeblebrox " << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    target = other.getTarget();
    return(*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}