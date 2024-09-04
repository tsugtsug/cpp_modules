/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 04:21:46 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/01 10:50:15 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "The game has started." << std::endl;

	ScavTrap	st1("st1");
	ScavTrap	st2("st2");

	st1.attack("Monster1");
	st2.attack("Monster2");
	
	st1.takeDamage(5);
	st2.takeDamage(3);

	st1.beRepaired(10);
	st2.beRepaired(4294967295);
	
	st1.takeDamage(10);
	st2.takeDamage(30);

	st1.takeDamage(4294967295);
	st2.takeDamage(69);

	st1.attack("Monster1");
	st2.attack("Monster2");

	st1.beRepaired(100);
	st2.beRepaired(100);

	st1.guardGate();
	st2.guardGate();

	std::cout << "The game has finished." << std::endl;
	return (0);
}
