/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 20:11:27 by psuanpro          #+#    #+#             */
/*   Updated: 2023/06/09 23:07:05 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form( void ):_name("default form"), _signed(false), _gradere(1), _gradeexe(1) {
	std::cout << this->_name << " " << this->_signed << " " << this->_gradere << " " << this->_gradeexe << std::endl;
}

Form::Form(std::string name, bool sign, int gradere, int gradeexe): _name(name), _signed(sign), _gradere(gradere), _gradeexe(gradeexe) {
	std::cout << this->_name << " " << this->_signed << " " << this->_gradere << " " << this->_gradeexe << std::endl;
	if (this->_gradere < 1 || this->_gradere < 1)
		throw GradeTooHighException();
	else if (this->_gradere < 1 || this->_gradere < 1)
		throw GradeTooHighException();
}

Form::Form( const Form& cp ):_name(cp._name), _signed(cp._signed), _gradere(cp._gradere), _gradeexe(cp._gradeexe) {
	*this = cp;
}

Form& Form::operator=( const Form& cp) {
	this->_signed = cp.getSigned();
	return (*this);
}

Form::~Form( void ) {
	std::cout << "Form destroy" << std::endl;
}

bool	Form::getSigned( void ) const {
	return (this->_signed);
}

const int&	Form::getGradere( void ) const {
	return (this->_gradere);
}

const int&	Form::getGradeexe( void ) const {
	return (this->_gradeexe);
}

const std::string	Form::getName( void ) const {
	return (this->_name);
}

void	Form::beSigned( const Bureaucrat& cp) {
	if (cp.getGrade() > 150) {
		this->_signed = false;
		throw GradeTooLowException();
	}
	else if (cp.getGrade() < 1){
		this->_signed = false;
		throw GradeTooHighException();
	}
	else
		this->_signed = true;
}

void	Form::signForm( const Bureaucrat& cp ) {
	if (this->getSigned())
		std::cout << cp.getName() << " signed " << this->getName() << std::endl;
	else
		std::cout << cp.getName() << " couldn't sign " << this->getName() << "because" << cp.getGrade() << std::endl;
}

std::ostream& operator<<(std::ostream& stream, const Form &cp) {
	stream << cp.getName() << " ";
	if (cp.getSigned())
		stream << "signed";
	else
		stream << "unsigned";
	stream << " " << cp.getGradeexe() << " " << cp.getGradere();
}
