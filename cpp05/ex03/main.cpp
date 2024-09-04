/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:49:06 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/06 17:27:01 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	try
	{
		Bureaucrat				b1("Sato", 10);
		Intern					someRandomIntern;
		Form*					form1;
		Form*					form2;
		Form*					form3;
		Form*					form4;

		form1 = someRandomIntern.makeForm("shrubbery creation", "SC");
		form2 = someRandomIntern.makeForm("robotomy request", "RR");
		form3 = someRandomIntern.makeForm("presidential pardon", "PP");
		form4 = someRandomIntern.makeForm("error", "error");
		std::cout << *form1 << std::endl;
		std::cout << *form2 << std::endl;
		std::cout << *form3 << std::endl;
		if (form4 == NULL)
			std::cout << "form4 == NULL" << std::endl;

		std::cout << "--- Form1 (Shrubbery) ---" << std::endl << std::endl;

		b1.signForm(*form1);
		b1.executeForm(*form1);

		std::cout << std::endl << "--- Form2 (Robotomy) ---" << std::endl << std::endl;

		b1.signForm(*form2);
		b1.executeForm(*form2);
		b1.executeForm(*form2);
		b1.executeForm(*form2);
		b1.executeForm(*form2);
		b1.executeForm(*form2);
		b1.executeForm(*form2);
		b1.executeForm(*form2);

		std::cout << std::endl << "--- Form3 (President) ---" << std::endl << std::endl;
	
		b1.signForm(*form3);
		b1.executeForm(*form3);

		delete	form1;
		delete	form2;
		delete	form3;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
