/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 00:10:06 by nfoughal          #+#    #+#             */
/*   Updated: 2023/09/10 15:44:10 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include  <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include<fstream>

class ShrubberyCreationForm : public AForm
{
    private:
    std::string target;
    
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string name);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
    ShrubberyCreationForm(const ShrubberyCreationForm &other);
    std::string getTarget() const;
    virtual void execute(Bureaucrat const & executor) const;
};

#endif