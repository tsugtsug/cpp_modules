/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:41:34 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/06 17:00:57 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class	Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExecute;

		Form();
	public:
		Form(const std::string &name, int gradeToSign, int gradeToExecute);
		virtual ~Form();
		Form(const Form &rhs);
		Form&	operator=(const Form &rhs);

		std::string	getName(void) const;
		bool		getSigned(void) const;
		int			getGradeToSign(void) const;
		int		getGradeToExecute(void) const;

		void		beSigned(const Bureaucrat &b);

		virtual void	execute(Bureaucrat const &executor) const = 0;

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
		class NotSignedException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return ("The form is not signed");
				}
		};
};

std::ostream&	operator<<(std::ostream& os, const Form& f);

#endif
