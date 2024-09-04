/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:53:20 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/02 09:58:00 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"

class	Cat : public AAnimal
{
	private:
		Brain	*_brain;

	public:
		Cat();
		~Cat();
		Cat(const Cat &rhs);
		Cat&	operator=(const Cat &rhs);

		void	makeSound(void) const;
};

#endif
