/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 17:21:27 by nfoughal          #+#    #+#             */
/*   Updated: 2023/09/11 17:23:17 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int sgnGrade, int exeGrade): name(name), gradeSgn(sgnGrade), gradeExe(exeGrade)
{
    if(sgnGrade < 1 || exeGrade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (sgnGrade > 150 || exeGrade > 150)
        throw Bureaucrat::GradeTooLowException();
    sgn = 0;
}

Form::Form():name("default"), gradeSgn(100), gradeExe(90)
{
    sgn = 0;
}

Form::~Form()
{
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "grade too high";
}

 const char *Form::GradeTooLowException::what() const throw()
{
    return "grade too low";
}

std::string Form::getName() const
{
    return (name);
}

bool Form::getSigne() const
{
    return (sgn);
}

int Form::getExeGrade() const
{
    return (gradeExe);
}

int Form::getSgnGrade() const
{
    return (gradeSgn);
}

void Form::beSigned(const Bureaucrat &s) 
{
    if(s.getGrade() > gradeSgn)
        throw Bureaucrat::GradeTooLowException();
    sgn = true;
}

Form & Form::operator=(const Form &other)
{
    sgn = other.getSigne();
    return(*this);
}

Form::Form(const Form &other) : name(other.getName()), gradeSgn(other.getSgnGrade()), gradeExe(other.getExeGrade())
{
    sgn = false;
}

std::ostream &operator<<(std::ostream &out, const Form &obj)
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