/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:45:04 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/06 16:44:00 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& rhs) : Form(rhs), _target(rhs._target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs)
{
	(void)rhs;
    return *this;
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	static int	i = 0;
	if (this->getSigned() == false)
		throw Form::NotSignedException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();
	else
	{
		std::cout << "Drilling noises... Please stand by." << std::endl;
		if (i % 2 == 0)
			std::cout << "The robotomy on " << this->_target << " was successfully completed." << std::endl;
		else
			std::cout << "The robotomy on " << this->_target << " failed." << std::endl;
		i++;
	}
}
