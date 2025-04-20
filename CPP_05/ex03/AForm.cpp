/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 01:07:40 by nfoughal          #+#    #+#             */
/*   Updated: 2023/09/10 19:06:25 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string name, int sgnGrade, int exeGrade): name(name), gradeSgn(sgnGrade), gradeExe(exeGrade)
{
    if(sgnGrade < 1 || exeGrade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (sgnGrade > 150 || exeGrade > 150)
        throw Bureaucrat::GradeTooLowException();
    sgn = 0;
}

AForm::AForm(): name("name"), gradeSgn(1), gradeExe(2)
{
}

AForm::~AForm()
{
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return "grade too high";
}

 const char *AForm::GradeTooLowException::what() const throw()
{
    return "grade too low";
}
const char *AForm::ifSignedException::what() const throw()
{
    return "Not Signed!";
}


std::string AForm::getName() const
{
    return (name);
}

bool AForm::getSigne() const
{
    return (sgn);
}

int AForm::getExeGrade() const
{
    return (gradeExe);
}

int AForm::getSgnGrade() const
{
    return (gradeSgn);
}

void AForm::beSigned(const Bureaucrat &s) 
{
    if(s.getGrade() > gradeSgn)
        throw Bureaucrat::GradeTooLowException();
    sgn = true;
}

AForm & AForm::operator=(const AForm &other)
{
    sgn = other.getSigne();
    return(*this);
}

AForm::AForm(const AForm &other) : name(other.getName()), gradeSgn(other.getSgnGrade()), gradeExe(other.getExeGrade())
{
    sgn = false;
}

std::ostream &operator<<(std::ostream &out, const AForm &obj)
{
    out << "name = " << obj.getName() << std::endl;
    out << "grade required to sign = " << obj.getExeGrade() << std::endl;
    out << "grade required to execute = " << obj.getSgnGrade() << std::endl;
    if(obj.getSigne())
        out << "Signed" << std::endl;
    else
        out << "not signed" << std::endl;
    return (out);
}