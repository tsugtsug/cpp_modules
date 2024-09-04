/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:56:42 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/02 09:57:26 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimal")
{
	std::cout << "AAnimal constructor was called" << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << "AAnimal name parameter constructor was called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &rhs)
{
	std::cout << "AAnimal copy constructor was called" << std::endl;
    *this = rhs;
}

AAnimal&	AAnimal::operator=(const AAnimal &rhs)
{
	std::cout << "AAnimal copy assignment constructor was called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;		
	}
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor was called" << std::endl;
}

void	AAnimal::makeSound(void) const
{
	std::cout << "AAnimal makeSound was called" << std::endl;
}

std::string	AAnimal::getType(void) const
{
	return (this->_type);
}
