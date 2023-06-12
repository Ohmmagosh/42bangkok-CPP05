/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 20:18:31 by psuanpro          #+#    #+#             */
/*   Updated: 2023/06/12 21:56:55 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main( void )
{
	try {
		Bureaucrat	a = Bureaucrat("A", 1);
		Bureaucrat	b = Bureaucrat("B", 30);
		Bureaucrat	c = Bureaucrat("C", 150);
		AForm *pForm = new PresidentialPardonForm();
		AForm *rForm = new RobotomyRequestForm();
		AForm *sForm = new ShrubberyCreationForm();
		pForm->beSigned(b);
		rForm->beSigned(c);
		sForm->beSigned(c);
		sForm->execute(c);
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;

		c.executeForm(*sForm);
		c.executeForm(*rForm);
		c.executeForm(*pForm);

		delete pForm;
		delete rForm;
		delete sForm;
	} catch (const std::exception &e) {
		std::cout << e.what()  << std::endl;
	}
	return 0;
}

