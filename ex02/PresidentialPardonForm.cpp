/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:04:13 by psuanpro          #+#    #+#             */
/*   Updated: 2023/06/11 22:37:52 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ): AForm("PresidentialPardonForm", 25, 5) {
	std::cout << "PresidentialPardonForm create!!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& cp): AForm("PresidentialPardonForm", 25, 5){

}

PresidentialPardonForm& PresidentialPardonForm::operator=( const PresidentialPardonForm& cp ) {
	*this = cp;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm destroy!!" << std::endl;
}

void	PresidentialPardonForm::execute( const Bureaucrat& executor ) const{
	if (this->getSigned() == false)
		throw AForm::NoSignedException();
	if (executor.getGrade() >= this->getGradere()) {
		std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox " << std::endl;
	} else {
		std::cout << this->getName() << "  has not been pardoned by Zaphod Beeblebrox." << std::endl;
	}
}
