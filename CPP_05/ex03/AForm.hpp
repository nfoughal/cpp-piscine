/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 23:28:56 by nfoughal          #+#    #+#             */
/*   Updated: 2023/09/11 18:34:21 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include  <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"
class Bureaucrat;
class AForm
{
private:
    const std::string name;
    bool sgn;
    const int gradeSgn;
    const int gradeExe;
public:
     class GradeTooHighException : public std:: exception
    {
        public:
            virtual const char *what () const throw ();
    };
    class GradeTooLowException : public std:: exception
    {
        public:
            virtual const char *what () const throw ();
    };
     class ifSignedException : public std:: exception
    {
        public:
            virtual const char *what () const throw ();
    };
    std::string  getName() const;
    bool getSigne() const;
    int getSgnGrade() const;
    int getExeGrade() const;
    void beSigned(const Bureaucrat &s);
    AForm(std::string name, int sgnGrade, int exeGrade);
    AForm();
    virtual ~AForm();
    AForm &operator=(const AForm &other);
    AForm(const AForm &other);
    virtual void execute(Bureaucrat const & executor) const = 0;

};
std::ostream & operator<<(std::ostream &out, const AForm &obj);

# endif