/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 04:21:46 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/01 11:59:14 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	std::cout << "The game has started." << std::endl;

	DiamondTrap	dt1("dt1");
	DiamondTrap	dt2("dt2");

	dt1.whoAmI();
	dt2.whoAmI();

	dt1.attack("Monster1");
	dt2.attack("Monster2");
	
	dt1.takeDamage(5);
	dt2.takeDamage(3);

	dt1.beRepaired(1);
	dt2.beRepaired(4294967295);
	
	dt1.takeDamage(10);
	dt2.takeDamage(30);

	dt1.takeDamage(4294967295);
	dt2.takeDamage(69);

	dt1.attack("Monster1");
	dt2.attack("Monster2");

	dt1.beRepaired(100);
	dt2.beRepaired(90);

	std::cout << "The game has finished." << std::endl;
	return (0);
}
