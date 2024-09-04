/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:58:12 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/03 14:28:23 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	// std::cout << "Ice constrouctor was called" << std::endl;
}

Ice::Ice( Ice const & src ) : AMateria("ice")
{
	*this = src;
}

Ice&   Ice::operator=( const Ice& rhs )
{
	// std::cout << "Ice copy constrouctor was called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

Ice::~Ice()
{
    // std::cout << "Ice destrouctor was called" << std::endl;
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
