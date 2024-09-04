/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:03:43 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/01 14:50:53 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap name parameter constructor called" << std::endl \
			  << "FragTrap " << name << " was created." << std::endl;
}


FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl \
			  << "FragTrap " << this->_name << " was destructed." << std::endl;
}

void	FragTrap::highFivesGuys(void) const
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "FragTrap " << this->_name << " cannot celebrate with a round of high fives anymore because it's already dead." << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->_name << " celebrates with a round of high fives" << std::endl;
}
