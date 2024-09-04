/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:49:00 by yokamura          #+#    #+#             */
/*   Updated: 2023/11/04 16:53:04 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include "myawesomephonebook.h"

bool	isOnlyone(std::string input)
{
	int	i = 0;
	int	count = 0;

	while (input[i])
	{
		if (!std::isspace(static_cast<unsigned char>(input[i])))
		{
			count++;
			while (!std::isspace(static_cast<unsigned char>(input[i])) && input[i])
				i++;
		}
		else
			i++;
	}
	if (count == 1)
		return (true);
	else
		return (false);
}

int	main(void)
{
	PhoneBook	*pb;
	std::string	input;
	pb = new PhoneBook();
	pb->begin();
	while (1)
	{
		std::cout << std::endl << "Enter commands (ADD, SEARCH, EXIT) : ";
		std::getline(std::cin, input);
		if (input.empty())
		{
			std::cout << "The command is empty." << std::endl << "Try again." << std::endl;
			continue ;
		}
		else if (!isOnlyone(input))
		{
			std::cerr << "Enter only one commands." << std::endl;
			continue ;
		}
		else if (!input.compare("ADD"))
		{
			pb->add();
		}
		else if (!input.compare("SEARCH"))
		{
			pb->search();
		}
		else if (!input.compare("EXIT"))
			break ;
		else
		{
			std::cout << "The command '" << input << "' doesn't exist." << std::endl \
						<< "Please enter only these three commands (ADD, SEARCH, EXIT)" << std::endl;
		}
	}
	delete pb;
	std::cout << "My Awsome PhoneBook Program ended." << std::endl; 
	// system("leaks -q myawesomephonebook");
	return (0);
}
