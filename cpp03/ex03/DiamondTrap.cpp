/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:35:54 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/01 14:50:33 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) :  ScavTrap(name), FragTrap(name)
{
	this->_name = name;
	this->ClapTrap::_name = name + "_clap_name";

	this->FragTrap::_hitPoints = 100;
	this->ScavTrap::_energyPoints = 50;
	this->FragTrap::_attackDamage = 30;
	
	std::cout << "DiamondTrap name parameter constructor called" << std::endl \
			  << "DiamondTrap " << name << " was created." << std::endl;	
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl \
			  << "DiamondTrap " << this->_name << " was destructed." << std::endl;
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "My name is " << this->_name << ", and ClapTrap name is " << this->ClapTrap::_name << std::endl;
}
