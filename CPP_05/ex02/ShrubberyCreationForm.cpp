/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 00:58:23 by nfoughal          #+#    #+#             */
/*   Updated: 2023/09/10 22:20:34 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137), target("DefaultName")
{ 
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name):AForm("ShrubberyCreationForm", 145, 137), target(name)
{
}


std::string ShrubberyCreationForm::getTarget() const
{
    return (target);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if(!getSigne())
        throw AForm::ifSignedException();
    if(executor.getGrade() > this->getExeGrade())
        throw Bureaucrat::GradeTooLowException();
    std::ofstream file(getTarget() + "_shrubbery");
    if(!file.is_open())
    {
        std::cout << "Error!" << std::endl;
    }
    file << "         @@\n";
    file << "        @@@@\n";
    file << "       @@@@@@\n";
    file << "      @@@@@@@@\n";
    file << "     @@@@@@@@@@\n";
    file << "    @@@@@@@@@@@@\n";
    file << "   @@@@@@@@@@@@@@\n";
    file << "  @@@@@@@@@@@@@@@@\n";
    file << " @@@@@@@@@@@@@@@@@@\n";
    file << "@@@@@@@@@@@@@@@@@@@@\n";
    file << "         |||         \n";
    file.close();
}


ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    target = other.getTarget();
    return(*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}