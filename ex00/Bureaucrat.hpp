/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:01:37 by psuanpro          #+#    #+#             */
/*   Updated: 2023/03/13 21:10:11 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat {
	private:
	public:
		Bureaucrat( void );
		Bureaucrat( const Bureaucrat &cp );
		Bureaucrat& operator=( const Bureaucrat &cp );
		~Bureaucrat( );

};

#endif
