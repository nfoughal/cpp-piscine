/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 15:53:26 by nfoughal          #+#    #+#             */
/*   Updated: 2023/09/11 17:21:52 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include  <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"
class Bureaucrat;
class Form
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
    std::string  getName() const;
    bool getSigne() const;
    int getSgnGrade() const;
    int getExeGrade() const;
    void beSigned(const Bureaucrat &s);
    Form(std::string name, int sgnGrade, int exeGrade);
    Form();
    ~Form();
    Form &operator=(const Form &other);
    Form(const Form &other);


};
std::ostream & operator<<(std::ostream &out, const Form &obj);

# endif