/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:49:06 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/05 11:07:42 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
  try
  {
	Bureaucrat	b1("Sato", 1);
	Bureaucrat	b2("Suzuki", 150);
	// Bureaucrat	b3("Yamada", 151);
	// Bureaucrat	b4("Tanaka", 0);
	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;

	b1.decrementGrade();
	std::cout << b1 << std::endl;
	b1.incrementGrade();
	std::cout << b1 << std::endl;
	// b1.incrementGrade();
	// std::cout << b1 << std::endl;
	b2.incrementGrade();
	std::cout << b2 << std::endl;
	b2.decrementGrade();
	std::cout << b2 << std::endl;
	b2.decrementGrade();
	std::cout << b2 << std::endl;
	
  }
  catch(Bureaucrat::GradeTooHighException &e)
  {
	std::cerr << e.what() << std::endl;
  }
  catch(Bureaucrat::GradeTooLowException &e)
  {
	std::cerr << e.what() << std::endl;
  }
  return (0);
}
