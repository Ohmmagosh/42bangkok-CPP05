/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:04:09 by psuanpro          #+#    #+#             */
/*   Updated: 2023/06/11 22:33:04 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): AForm("ShrubberyCreationForm", 72, 45) {
	std::cout << "RobotomyRequestForm created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& cp): AForm("ShrubberyCreationForm", 72, 45) {

}

RobotomyRequestForm& RobotomyRequestForm::operator=( const RobotomyRequestForm& cp) {
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm destroy" << std::endl;
}

void	RobotomyRequestForm::execute( const Bureaucrat& executor ) const{
	if (this->getSigned() == false)
		throw AForm::NoSignedException();
	if (executor.getGrade() >= this->getGradere()) {
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
// Required grades: sign 72, exec 45
