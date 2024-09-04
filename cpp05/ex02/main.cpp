/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:49:06 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/06 16:26:05 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	try
	{
		Bureaucrat				b1("Sato", 10);
		ShrubberyCreationForm	form1("SC");
		RobotomyRequestForm		form2("RR");
		PresidentialPardonForm	form3("PP");

		std::cout << "--- Form1 (Shrubbery) ---" << std::endl << std::endl;

		b1.signForm(form1);
		b1.executeForm(form1);

		std::cout << std::endl << "--- Form2 (Robotomy) ---" << std::endl << std::endl;

		b1.signForm(form2);
		b1.executeForm(form2);
		b1.executeForm(form2);
		b1.executeForm(form2);
		b1.executeForm(form2);
		b1.executeForm(form2);
		b1.executeForm(form2);
		b1.executeForm(form2);

		std::cout << std::endl << "--- Form3 (President) ---" << std::endl << std::endl;
	
		b1.signForm(form3);
		b1.executeForm(form3);

		std::cout << std::endl << "--- Error Case ---" << std::endl << std::endl;
		Bureaucrat				b2("Suzuki", 50);
		ShrubberyCreationForm	form4("SC");
		RobotomyRequestForm		form5("RR");
		PresidentialPardonForm	form6("PP");
		
		b2.signForm(form4);
		b2.executeForm(form4);

		b2.signForm(form5);
		b2.executeForm(form5);

		b2.signForm(form6);
		b2.executeForm(form6);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
