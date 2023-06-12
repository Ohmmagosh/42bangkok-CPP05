/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:03:52 by psuanpro          #+#    #+#             */
/*   Updated: 2023/06/12 22:02:59 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <ostream>
# include <iostream>
# include <fstream>
// # include <ofstream>
# include <sstream>
# include "Bureaucrat.hpp"
# include <exception>
# include <cstdlib>
# include <time.h>

class ShrubberyCreationForm: public AForm {
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm( const ShrubberyCreationForm& cp );
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& cp);
		~ShrubberyCreationForm();
		void	execute(Bureaucrat const & executor) const;
	private:
		std::fstream	_fd;
		std::string		_file_name;

};

#endif
