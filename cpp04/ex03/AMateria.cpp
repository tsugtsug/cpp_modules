/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:33:56 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/03 14:17:44 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("")
{
	// std::cout << "AMateria constructor was called" << std::endl;
	// std::cout << "AMateria " << this->_type << "was created" << std::endl; 
}

AMateria::~AMateria()
{
	// std::cout << "AMateria deconstructor was called" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	// std::cout << "AMateria type parameter constructor was called" << std::endl;
	// std::cout << "AMateria " << this->_type << "was created" << std::endl; 
}

AMateria::AMateria(const AMateria &rhs)
{
	*this = rhs;
}

AMateria&	AMateria::operator=(const AMateria &rhs)
{
	// std::cout << "AMateria copy constructor was called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

std::string	const & AMateria::getType(void) const
{
	return (this->_type);
}

AMateria*	AMateria::clone() const
{
    return ((AMateria*)this);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "AMateria " << this->_type << " was used by " << target.getName() << std::endl;
}
