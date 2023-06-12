/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:01:37 by psuanpro          #+#    #+#             */
/*   Updated: 2023/06/11 23:32:56 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include "AForm.hpp"
class Bureaucrat {
	private:
		const std::string	_name;
		int					_grade;
	public:
		Bureaucrat( void );
		Bureaucrat( const Bureaucrat &cp );
		Bureaucrat( std::string name, int grade );
		Bureaucrat& operator=( const Bureaucrat &cp );
		~Bureaucrat( );
		std::string		getName( void ) const;
		int				getGrade( void ) const;
		void			signForm( AForm& form );
		void			executeForm(AForm const & form);
	class GradeTooHighException:public std::exception {
		const char * what () const throw () {
			return "Grade too high!!";
		};
	};
	class GradeTooLowException:public std::exception {
		const char * what () const throw () {
			return "Grade too low!!";
		};
	};
};
std::ostream& operator<<(std::ostream& stream, const Bureaucrat &cp);

#endif
