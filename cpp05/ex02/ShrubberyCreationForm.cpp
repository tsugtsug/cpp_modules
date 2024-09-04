/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:50:42 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/06 16:17:20 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& rhs) : AForm(rhs), _target(rhs._target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs)
{
	(void)rhs;
    return *this;
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (this->getSigned() == false)
		throw AForm::NotSignedException();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	else
	{
		std::string		filename = this->_target + "_shrubbery";
		std::ofstream	ofs(filename.c_str());
		if (!ofs)
		{
			std::cerr << "Error: Could not open file " << filename << " for writing." << std::endl;
			return ;
		}
		ofs << "      /\\  " << std::endl;
		ofs << "     /\\*\\ " << std::endl;
		ofs << "    /\\O\\*\\ " << std::endl;
		ofs << "   /*/\\/\\/\\ " << std::endl;
		ofs << "  /\\O\\/\\*\\/\\ " << std::endl;
		ofs << " /\\*\\/\\*\\/\\/\\ " << std::endl;
		ofs << "/\\O\\/\\/*/\\/O/\\" << std::endl;
		ofs << "      || " << std::endl;
		ofs << "      || " << std::endl;
		ofs << "      || " << std::endl;
		ofs.close();
	}
}
