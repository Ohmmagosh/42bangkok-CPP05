/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:03:49 by psuanpro          #+#    #+#             */
/*   Updated: 2023/06/12 21:21:32 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ): AForm("ShrubberyCreationForm", 145, 137) {
	std::cout << "ShrubberyCreationForm create" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string name ): AForm(name, 145, 137) {
	std::cout << "ShrubberyCreationForm create" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& cp): AForm("ShrubberyCreationForm", 145, 137) {
	this->_file_name = cp._file_name;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm& cp) {
	if (this != &cp)
		*this = cp;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {
	if (this->_fd.is_open())
		this->_fd.close();
	std::cout << "ShrubberyCreationForm destroy" << std::endl;
}

void	ShrubberyCreationForm::execute( const Bureaucrat& executor) const{
	std::stringstream	name;
	std::fstream		fd;

	if (executor.getGrade() >= this->getGradeexe() && this->getSigned()) {
		fd.open(name.str());
		if (fd.is_open()) {
			fd << "       _-_       "<< std::endl;
			fd << "    /~~   ~~\\    "<< std::endl;
			fd << " /~~         ~~\\ "<< std::endl;
			fd << "{               }"<< std::endl;
			fd << " \\  _-     -_  /"<< std::endl;
			fd << "   ~  \\\\ //  ~"<< std::endl;
			fd << "_- -   | | _- _  "<< std::endl;
			fd << "  _ -  | |   -_  "<< std::endl;
			fd << "      // \\\\      "<< std::endl;
			fd.close();
		}
	} else {
		std::cout << "hello" << std::endl;
		throw AForm::GradeTooLowException();
	}
}

