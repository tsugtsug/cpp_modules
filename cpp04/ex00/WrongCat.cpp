/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:56:03 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/01 16:15:26 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat constructor was called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat deconstructor was called" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << this->getType() << " meowed !" << std::endl;
}
