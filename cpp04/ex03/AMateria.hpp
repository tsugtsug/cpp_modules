/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 10:21:49 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/03 14:08:21 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class	ICharacter;

class	AMateria
{
	protected:
		std::string _type;
		AMateria();
	public:
		virtual	~AMateria();
		AMateria(std::string const &type);
		AMateria(const AMateria &rhs);
		AMateria&	operator=(const AMateria &rhs);

		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
