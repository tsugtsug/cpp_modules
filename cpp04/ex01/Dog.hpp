/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:59:53 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/01 20:16:43 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class	Dog : public Animal
{
	private:
		Brain	*_brain;

	public:
		Dog();
		~Dog();
		Dog(const Dog &rhs);
		Dog&	operator=(const Dog &rhs);

		void	makeSound(void) const;
};

#endif
