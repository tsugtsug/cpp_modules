/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 04:21:46 by yokamura          #+#    #+#             */
/*   Updated: 2024/01/31 23:52:23 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "The game has started." << std::endl;

	ClapTrap	ct1("ct1");
	ClapTrap	ct2("ct2");

	ct1.attack("Monster1");
	ct2.attack("Monster2");
	
	ct1.takeDamage(5);
	ct2.takeDamage(3);

	ct1.beRepaired(10);
	ct2.beRepaired(4294967295);
	
	ct1.takeDamage(10);
	ct2.takeDamage(30);

	ct1.takeDamage(4294967295);
	ct2.takeDamage(69);

	ct1.attack("Monster1");
	ct2.attack("Monster2");

	ct1.beRepaired(100);
	ct2.beRepaired(100);

	std::cout << "The game has finished." << std::endl;
	return (0);
}
