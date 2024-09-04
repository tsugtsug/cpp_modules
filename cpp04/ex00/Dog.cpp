/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:00:29 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/01 16:01:35 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog constructor was called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog deconstructor was called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << this->getType() << " barked !" << std::endl;
}
