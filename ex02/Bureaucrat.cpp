/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:01:35 by psuanpro          #+#    #+#             */
/*   Updated: 2023/06/11 23:40:09 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"


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
	std::cout << "Bureaucrat destroy!!" << std::endl;
}

std::ostream& operator<<(std::ostream& stream, const Bureaucrat &cp) {
	stream << cp.getName() << ", bureaucrat grade " << cp.getGrade() << std::endl;

	return (stream);
}

void	Bureaucrat::executeForm(AForm const & form) {
	try
	{
		form.execute(*this);
		std::cout << this->_name << " executed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->_name << " cannot execute " << form.getName() << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::signForm( AForm& form ) {
	if (form.getSigned())
		std::cout << form.getName() << " signed " << this->getName() << std::endl;
	else
		std::cout << form.getName() << " couldn't sign " << this->getName() << "because" << this->getGrade() << std::endl;
}
