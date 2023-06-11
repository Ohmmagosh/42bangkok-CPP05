/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:01:35 by psuanpro          #+#    #+#             */
/*   Updated: 2023/06/11 13:10:21 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat( void ):_name("hello"), _grade(1) {
	std::cout << "Bureaucrat crate!! " << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade):_name(name), _grade(grade) {
	std::cout << "Bureaucrat name: " << this->_name + " grade: " << this->_grade << " create!!"<< std::endl;
	if (this->getGrade() < 1)
		throw GradeTooLowException();
	else if (this->getGrade() > 150)
		throw GradeTooHighException();

}

Bureaucrat::Bureaucrat( const Bureaucrat &cp ) {
	*this = cp;
}


Bureaucrat& Bureaucrat::operator=( const Bureaucrat &cp) {
	if (this != &cp) {
		this->_grade = cp._grade;
	}
	return (*this);
}

std::string	Bureaucrat::getName( void ) const {
	return (this->_name);
}

int	Bureaucrat::getGrade( void ) const{
	return (this->_grade);
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << "Bureaucreat destroy!!" << std::endl;
}

std::ostream& operator<<(std::ostream& stream, const Bureaucrat &cp) {
	// <name>, bureaucrat grade <grade>.
	stream << cp.getName() << ", bureaucrat grade " << cp.getGrade() << std::endl;

	return (stream);
}

void	Bureaucrat::executeForm(Form const & form){
	(void)0;
}
