/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:20:04 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/03 13:58:07 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	private:
		
	public:
		Cure();
		~Cure();
		Cure(const Cure &rhs);
		Cure&	operator=(const Cure &rhs);

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif
