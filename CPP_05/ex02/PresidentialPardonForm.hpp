/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:19:48 by nfoughal          #+#    #+#             */
/*   Updated: 2023/09/10 18:27:53 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include  <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include<fstream>

class PresidentialPardonForm : public AForm
{
    private:
    std::string target;
    
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string name);
    ~PresidentialPardonForm();
    PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
    PresidentialPardonForm(const PresidentialPardonForm &other);
    std::string getTarget() const;
    virtual void execute(Bureaucrat const & executor) const;
};

#endif