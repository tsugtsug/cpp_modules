/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:31:12 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/06 16:59:03 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	private:
		
	public:
		Intern();
		Intern(const Intern &rhs);
		~Intern();

		Intern&	operator=(const Intern &rhs);

		Form	*makeForm(std::string name, std::string target);
};

#endif
