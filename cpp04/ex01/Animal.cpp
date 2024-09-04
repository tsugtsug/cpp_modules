/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:56:42 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/01 15:52:49 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << "Animal constructor was called" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal name parameter constructor was called" << std::endl;
}

Animal::Animal(const Animal &rhs)
{
	std::cout << "Animal copy constructor was called" << std::endl;
    *this = rhs;
}

Animal&	Animal::operator=(const Animal &rhs)
{
	std::cout << "Animal copy assignment constructor was called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;		
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor was called" << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal makeSound was called" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}
