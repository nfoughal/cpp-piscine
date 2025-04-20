/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 19:54:31 by nfoughal          #+#    #+#             */
/*   Updated: 2023/09/11 17:08:02 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include  <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
private:
    const std::string name;
    int grade;
public:
    Bureaucrat(const std::string name, int grade);
    Bureaucrat(const Bureaucrat &other);
    Bureaucrat();
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
};

std::ostream & operator<<(std::ostream &out, const Bureaucrat &obj);

#endif