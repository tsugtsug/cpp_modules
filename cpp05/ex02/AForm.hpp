/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:09:34 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/06 17:00:35 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class	Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExecute;

		AForm();
	public:
		AForm(const std::string &name, int gradeToSign, int gradeToExecute);
		virtual ~AForm();
		AForm(const AForm &rhs);
		AForm&	operator=(const AForm &rhs);

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

std::ostream&	operator<<(std::ostream& os, const AForm& f);

#endif
