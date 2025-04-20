/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:56:26 by nfoughal          #+#    #+#             */
/*   Updated: 2023/09/10 21:39:24 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include  <iostream>
#include <string>
#include <exception>
#include "AForm.hpp"
class AForm;
class Bureaucrat
{
private:
    const std::string name;
    int grade;
public:
    Bureaucrat(const std::string name, int grade);
    Bureaucrat(const Bureaucrat &other);
    ~Bureaucrat();
    Bureaucrat &operator=(const Bureaucrat &other);
    class GradeTooHighException : public std:: exception
    {
        public:
            virtual const char *what () const throw ();
    };
    class GradeTooLowException : public std:: exception
    {
        public :
           virtual const char *what () const throw ();
    };
    std::string getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();
    void signForm(AForm & obj);
    void executeForm(AForm const & form);
};

std::ostream & operator<<(std::ostream &out, const Bureaucrat &obj);

#endif