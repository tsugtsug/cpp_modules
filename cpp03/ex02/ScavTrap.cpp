/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 00:21:03 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/01 14:49:50 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap name parameter constructor called" << std::endl \
			  << "ScavTrap " << name << " was created." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl \
			  << "ScavTrap " << this->_name << " was destructed." << std::endl;
}

void	ScavTrap::attack(std::string const& target)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " cannnot attack because it's already dead." << std::endl;
		return ;
	}
	if (this->_energyPoints <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " cannnot attack anymore due to a lack of energy points." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " \
			  << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
	std::cout << "ScavTrap " << this->_name << " has " << this->_hitPoints << " hit points left, and " \
			  << this->_energyPoints << " energy points left." << std::endl;
}

void	ScavTrap::guardGate(void) const
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " is not in Gate keeper mode anymore because it's already dead." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}
