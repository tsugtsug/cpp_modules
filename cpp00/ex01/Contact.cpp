/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:34:48 by yokamura          #+#    #+#             */
/*   Updated: 2023/11/04 12:29:02 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <cctype>

Contact::Contact()
{
	_index = 0;
}

Contact::~Contact()
{
}

bool	Contact::_is_correctInput(std::string input, std::string field)
{
	int	i = 0;
	while (input[i])
	{
		if (std::isspace(static_cast<unsigned char>(input[i])) && input[i] != ' ')
		{
			std::cout << "Do not use tabs or other white space characters other than spaces." << std::endl;
			return (false);
		}
		i++;
	}
	if (!field.compare("phone number"))
	{
		i = 0;
		while (input[i])
		{
			if (!std::isdigit(static_cast<unsigned char>(input[i])))
			{
				std::cout << "Please use only number." << std::endl;
				return (false);
			}
			i++;
		}
	}
	return (true);
}

bool	Contact::_isAllspace(std::string str)
{
	int	i = 0;
	while (str[i])
	{
		if (!std::isspace(static_cast<unsigned char>(str[i])))
			return (true);
		i++;
	}
	return (false);
}

std::string	Contact::_getInput(std::string field)
{
	std::string	input;

	while (1)
	{
		std::cout << "Please enter " << field << " : " << std::flush;
		std::getline(std::cin, input);
		// std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (!std::cin.good())
		{
			std::cin.clear();
			std::cerr << "An error occurred during input." << std::endl;
		}
		else if (input.empty() || !_isAllspace(input))
		{
			std::cerr << "The input is empty." << std::endl;
		}
		else if (!this->_is_correctInput(input, field))
			;
		else
			break ;
		std::cout << "Try again." << std::endl << std::endl;
	}
	return (input);
}

std::string	Contact::_create10string(std::string field)
{
	std::string	rtn = "          ";

	if (field.length() > 10)
		return (field.substr(0, 9) + '.');
	else
	{
		int	i = 0;
		while (i < (10 - static_cast<int>(field.length())))
		{
			std::cout << " ";
			i++;
		}
		return (field);
	}
}

void	Contact::add(int index)
{
	this->_index = index;
	this->_firstName = this->_getInput("first name");
	this->_lastName = this->_getInput("last name");
	this->_nickName = this->_getInput("nickname");
	this->_phoneNumber = this->_getInput("phone number");
	this->_darksetSecret = this->_getInput("darkset secret");
}

void	Contact::displayContacts()
{
	std::cout << "|         " << this->_index + 1 << "|" 
	<< _create10string(this->_firstName) << "|" \
	<< _create10string(this->_lastName) << "|" \
	<< _create10string(this->_nickName) << "|" \
	<< std::endl;
}

void	Contact::displayInformation()
{
	std::cout << std::endl \
			  << "-------------THE INFORMATION OF INDEX " << this->_index + 1 << "--------------" << std::endl \
			  << "First Name     : [" << this->_firstName << "]" << std::endl \
			  << "Last Name      : [" << this->_lastName << "]" << std::endl \
			  << "Nickname       : [" << this->_nickName << "]" << std::endl \
			  << "Phone Number   : [" << this->_phoneNumber << "]" << std::endl \
			  << "Darkset Secret : [" << this->_darksetSecret << "]" << std::endl \
			  << "-----------------------------------------------------" << std::endl;
}
