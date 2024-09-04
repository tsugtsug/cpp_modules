/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 12:52:18 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/03 14:18:20 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (size_t i = 0; i < 4; i++)
		_materias[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (size_t i = 0; i < 4; i++)
	{
		if (_materias[i] != NULL)
			delete _materias[i];
	}
}

MateriaSource::MateriaSource(MateriaSource const &rhs)
{
	*this = rhs;
}

MateriaSource& MateriaSource::operator=(MateriaSource const &rhs)
{
	if (this != &rhs)
	{
		for (size_t i = 0; i < 4; i++)
			_materias[i] = rhs._materias[i];
	}
	return (*this);
} 

void	MateriaSource::learnMateria(AMateria* materia)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (_materias[i] == NULL)
		{
			_materias[i] = materia;
			// std::cout << "Materia " << materia->getType() << " was learned by MateriaSource." << std::endl;
			return ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for (size_t i = 0; i < 4; i++)
	{
		if ((_materias[i] != NULL) && (_materias[i]->getType() == type))
		{
			// std::cout << "Materia " << type << "was created by MateriaSource." << std::endl;
			return (_materias[i]->clone());
		}
	}
	// std::cout << "The type is unknown" << std::endl;
	return (NULL);
}
