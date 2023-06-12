/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:12:44 by psuanpro          #+#    #+#             */
/*   Updated: 2023/06/12 21:35:27 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <map>

class AForm;
class Intern {
	public:
		Intern();
		Intern( const Intern& cp);
		Intern& operator=(const Intern& cp);
		~Intern();
		AForm*	makeForm( std::string target, std::string name );
	class AFormCreateFail: public std::exception {
		public:
			virtual const char * what () const throw () {
				return "AForm can not create";
			}
	};
};

#endif
