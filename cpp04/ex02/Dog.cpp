/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:00:29 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/02 09:58:31 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
	std::cout << "Dog constructor was called" << std::endl;
	this->_brain = new Brain();
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog deconstructor was called" << std::endl;
}

Dog::Dog(const Dog &rhs)
{
	std::cout << "Dog copy constructor was called" << std::endl;
	*this = rhs;
}

Dog&	Dog::operator=(const Dog &rhs)
{
	std::cout << "Dog copy assignment constructor was called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
		this->_brain = new Brain(*rhs._brain);
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << this->getType() << " barked !" << std::endl;
}
