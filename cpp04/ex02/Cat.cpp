/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:56:03 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/02 09:58:12 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
	std::cout << "Cat constructor was called" << std::endl;
	this->_brain = new Brain();
}

Cat::~Cat()
{
	delete	this->_brain;
	std::cout << "Cat deconstructor was called" << std::endl;
}

Cat::Cat(const Cat &rhs)
{
	std::cout << "Cat copy constructor was called" << std::endl;
	*this = rhs;
}

Cat&	Cat::operator=(const Cat &rhs)
{
	std::cout << "Cat copy assignment constructor was called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
		this->_brain = new Brain(*rhs._brain);
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << this->getType() << " meowed !" << std::endl;
}
