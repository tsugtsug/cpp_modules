/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 19:12:59 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/06 15:27:47 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class	AForm;

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;

		Bureaucrat();
	public:
		Bureaucrat(const std::string &name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &rhs);
		Bureaucrat&	operator=(const Bureaucrat &rhs);
		
		std::string	getName(void)	const;
		int			getGrade(void)	const;
		void		incrementGrade(void);
		void		decrementGrade(void);

		void		signForm(AForm &f);

		void	executeForm(AForm const &form) const;

		class	GradeTooHighException : public std::exception
		{
			public:
				const char*	what() const throw()
				{
					return ("Grade too high");
				}
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return ("Grade too low");
				}
		};
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& b);

#endif
