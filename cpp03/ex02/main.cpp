/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 04:21:46 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/01 11:13:39 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	std::cout << "The game has started." << std::endl;

	FragTrap	ft1("ft1");
	FragTrap	ft2("ft2");

	ft1.highFivesGuys();
	ft2.highFivesGuys();

	ft1.attack("Monster1");
	ft2.attack("Monster2");
	
	ft1.takeDamage(5);
	ft2.takeDamage(3);

	ft1.beRepaired(1);
	ft2.beRepaired(4294967295);
	
	ft1.takeDamage(10);
	ft2.takeDamage(30);

	ft1.takeDamage(4294967295);
	ft2.takeDamage(69);

	ft1.attack("Monster1");
	ft2.attack("Monster2");

	ft1.beRepaired(100);
	ft2.beRepaired(90);

	ft1.highFivesGuys();
	ft2.highFivesGuys();

	std::cout << "The game has finished." << std::endl;
	return (0);
}
