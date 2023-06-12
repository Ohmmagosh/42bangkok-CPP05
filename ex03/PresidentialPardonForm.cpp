/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:04:13 by psuanpro          #+#    #+#             */
/*   Updated: 2023/06/12 21:37:19 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ): AForm("PresidentialPardonForm", 25, 5) {
	std::cout << "PresidentialPardonForm create!!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( std::string name ): AForm(name, 25, 5) {
	std::cout << "PresidentialPardonForm create!!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& cp): AForm("PresidentialPardonForm", 25, 5){
	*this = cp;
}

PresidentialPardonForm& PresidentialPardonForm::operator=( const PresidentialPardonForm& cp ) {
	if (this != &cp)
		*this = cp;
	return (*this);
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
