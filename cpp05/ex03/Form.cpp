/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:55:23 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/06 16:39:58 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string &name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1)
		throw Form::GradeTooHighException();
    else if (gradeToSign > 150)
		throw Form::GradeTooLowException();
	if (gradeToExecute < 1)
		throw Form::GradeTooHighException();
    else if (gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &rhs) : _name(rhs.getName()), _signed(rhs.getSigned()), _gradeToSign(rhs.getGradeToSign()), _gradeToExecute(rhs.getGradeToExecute())
{
}

Form&	Form::operator=(const Form &rhs)
{
	if (this != &rhs)
		this->_signed = rhs.getSigned();
	return (*this);
}

Form::~Form()
{
}

std::string	Form::getName(void) const
{
	return (this->_name);
}

bool	Form::getSigned(void) const
{
	return (this->_signed);
}

int	Form::getGradeToSign(void) const
{
	return (this->_gradeToSign);
}

int	Form::getGradeToExecute(void) const
{
	return (this->_gradeToExecute);
}

void	Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}

std::ostream&	operator<<(std::ostream& os, const Form &f)
{
	os << "------------- Form Info -------------" << std::endl \
	   << "Form name       : " << f.getName() << std::endl \
	   << "Signed          : " << f.getSigned() << std::endl \
	   << "Grade to sign   : " << f.getGradeToSign() << std::endl \
	   << "Grade to execute: " << f.getGradeToExecute() << std::endl \
	   << "-------------------------------------" << std::endl;
	return (os);
}
