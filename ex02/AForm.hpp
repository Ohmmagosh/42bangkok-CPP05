/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 20:15:27 by psuanpro          #+#    #+#             */
/*   Updated: 2023/06/11 23:37:15 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>

class Bureaucrat;

class AForm {
	public:
		AForm( void );
		AForm(std::string name, bool sign, int gradere, int gradeexe);
		AForm(std::string name, int gradere, int gradeexe);
		AForm( const AForm& cp );
		AForm& operator=( const AForm& cp );
		~AForm( void );
		void 	beSigned( const Bureaucrat& cp );
		void 	signForm( const Bureaucrat& cp );
		bool	getSigned( void ) const;
		int		getGradere( void ) const;
		int		getGradeexe( void ) const;
		std::string	getName( void ) const;
		void execute( Bureaucrat const & executor) const;
	class GradeTooHighException: public std::exception {
		public:
			virtual const char * what () const throw () {
				return "Form GradeTooHighException";
			}
	};
	class GradeTooLowException: public std::exception {
		public:
			virtual const char * what() const throw () {
				return "Form GradeTooLowException";
			}
	};
	class NoSignedException: public std::exception {
		public:
			virtual const char * what() const throw () {
				return "Form no signed";
			}
	};
	private:
		const std::string   _name;
		bool                _signed;
		const int           _gradere;
		const int           _gradeexe;
};
std::ostream& operator<<(std::ostream& stream, const AForm &cp);
#endif
