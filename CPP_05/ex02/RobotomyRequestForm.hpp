/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:53:31 by nfoughal          #+#    #+#             */
/*   Updated: 2023/09/10 18:28:03 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include  <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include<fstream>
#include <cstdlib>


class RobotomyRequestForm : public AForm
{
    private:
    std::string target;
    
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string name);
    ~RobotomyRequestForm();
    RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
    RobotomyRequestForm(const RobotomyRequestForm &other);
    std::string getTarget() const;
    virtual void execute(Bureaucrat const & executor) const;
};

#endif