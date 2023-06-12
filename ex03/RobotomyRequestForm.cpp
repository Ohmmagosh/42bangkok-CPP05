/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:04:09 by psuanpro          #+#    #+#             */
/*   Updated: 2023/06/12 21:11:52 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): AForm("ShrubberyCreationForm", 72, 45) {
	std::cout << "RobotomyRequestForm created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( std::string name): AForm(name, 72, 45) {
	std::cout << "RobotomyRequestForm created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& cp): AForm("ShrubberyCreationForm", 72, 45) {
	*this = cp;
}

RobotomyRequestForm& RobotomyRequestForm::operator=( const RobotomyRequestForm& cp) {
	if (this != &cp)
		*this = cp;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm destroy" << std::endl;
}

void	RobotomyRequestForm::execute( const Bureaucrat& executor ) const{
	if (this->getSigned() == false)
		throw AForm::NoSignedException();
	if (executor.getGrade() >= this->getGradeexe()) {
		srand(time(0));
		if (rand() % 2 == 0) {
			std::cout << this->getName() << " has been robotomized successfully 50% of the time " << std::endl;
		} else {
			std::cout << this->getName() << " has been robotomized fail 50% of the time" << std::endl;
		}
	}else {
		throw AForm::GradeTooLowException();
	}
}
