/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:08:39 by yokamura          #+#    #+#             */
/*   Updated: 2023/11/04 17:37:52 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int	main(void)
{
	std::string	name;

	std::cout << "Allocate the zombies on the stack" << std::endl;
	std::cout << "Type name :" << std::flush;
	std::cin >> name;
	std::cout << std::endl;

	Zombie	z1(name);
	z1.announce();
	
	std::cout <<std::endl << "Allocate the zombies on the heap." << std::endl;
	std::cout << "Type name :" << std::flush;
	std::cin >> name;
	std::cout << std::endl;
	
	Zombie	*z2 = newZombie(name);
	z2->announce();
	std::cout << std::endl;
	delete z2;
	
	std::cout <<std::endl << "Allocate the zombies on the stack, but in the randomChump function." << std::endl;
	std::cout << "Type name :" << std::flush;
	std::cin >> name;
	std::cout << std::endl;

	randomChump(name);
	std::cout << std::endl;
	return (0);
}
