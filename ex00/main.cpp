/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:01:32 by psuanpro          #+#    #+#             */
/*   Updated: 2023/06/09 20:02:26 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void) {
	{
		try {
			Bureaucrat a("twenty", 20);
		} catch (const std::exception &e ) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		try {
			Bureaucrat a("zero", 0);
		} catch (const std::exception &e ) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		try {
			Bureaucrat a("twohundred", 200);
		} catch (const std::exception &e ) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		try
		{
			Bureaucrat a("Fourty", 40);
			std::cout << a ;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}
