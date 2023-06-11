/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 20:15:27 by psuanpro          #+#    #+#             */
/*   Updated: 2023/06/11 13:11:07 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>

class Bureaucrat;

class Form {
	public:
		Form( void );
		Form(std::string name, bool sign, int gradere, int gradeexe);
		Form(std::string name, int gradere, int gradeexe);
		Form( const Form& cp );
		Form& operator=( const Form& cp );
		~Form( void );
		void 	beSigned( const Bureaucrat& cp );
		void 	signForm( const Bureaucrat& cp );
		bool	getSigned( void ) const;
		int		getGradere( void ) const;
		int		getGradeexe( void ) const;
		std::string	getName( void ) const;
		void execute(Bureaucrat const & executor) const;
	private:
		const std::string   _name;
		bool                _signed;
		const int           _gradere;
		const int           _gradeexe;
	class GradeTooHighException: public std::exception {
		const char * what () const throw () {
			return "Form GradeTooHighException";
		}
	};
	class GradeTooLowException: public std::exception {
		const char * what() const throw () {
			return "Form GradeTooLowException";
		}
	};
};
std::ostream& operator<<(std::ostream& stream, const Form &cp);
#endif
