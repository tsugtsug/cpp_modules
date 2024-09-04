/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:57:16 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/03 14:17:53 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"


Cure::Cure() : AMateria("cure")
{
	// std::cout << "Cure constrouctor was called" << std::endl;
}

Cure::Cure(Cure const & src) : AMateria("cure")
{
    *this = src;
}

Cure&	Cure::operator=(const Cure& rhs)
{
	// std::cout << "Cure copy constrouctor was called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

Cure::~Cure()
{
	// std::cout << "Cure destrouctor was called" << std::endl;
}

AMateria*	Cure::clone() const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}


