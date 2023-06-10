/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 20:18:31 by psuanpro          #+#    #+#             */
/*   Updated: 2023/06/10 20:59:28 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void )
{
	{
		std::cout << "------------------------------" << std::endl;
		Bureaucrat a("helllo", 1);
		Form b("first Form", 70, 30);
		std::cout << b << std::endl;
	}
	{
		std::cout << "------------------------------" << std::endl;
		Bureaucrat a("helllo", 71);
		Form b("first Form", 70, 30);
		std::cout << b << std::endl;
	}
	{
		std::cout << "------------------------------" << std::endl;
		try {
			Bureaucrat a("helllo", 71);
			Form b("first Form", 0, 51);
			std::cout << b << std::endl;
		} catch(const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "------------------------------" << std::endl;
		try {
			Bureaucrat a("helllo", 141);
			Form b("first Form", 0, 151);
			std::cout << b << std::endl;
		} catch(const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
}
