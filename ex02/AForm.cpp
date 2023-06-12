/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 20:11:27 by psuanpro          #+#    #+#             */
/*   Updated: 2023/06/12 15:42:06 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

AForm::AForm( void ):_name("default form"), _signed(false), _gradere(1), _gradeexe(1) {
	std::cout << this->_name << " " << this->_signed << " " << this->_gradere << " " << this->_gradeexe << std::endl;
}

AForm::AForm(std::string name, bool sign, int gradere, int gradeexe): _name(name), _signed(sign), _gradere(gradere), _gradeexe(gradeexe) {
	std::cout << this->_name << " " << this->_signed << " " << this->_gradere << " " << this->_gradeexe << std::endl;
	if (this->_gradere < 150 || this->_gradeexe< 150)
		throw GradeTooHighException();
	else if (this->_gradere < 1 || this->_gradeexe < 1)
		throw GradeTooHighException();
}

AForm::AForm(std::string name, int gradere, int gradeexe): _name(name), _gradere(gradere), _gradeexe(gradeexe) {
	this->_signed = false;
	std::cout << this->_name << " " << this->_signed << " " << this->_gradere << " " << this->_gradeexe << std::endl;
	if (this->_gradere > 150 || this->_gradeexe > 150)
		throw GradeTooLowException();
	else if (this->_gradere < 1 || this->_gradeexe < 1)
		throw GradeTooHighException();
}

AForm::AForm( const AForm& cp ):_name(cp._name), _signed(cp._signed), _gradere(cp._gradere), _gradeexe(cp._gradeexe) {
	*this = cp;
}

AForm& AForm::operator=( const AForm& cp) {
	this->_signed = cp.getSigned();
	return (*this);
}

AForm::~AForm( void ) {
	std::cout << "AForm destroy" << std::endl;
}

bool	AForm::getSigned( void ) const {
	return (this->_signed);
}

int	AForm::getGradere( void ) const {
	return (this->_gradere);
}

int	AForm::getGradeexe( void ) const {
	return (this->_gradeexe);
}

std::string	AForm::getName( void ) const{
	return (this->_name);
}

void	AForm::beSigned( const Bureaucrat& cp) {
	std::cout << cp.getGrade() << " " << this->getGradere() << std::endl;
	if (cp.getGrade() >= this->getGradere()) {
		this->_signed = true;
	}
	else {
		this->_signed = false;
		throw GradeTooLowException();
	}
}

void	AForm::signForm( const Bureaucrat& cp ) {
	if (this->getSigned())
		std::cout << cp.getName() << " signed " << this->getName() << std::endl;
	else
		std::cout << cp.getName() << " couldn't sign " << this->getName() << "because" << cp.getGrade() << std::endl;
}

std::ostream& operator<<(std::ostream& stream, const AForm &cp) {
	stream << cp.getName() << " ";
	if (cp.getSigned())
		stream << "signed";
	else
		stream << "unsigned";
	stream << " " << cp.getGradeexe() << " " << cp.getGradere();
	return stream;
}

void	AForm::execute(Bureaucrat const & executor) const {
	std::cout << std::endl;
	std::cout << executor.getGrade() << " " << this->getGradeexe() << std::endl;
	if (executor.getGrade() < this->getGradeexe())
		throw AForm::GradeTooLowException();
	else if (!getSigned())
		throw AForm::NoSignedException();
}
