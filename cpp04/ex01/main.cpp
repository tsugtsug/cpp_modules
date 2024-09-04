/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:25:13 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/03 12:39:53 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;

	Dog dog1;
	{
		Dog dog2 = dog1;
		Dog dog3(dog1);
	}

	const Animal*	a1 = new Animal();
	a1->makeSound();
	delete a1;

	const Animal*	animals[6] = {new Dog(), new Dog(), new Dog(), new Cat(), new Cat(), new Cat()};	 
	for (size_t j = 0; j < 6; j++)
		animals[j]->makeSound();

	for (size_t	i = 0; i < 6; i++)
		delete	animals[i];
	return 0;
}
