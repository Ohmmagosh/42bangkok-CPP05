/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:12:41 by psuanpro          #+#    #+#             */
/*   Updated: 2023/06/12 21:37:37 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void) {
	std::cout << "Intern create" << std::endl;
}

Intern::Intern( const Intern& cp) {
	*this = cp;
}

Intern& Intern::operator=( const Intern& cp) {
	if (this != &cp)
		*this = cp;
	return (*this);
}

Intern::~Intern() {
	std::cout << "Intern destroy" << std::endl;
}


AForm*	Intern::makeForm( std::string target, std::string name ) {
	int si;
	std::map<std::string, int> stmap;

	stmap["robotomy request"] = 1;
	stmap["Presidential request"] = 2;
	stmap["Shrubbery request"] = 3;

	si = stmap[target];
	switch (si)
	{
		case 1: return (new RobotomyRequestForm(name));
		case 2: return (new PresidentialPardonForm(name));
		case 3: return (new ShrubberyCreationForm(name));
		default: throw AFormCreateFail();
	}
}

