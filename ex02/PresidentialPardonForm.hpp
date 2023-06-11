/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:04:11 by psuanpro          #+#    #+#             */
/*   Updated: 2023/06/11 22:34:21 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "AForm.hpp"
# include "Bureaucrat.hpp"
class PresidentialPardonForm : public AForm {
	public:
		PresidentialPardonForm( void );
		PresidentialPardonForm( const PresidentialPardonForm& cp);
		PresidentialPardonForm& operator=( const PresidentialPardonForm& cp );
		~PresidentialPardonForm();
		void	execute( const Bureaucrat& cp) const;
	private:

};

#endif
