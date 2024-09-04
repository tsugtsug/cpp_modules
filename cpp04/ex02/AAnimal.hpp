/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:34:04 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/02 10:01:59 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
	protected:
		std::string _type;
	public:
		AAnimal();
		AAnimal(std::string type);
		AAnimal(const AAnimal &rhs);
		AAnimal&	operator=(const AAnimal &rhs);
		virtual ~AAnimal();

		virtual	void	makeSound(void) const = 0;
		std::string		getType(void) const;
};

#endif
