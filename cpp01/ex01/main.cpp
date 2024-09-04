/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:08:39 by yokamura          #+#    #+#             */
/*   Updated: 2023/11/04 17:53:33 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int	main(void)
{
	std::string	name;
	int			N;

	std::cout << "Type whatever name you want :" << std::flush;
	std::cin >> name;
	std::cout << std::endl;
	std::cout << "How many zombies do you want :" << std::flush;
	std::cin >> N;
	Zombie	*p = zombieHorde(N, name);
	
	int	i = 0;
	while (i < N)
	{
		std::cout << "["<< i <<"]:";
		p[i].announce();
		i++;
	}
	delete [] p;
	system("leaks -q Moarbrainz!");
	return (0);
}
