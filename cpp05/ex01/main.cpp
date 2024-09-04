/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:49:06 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/06 10:52:08 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat	b1("Sato", 1);
		Bureaucrat	b2("Suzuki", 2);
		Bureaucrat	b3("Tanaka", 3);
		Form		f1("form1", 2, 3);
		Form		f2("form2", 2, 3);
		Form		f3("form3", 2, 3);

		std::cout << b1 << std::endl;
		std::cout << f1 << std::endl;
		f1.beSigned(b1);
		std::cout << f1 << std::endl;
		
		std::cout << b2 << std::endl;
		std::cout << f2 << std::endl;
		f2.beSigned(b2);
		std::cout << f2 << std::endl;

		// Form		f4("form4", 0, 1);
		
		std::cout << b3 << std::endl;
		std::cout << f3 << std::endl;
		f3.beSigned(b3);
		std::cout << f3 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
