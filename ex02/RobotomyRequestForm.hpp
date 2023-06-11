/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:04:06 by psuanpro          #+#    #+#             */
/*   Updated: 2023/06/11 22:16:21 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include <exception>
class RobotomyRequestForm : public AForm {
	public:
		RobotomyRequestForm( void );
		RobotomyRequestForm( const RobotomyRequestForm& cp);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& cp);
		~RobotomyRequestForm();
		void	execute( const Bureaucrat& cp) const;
};

#endif
