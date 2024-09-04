/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 14:14:42 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/03 13:06:33 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_materias[4];
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource &rhs);
		MateriaSource&	operator=(const MateriaSource &rhs);

		void	learnMateria(AMateria* materia);
		AMateria*	createMateria(std::string const &type);
};

#endif
