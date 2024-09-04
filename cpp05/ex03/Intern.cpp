/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:32:03 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/06 17:27:28 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &rhs)
{
	*this = rhs;
}

Intern::~Intern()
{
}

Intern&	Intern::operator=(const Intern &rhs)
{
	(void)rhs;
	return (*this);
}

Form*	Intern::makeForm(std::string name, std::string target)
{
	std::string formKind[3] =
	{
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	size_t i = 0;
	for (i = 0; i < 3; i++)
	{
		if (name == formKind[i])
			break ;
	}
	switch (i)
	{
		case 0:
			std::cout << "Intern creates " << name << std::endl;
			return (new ShrubberyCreationForm(target));
		case 1:
			std::cout << "Intern creates " << name << std::endl;
			return (new RobotomyRequestForm(target));
		case 2:
			std::cout << "Intern creates " << name << std::endl;
			return (new PresidentialPardonForm(target));
		default:
			std::cerr << "Intern cannot create " << name << " form" << std::endl;
			return (NULL);
	}
}
