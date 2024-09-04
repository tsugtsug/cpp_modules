/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:56:03 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/01 15:59:45 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat constructor was called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat deconstructor was called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << this->getType() << " meowed !" << std::endl;
}
