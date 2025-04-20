/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 20:14:26 by nfoughal          #+#    #+#             */
/*   Updated: 2023/09/11 17:21:17 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int Bureaucrat::getGrade() const
 {
    return (grade);
 }

std::string Bureaucrat::getName() const
 {
    return(name);
 }

void Bureaucrat::incrementGrade()
{
    if(grade == 1)
        throw Bureaucrat::GradeTooHighException();
    grade--;
}

void Bureaucrat::decrementGrade()
{
    if(grade == 150)
        throw Bureaucrat::GradeTooLowException();
    grade++;
}
Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name), grade(grade)
{
    if(grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat():name("default"), grade(150)
{
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    grade = other.getGrade();
    return (*this);
}
Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.getName())
{
    grade = other.getGrade();
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj)
{
    out << obj.getName() << "," << " bureaucrat grade " << obj.getGrade();
    return (out);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "grade too high";
}

 const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "grade too low";
}

Bureaucrat::~Bureaucrat()
{
}

void Bureaucrat::signForm(Form &obj)
{
    try
    {
        obj.beSigned(*this);
        std::cout << name << " signed " << obj.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << name << " couldn’t sign " << obj.getName() << " because " << e.what() << std::endl;
    }
}