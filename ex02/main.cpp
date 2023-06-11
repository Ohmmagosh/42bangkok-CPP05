/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 20:18:31 by psuanpro          #+#    #+#             */
/*   Updated: 2023/06/11 22:39:42 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main( void )
{
	/ try
    // {
    //     // Bureaucrat Z("ziz", 80);
    //     // Form       Y("middlefinger", 70, 100);
    //     // Z.signForm(Y);
    // }
    // catch (std::exception &e)
    // {
    //     std::cout << e.what()  << std::endl;
    // }

    try
    {
        // Bureaucrat Z("ziz", 146);
        // Bureaucrat Z("ziz", 140);
        // Bureaucrat Z("ziz", 86);
        Bureaucrat Z("Mr. Kavula", 1);
        ShrubberyCreationForm SH;
        RobotomyRequestForm   RT;
        PresidentialPardonForm PP;
        Z.signForm(SH);
        Z.executeForm(SH);
        std::cout << std::endl;
        Z.signForm(RT);
        Z.executeForm(RT);
        std::cout << std::endl;
        Z.signForm(PP);
        Z.executeForm(PP);
    }
    catch (const std::exception &e)
    {
        std::cout << e.what()  << std::endl;
    }
    return 0;
}
}
