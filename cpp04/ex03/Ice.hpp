/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 14:32:54 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/03 14:03:53 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	private:
		
	public:
		Ice();
		~Ice();
		Ice(const Ice &rhs);
		Ice&	operator=(const Ice &rhs);

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif
