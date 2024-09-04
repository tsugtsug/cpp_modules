/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:55:23 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/06 10:55:36 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(const std::string &name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1)
		throw AForm::GradeTooHighException();
    else if (gradeToSign > 150)
		throw AForm::GradeTooLowException();
	if (gradeToExecute < 1)
		throw AForm::GradeTooHighException();
    else if (gradeToExecute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &rhs) : _name(rhs.getName()), _signed(rhs.getSigned()), _gradeToSign(rhs.getGradeToSign()), _gradeToExecute(rhs.getGradeToExecute())
{
}

AForm&	AForm::operator=(const AForm &rhs)
{
	if (this != &rhs)
		this->_signed = rhs.getSigned();
	return (*this);
}

AForm::~AForm()
{
}

std::string	AForm::getName(void) const
{
	return (this->_name);
}

bool	AForm::getSigned(void) const
{
	return (this->_signed);
}

int	AForm::getGradeToSign(void) const
{
	return (this->_gradeToSign);
}

int	AForm::getGradeToExecute(void) const
{
	return (this->_gradeToExecute);
}

void	AForm::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > this->_gradeToSign)
		throw AForm::GradeTooLowException();
	else
		this->_signed = true;
}

std::ostream&	operator<<(std::ostream& os, const AForm &f)
{
	os << "------------- AForm Info -------------" << std::endl \
	   << "AForm name       : " << f.getName() << std::endl \
	   << "Signed          : " << f.getSigned() << std::endl \
	   << "Grade to sign   : " << f.getGradeToSign() << std::endl \
	   << "Grade to execute: " << f.getGradeToExecute() << std::endl \
	   << "-------------------------------------" << std::endl;
	return (os);
}
