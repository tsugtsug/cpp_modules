/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 15:58:48 by yokamura          #+#    #+#             */
/*   Updated: 2024/01/31 23:48:45 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl \
			  << "ClapTrap " << "\"\"" << " was created." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap name parameter constructor called" << std::endl \
			  << "ClapTrap " << this->_name << " was created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl \
			  << "ClapTrap " << rhs._name << " was copied." << std::endl;
	*this = rhs;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << "ClapTrap Copy assignment called" << std::endl \
			  << "ClapTrap " << rhs._name << " was copied." << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl \
			  << "ClapTrap " << this->_name << " was destructed." << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " cannnot attack because it's already dead." << std::endl;
		return ;
	}
	if (this->_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " cannnot attack anymore due to a lack of energy points." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " \
			  << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
	std::cout << "ClapTrap " << this->_name << " has " << this->_hitPoints << " hit points left, and " \
			  << this->_energyPoints << " energy points left." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " cannnot be attacked because it's already dead." << std::endl;
			return ;
	}
	std::cout << "ClapTrap " << this->_name << " took " << amount << " points of damage." << std::endl;
	if (this->_hitPoints <= amount)
	{
		std::cout << "ClapTrap " << this->_name << " died." <<std::endl;
		this->_hitPoints = 0;
	}
	else
	{
		this->_hitPoints -= amount;
		std::cout << "ClapTrap " << this->_name << " has " << this->_hitPoints << " hit points left, and " \
			  << this->_energyPoints << " energy points left." << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " cannnot be repaired because it's already dead." << std::endl;
		return ;
	}
	if (this->_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " cannnot be rapaired anymore due to a lack of energy points." <<std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " regained " << amount << " hit points !" << std::endl;
	if ((amount > MAX_HP) || (amount + this->_hitPoints > 100))
	{
		amount = 100 - this->_hitPoints;
		std::cout << "ClapTrap " << this->_name << " has fully recovered !!!" << std::endl;	
	}
	this->_hitPoints += amount;
	this->_energyPoints--;
	std::cout << "ClapTrap " << this->_name << " has " << this->_hitPoints << " hit points left, and " \
			  << this->_energyPoints << " energy points left." << std::endl;
}
