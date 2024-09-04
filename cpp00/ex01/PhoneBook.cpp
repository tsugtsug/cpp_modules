/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:25:06 by yokamura          #+#    #+#             */
/*   Updated: 2023/11/11 12:27:45 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook()
{
	_size = 0;
	_numberContacts = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::begin()
{
	std::cout << "Welcome to My Awsome Book !" << std::endl \
			  << "--------------------------USAGE---------------------------" << std::endl \
			  << "You can use these three commands below." << std::endl \
			  << "ADD    : save a new contact" << std::endl \
			  << "SEARCH : display a specific contact" << std::endl \
			  << "Exit   : The program quits and the contacts are lost forever" << std::endl \
			  << "----------------------------------------------------------" << std::endl;
}

void	PhoneBook::add()
{
	std::cout << std::endl << _size << " contacts are currently listed in the PhoneBook." << std::endl;
	std::cout << "You can add a new contact to the PhoneBook." << std::endl << std::endl;
	_array[_size].add(_size);
	_size++;
	_numberContacts++;
	if (_size == 8)
		_size = 0;
	if (_numberContacts > 8)
		_numberContacts = 8;
}

void	PhoneBook::search()
{
	std::cout << std::endl \
			  << "-------------------CONTACTS------------------" << std::endl \
			  << "|     index|first name| last name|  nickname|" << std::endl;
	int	i = 0;
	while (i < this->_numberContacts)
	{
		std::cout << "---------------------------------------------" << std::endl;
		_array[i].displayContacts();
		i++;
	}
	std::cout << "---------------------------------------------" << std::endl;
	if (this->_numberContacts > 0)
	{
		std::cout << std::endl \
				  << "You can get the contact information." \
				  << std::endl;
		int	input;
		while (1)
		{
			if (this->_numberContacts == 1)
				std::cout << "Enter the index 1 : " << std::flush;
			else
				std::cout << "Enter the index (1 to " << this->_numberContacts << ") : " << std::flush;
			std::cin >> input;
			if (!std::cin.good())
			{
				std::cin.clear();
				std::cerr << "An error occurred during input." << std::endl;
			}
			else if (input < 1 ||  input > this->_numberContacts)
				std::cerr << "The index is out of range." << std::endl;
			else
			{
				this->_array[input - 1].displayInformation();
				break ;
			}
			std::cout << "Try again." << std::endl << std::endl;
			std::cin.ignore();
		}
		std::cin.ignore();
	}
}
