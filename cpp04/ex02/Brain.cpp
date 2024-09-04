/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:29:19 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/01 16:32:51 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor was called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain deconstructor was called" << std::endl;
}

Brain::Brain(const Brain &rhs)
{
	std::cout <<  "Brain copy constructor was called" << std::endl;
	*this = rhs;
}

Brain&	Brain::operator=(const Brain &rhs)
{
	std::cout << "Brain copy assignment constructor was called" << std::endl;
	if (this != &rhs)
	{
		for (size_t i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return (*this);
}
